n = int(input('请输入正方形的边长：'))
i = 0
while i < n:
    j = 0
    while j < n:
        print('*', end=' ')
        i += 1
    print()  # print函数默认会输出换行
    j += 1
