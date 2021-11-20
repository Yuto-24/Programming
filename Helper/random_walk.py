import numpy as np

n = 1000
m = 100 # 平均を取る母数
x = np.zeros(n)
y = np.zeros(n)
dis_list = []

for i in range (1, m):
    np.random.seed(i)
    for j in range(1, n):
        theta = 2.0 * np.random.rand()
        x[j] = x[j - 1] + np.cos(theta)
        y[j] = y[j - 1] + np.sin(theta)
    # 原点からの距離
    dis = np.sqrt((x[n - 1] * x[n - 1] + y[n - 1] * y[n - 1]))
    dis_list.append(dis)
print(dis_list)
print('average: ', sum(dis_list)/len(dis_list))
