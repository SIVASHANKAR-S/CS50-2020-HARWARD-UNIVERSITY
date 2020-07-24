from cs50 import get_int

#Prompting user for a valid input
# n refers 'Height'
n = 0
while (n > 8 or n < 1):
    n = get_int("Height : ")

# print pyramids

for x in range(1,n+1):
    for y in range(n,x,-1):
        print(" ", end="")
    for z in range(0,x):
        print("#", end="")
    print()