import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split

# data = pd.read_csv("diabetes.csv")
data = pd.read_csv("https://raw.githubusercontent.com/plotly/datasets/refs/heads/master/diabetes.csv")
x = data.drop("Outcome", axis=1)
y = data["Outcome"]

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=1)

model = LogisticRegression(max_iter=1000)
model.fit(x_train, y_train)

pred = model.predict(x_test)
print("Accuracy:", accuracy_score(y_test, pred))
