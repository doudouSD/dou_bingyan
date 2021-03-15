# 求1+2+3+...+100
i = 1
my_sum = 0
while i <= 100:
    my_sum = my_sum + i
    i = i + 1
print(f"1+2+3+...+100={my_sum}")

# 求1~100之间偶数的累加和（包括100）
# 1
i = 1
my_sum = 0
while i <= 100:
    if i % 2 == 0:
        my_sum = my_sum + i
    i = i + 1
print(f"2+4+6+...+100={my_sum}")

# 2
i = 2
my_sum = 0
while i <= 100:
    my_sum = my_sum + i
    i = i + 2
print(f"2+4+6+...+100={my_sum}")
