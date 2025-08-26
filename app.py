import os
from flask import Flask, render_template
from pygments import highlight
from pygments.lexers import get_lexer_for_filename
from pygments.formatters import HtmlFormatter

app = Flask(__name__)
# Get the absolute path to the directory containing this script
base_dir = os.path.dirname(os.path.abspath(__file__))
location = os.path.join(base_dir, 'static/Codes')

@app.route('/')
def home():
    """
    Handles the home page, listing all code files.
    The files are now sorted alphabetically by name.
    """
    try:
        # Get a list of files with .py or .cpp extensions
        files = [f for f in os.listdir(location) if f.endswith(('.py', '.cpp'))]
        
        # Sort the files alphabetically before rendering the template
        sorted_files = sorted(files)
        
        # Pass the sorted list to the template
        return render_template('index.html', files=sorted_files)
    except FileNotFoundError:
        return "Error: Codes not found.", 404

@app.route('/view/<string:name>')
def view_code(name):
    """
    Handles the code viewing page.
    """
    filepath = os.path.join(location, name)

    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            code = f.read()

        lexer = get_lexer_for_filename(name)
        design = HtmlFormatter(linenos=True, cssclass="source")
        glow = highlight(code, lexer, design)

        return render_template('viewer.html', filename=name, code_html=glow)
    except FileNotFoundError:
        return "Error: File not found.", 404

if __name__ == '__main__':
    # Setting debug=True for development
    app.run(debug=True)
