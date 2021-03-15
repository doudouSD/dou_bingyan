# 三目运算：if else 的变形

# if else
"""
if 判断条件:
    表达式1
else:
    表达式2
（判断条件成立，执行表达式1；条件不成立，执行表达式2）
"""

# 三目运算  推荐使用
"""
变量 = 表达式1 if 判断条件 else 表达式2

变量最终存储的数据：
               条件成立，表达式1的值
               条件不成立，表达式2的值
"""

a = int(input("请输入一个数字a："))
b = int(input("请输入一个数字b："))
result = (a - b) if (a > b) else (b - a)
print(result)
