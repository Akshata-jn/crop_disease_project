from flask import Flask, render_template, request
import os

app = Flask(__name__)

UPLOAD_FOLDER = os.path.join(os.getcwd(),'uploads')
app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/predict', methods=['POST'])
def predict():

    file = request.files['leaf_image']

    if file:
        filepath = os.path.join(app.config['UPLOAD_FOLDER'], file.filename)
        file.save(filepath)

        result = "Leaf Disease Detected"

        return render_template('result.html',
                               prediction=result,
                               image_path=filepath)

    return "No file uploaded"

if __name__ == '__main__':
    app.run(debug=True)