import numpy as np
import pandas as pd

data = pd.read_csv("Seattle2014.csv")
print(data.head())

rainfall = data["PRCP"].values
inches = rainfall/254
print(inches.shape)
