#Pythonic code for first code
def decimal_to_binary(x):
    def conversion(x):
        if x == 1:
            return [x]
        else:
            return conversion(x // 2) + [x % 2]
    
    return conversion(x)

x = int(input("Input: "))
result = decimal_to_binary(x)
print("Output: ", result)