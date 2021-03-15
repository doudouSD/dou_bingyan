# if elif
"""
if 判断条件1:
    判断条件1为True，执行的代码
    ...
elif 判断条件2:
      判断条件1为False，条件2为True，执行的代码
      ...
else:
    判断条件1和条件2均为False，执行的代码
    ...
"""
# 注意：只要有一个条件成立，后面的条件都不会再判断

score = input("请输入分数：")
score = float(score)
if score >= 90:
    print("优秀")
elif score >= 80:
    print("良好")
elif score >= 60:
    print("及格")
else:
    print("不及格")
print("程序结束")
# 多个 if
"""
if 判断条件1:
    判断条件1为True，执行的代码
if 判断条件2:
    判断条件2为True，执行的代码
"""