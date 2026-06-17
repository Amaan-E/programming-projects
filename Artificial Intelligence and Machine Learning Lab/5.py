from sklearn.datasets import fetch_openml
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB

data = fetch_openml("mnist_784")
# print(data)

x, y = data.data, data.target

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.8, random_state=1)

model = GaussianNB()
model.fit(x_train, y_train)
p = model.predict(x_test)

print(accuracy_score(y_test, p))
