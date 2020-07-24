from cs50 import get_float

# Asks for
dollars = 0
while (dollars <= 0):
    dollars = get_float("Change owed: ")

coins = 0
cents = round(dollars * 100, 0)

while (cents > 0):
    if (cents >= 25):
        cents -= 25
        coins += 1
    elif (cents >= 10):
        cents -= 10
        coins += 1
    elif (cents >= 5):
        cents -= 5
        coins += 1
    else:
        cents -= 1
        coins += 1

print(f"{coins}")