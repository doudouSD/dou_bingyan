# 1、06-break和continue 是python的两个关键字
# 2、06-break和continue 只能用在循环中

# 3、break 是终止循环的执行，即循环代码遇到 break，就不再循环了
# 4、continue 是结束本次循环，继续下一次循环，即本次循环剩下的代码不在执行，但会进行下一次循环

# 有5个苹果
# 1、吃了3个苹果之后，吃饱了。剩余的苹果不吃了。
# 2、吃了3个苹果，再吃第4个苹果，发现了半条虫子，这个苹果不吃了，吃剩下的1个苹果
for i in range(1, 6):
    if i == 4:
        print(f"吃了{i-1}个了，吃饱了，不吃了。")
        break
    print(f"正在吃第{i}个苹果")

print()

for i in range(1, 6):
    if i == 4:
        print(f'第{i}个吃到虫子了，不吃这个')
        continue
    print(f"正在吃第{i}个苹果")
