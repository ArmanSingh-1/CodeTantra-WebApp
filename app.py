import os
from flask import Flask, render_template, abort
from pygments import highlight
from pygments.lexers import get_lexer_for_filename
from pygments.formatters import HtmlFormatter

app = Flask(__name__)
# Get the absolute path to the base 'Codes' directory.
# This ensures that all paths are relative to this root.
CODE_ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'static/Codes')

# A list of files and folders to ignore when listing directory contents.
IGNORED_ITEMS = ['.git', '.DS_Store', 'Thumbs.db', '.gitignore']

@app.route('/', defaults={'path': ''})
@app.route('/<path:path>')
def list_contents(path):
    """
    Handles browsing of folders and files.
    If the path is a directory, it lists the contents.
    If the path is a file, it renders the view_code template.
    Now includes a filter to ignore specific hidden files.
    """
    # Create the full absolute path
    full_path = os.path.join(CODE_ROOT, path)

    # Security check: ensure the path does not go outside of the CODE_ROOT
    if not os.path.normpath(full_path).startswith(os.path.normpath(CODE_ROOT)):
        return "Access denied.", 403

    try:
        # Check if the path is a file or a directory
        if os.path.isfile(full_path):
            # If it's a file, display its content using the view_code logic
            filename = os.path.basename(full_path)
            with open(full_path, 'r', encoding='utf-8') as f:
                code = f.read()

            lexer = get_lexer_for_filename(filename)
            design = HtmlFormatter(linenos=True, cssclass="source")
            glow = highlight(code, lexer, design)

            parent_path = os.path.dirname(path)
            return render_template('viewer.html', filename=filename, code_html=glow, parent_path=parent_path)

        elif os.path.isdir(full_path):
            # If it's a directory, list its contents
            contents = os.listdir(full_path)
            
            # Filter out any files or folders that are in the IGNORED_ITEMS list
            filtered_contents = [item for item in contents if item not in IGNORED_ITEMS]

            # Separate files and folders for clear display
            folders = sorted([item for item in filtered_contents if os.path.isdir(os.path.join(full_path, item))])
            files = sorted([item for item in filtered_contents if os.path.isfile(os.path.join(full_path, item))])
            
            return render_template('index.html', path=path, folders=folders, files=files)
        
        else:
            # Handle non-existent paths
            abort(404)
    
    except FileNotFoundError:
        return "Error: Path not found.", 404
    except Exception as e:
        # A general catch-all for other potential issues
        return f"An error occurred: {e}", 500

@app.route('/view/<path:path>')
def view_code(path):
    """
    This route is now deprecated. The list_contents route now handles file viewing directly.
    I've kept it here to show you how a dedicated route would work, but it's not used
    in the new version of the code.
    """
    return "This route is no longer in use. Please use the main browsing route.", 410

if __name__ == '__main__':
    app.run(debug=True)
