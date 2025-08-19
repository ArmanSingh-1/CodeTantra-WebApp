import os
from flask import Flask, render_template
from pygments import highlight
from pygments.lexers import get_lexer_for_filename
from pygments.formatters import HtmlFormatter

app = Flask(__name__)
location = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'static/Codes')

@app.route('/')
def home():
    try:
        files = [f for f in os.listdir(location) if f.endswith(('.py', '.cpp'))]
        return render_template('index.html', files=files)
    except FileNotFoundError:
        return "Error: Codes not found.", 404

@app.route('/view/<string:name>')
def view_code(name):
    filepath = os.path.join(location, name)

    with open(filepath, 'r', encoding='utf-8') as f:
        code = f.read()

    lexer = get_lexer_for_filename(name)
    design = HtmlFormatter(linenos=True, cssclass="source")
    glow = highlight(code, lexer, design)

    return render_template('viewer.html', filename=name, code_html=glow)

if __name__ == '__main__':
    app.run(debug=True)