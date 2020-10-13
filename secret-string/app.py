from flask import Flask
from flask import render_template, request
app = Flask(__name__)

@app.route('/')
def home():
    return app.send_static_file("index.html")

@app.route('/authenticate.js')
def auth():
    return app.send_static_file('authenticate.js')

