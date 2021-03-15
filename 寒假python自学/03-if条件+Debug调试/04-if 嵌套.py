# if嵌套
"""
if 判断条件1:
    判断条件1为True，执行的代码
    if 判断条件2:
        判断条件1为True，判断条件2也为True，执行的代码
    else:
        判断条件1为True，判断条件2为False，执行的代码
else:
    判断条件1为False，执行的代码
"""

money = int(input("请输入你带的零钱："))
if money >= 2:
    seat = int(input('请输入空位个数：'))
    if seat >= 1:
        print("请入座")
    else:
        print("您只能站着了")
else:
    print("抱歉，您不能上车")
print("程序结束")
