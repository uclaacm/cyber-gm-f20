from flask import Flask
from flask import render_template, request
app = Flask(__name__)

@app.route('/')
def home():
    return render_template("home.html")

@app.route('/onlycabbages', methods=('GET', 'POST'))
def flag():
    if len(request.args) > 0:
        leaves = request.args.get('cabbages')
        if leaves == '888':
            return render_template("flag.html")
        else:
            return render_template("403.html")
    return render_template("401.html")



# world wide weebs
# ive been around the world! see my flag collection on my premium page
# technical difficulty
# /onlycabbages
# inner ring
# 401 unauthorized
# go back or prove ur a true cabbage head 
# help
# show how to put into url

# # layers