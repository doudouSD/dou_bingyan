# 格式：
"""
while 判断条件1:
    代码1
    while 判断条件2:
        代码2
（代码1执行一次，代码2会执行多次）
"""
i = 0
while i < 5:
    print("跑圈中...")
    j = 0
    while j < 3:
        print("俯卧撑")
        j = j + 1
    i = i + 1
print("程序结束")
