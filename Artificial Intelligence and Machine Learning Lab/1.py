import sklearn.datasets
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split

data = sklearn.datasets.fetch_california_housing()
# print(data)

x, y = data.data, data.target

# print(x)
# print(y)

x_train, x_test, y_train, y_test = train_test_split(x, y, train_size=0.8, test_size=0.2)


model = LinearRegression()
model.fit(x_train, y_train)

predictions = model.predict(x_test)

# print(predictions)
print(mean_squared_error(y_test, predictions))
