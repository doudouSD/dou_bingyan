# 基本格式：
"""
if 要判断的条件：
    判断条件为True，执行的代码
    ...
    ...
（在Python中，使用缩进，表示代码的层级关系）
"""
age = input("请输入你的年龄：")
age = int(age)
if age >= 18:
    print("你可以进入网吧了。")
print("程序结束")
