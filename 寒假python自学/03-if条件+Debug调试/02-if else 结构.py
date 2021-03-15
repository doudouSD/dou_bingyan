# if else
"""
if 要判断的条件:
    判断条件为True，执行的代码
    ...
    ...
else:
    条件为False，执行的代码
    ...
    ...
"""
age = input("请输入你的年龄：")
age = int(age)
if age >= 18:
    print("你可以进入网吧了。")
else:
    print("回去好好学习吧。")
print("程序结束")
