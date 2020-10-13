from flask import Flask
from flask import render_template, request
app = Flask(__name__)

@app.route('/')
def home():
    return app.send_static_file("index.html")

@app.route('/robots.txt')
def auth():
    return app.send_static_file('robots.txt')

@app.route('/secret-tunnel.html')
def secret():
    return app.send_static_file('secret-tunnel.html')
