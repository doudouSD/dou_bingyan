# 1、基本输出：
print("hello word")
print(123)

# 2、一次输出多个内容：
print('isaac', 18)  # 逗号, 后面需要加一个空格

# 3、可以书写表达式，输出结果
print(1 + 2)


# 格式化输出
# 格式化占位符：
'''
%s 字符串str     %d 整数int      %f 浮点数float
'''
name = "isaac"
age = 18
height = 160.5

# 我的名字叫isaac
print("我的名字叫%s" % name)

# 我今年18岁了
print("我今年%d岁了" % age)

# 我的名字叫isaac，我今年18岁了，我的身高是160.500000cm
print("我的名字叫%s，我今年%d岁了，我的身高是%fcm" % (name, age, height))

# 我的名字叫isaac，我今年18岁了，我的身高是160.50cm   （保留两位小数）
print("我的名字叫%s，我今年%d岁了，我的身高是%.2fcm" % (name, age, height))

# 我的名字叫isaac，我今年18岁了，我的身高是160.50cm   （保留四位小数）
print("我的名字叫%s，我今年%d岁了，我的身高是%.4fcm" % (name, age, height))


# 输出50%
# 使用格式化输出的时候，想要输出一个%，需要使用两个%
print("及格人数占比%d%%" % 50)


# Python3.6开始支持 f-string ，占位统一使用{}，填充的数据直接写在{}里
# 我的名字叫isaac，我今年18岁了，我的身高是160.5cm
print(f"我的名字叫{name}，我今年{age}岁了，我的身高是{height}cm")
# 我的名字叫isaac，我今年18岁了，我的身高是160.500cm
print(f"我的名字叫{name}，我今年{age}岁了，我的身高是{height:.3f}cm")
# 我的名字叫isaac，我今年18岁了，我的身高是160.50000cm
print(f"我的名字叫{name}，我今年{age}岁了，我的身高是{height:.5f}cm")


# 转义字符 \n ，代表换行
print("good good study\nday day up")

# print函数输出是会默认添加一个换行
print("hello")
print("world")

# 如果不想要换行，可以去掉
print("hello", end='')
print("world")

print("hello", end=' ')  # 一个空格
print("world")

print("hello", end='_*_')
print("world")
