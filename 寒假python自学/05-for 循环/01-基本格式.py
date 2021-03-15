# 基本格式
"""
for 变量 in 字符串:
    代码
"""
# for循环也成for遍历，会将字符串中的字符全部取到

for i in "hello":
    # i 一次循环是字符串中的一个字符
    print(i)

# range(n) 会生成[0, n)的数据，不包含n
for i in range(5):  # 0 1 2 3 4
    print(i)
    print('跑圈中...')

# range(a, b)  会生成[a, b)的整数序列，不包含b
for i in range(3, 7):  # 3 4 5 6
    print(i)

# range(a, b, step) 会生成[a, b)的整数序列，但是每个数字之间的间隔（步长）是step
for i in range(1, 10, 3):  # 1 4 7
    print(i)
