from sklearn.datasets import load_breast_cancer
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC

data = load_breast_cancer()

# print(data)
x, y = data.data, data.target

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2)

model = SVC()
model.fit(x_train, y_train)

pred = model.predict(x_test)

print("acc: ", accuracy_score(y_test, pred))