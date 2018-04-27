import numpy as np
import re
import matplotlib
import matplotlib.pyplot as plt

fig, ax = plt.subplots()

with open('pointCloud.vd') as f:
    content = f.readlines()

a = np.zeros([2, 1024])
b = []

for index, line in enumerate(content):
    temp = [x.strip() for x in line.split(',')]
    a[0][index] = temp[0]
    a[1][index] = temp[1]

print(a)

ax.scatter(a[0], a[1], marker='.')


plt.show()
