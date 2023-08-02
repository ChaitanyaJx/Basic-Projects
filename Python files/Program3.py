string = input("Input:")
cout = len(string) - 1
sum_string = 0
for i in string:
    sum_string = sum_string + int(i) * (2** cout)
    cout = cout - 1

print("Output: ", sum_string)