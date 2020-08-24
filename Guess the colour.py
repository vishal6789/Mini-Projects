import random
colors=["Red","Pink","Blue","Green","Black","White"]
print(colors, "is the list from which you have to guess")
while True:
    x = random.randint(0,5)
    color=colors[x]
    while True:
        guess=input("Guess the color :")
        if(guess==color):
            print("you guess the corect color")
            restart=input("To exit type 'no' and to cotinue type 'yes':")
            break
        else:
            print("Try Again!!!")
    if(restart=='no'):
        break
