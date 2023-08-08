n = int(input("Upto how many Fibonacci numbers you want: "))
fibonacci_list = [0] * n
fibonacci_list[0] = 1
fibonacci_list[1] = 1

for i in range(2, n):
    fibonacci_list[i] = fibonacci_list[i-1] + fibonacci_list[i-2]

print("Fibonacci numbers are:")
for num in fibonacci_list:
    print(num, end=" ")

print()