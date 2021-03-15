"""
price = float(input("请输入苹果的单价：（元/斤）"))
weight = float(input("请输入重量：（斤）"))
money = price * weight
print("苹果单价%.2f元/斤，购买了%.2f斤，需要支付%.2f元" % (price, weight, money))
"""

# 类型转换：将原始数据转换成我们需要的数据类型，在这个过程中，不会改变原始的数据，会生成一个新的数据
# 1、转换为int类型 int()
# <1> float--->int
pi = 3.14
num = int(pi)  # num = 3
print(num)
# <2> 整数类型的字符串--->int  如"10"
my_str = "10"
num1 = int(my_str)  # num1 = 10
print(num1)

# 2、转换为float类型 float()
# <1> int--->float
num2 = 10
num3 = float(num2)  # num3 = 10.0
print(num3)
# <> 数字类型字符串--->float  如"3.14" "10"
num4 = float("3.14")  # num4 = 3.14
num5 = float("10")  # num5 = 10.0
print(num4)
print(num5)


# eval() 函数： 还原原来的数据类型，去掉字符串的引号
num6 = eval("100")  # num6 = 100
num7 = eval("3.1415")  # num7 = 3.1415
print(num6)
print(num7)

num8 = eval("num7")  # num8 = 3.1415
print(num8)
