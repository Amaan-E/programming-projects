from sklearn.datasets import load_iris
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier

data = load_iris()

# print(data)
x, y = data.data, data.target

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.8)

model = KNeighborsClassifier()
model.fit(x_train, y_train)
p = model.predict(x_test)

print(accuracy_score(y_test, p))