import colorama
from colorama import Fore

print(Fore.RED + "Welcome to Basic Mathematics!")
valid1 = False
while not valid1:
    try:
        x = int(input(Fore.GREEN + "Enter the first number: "))
        valid1 = True
    except ValueError:
        print("First number is not a number. Restarting the program.")
valid2 = False
while not valid2: 
    try:
        y = int(input(Fore.YELLOW + "Enter the second number: "))
        valid2 = True
    except ValueError:
        print("Second number is not a number. Retrying the program.")
if y > x:
    print(Fore.RED + "First number cannot be smaller than Second number. Destroying the program.")
    exit()   
if y == 0 | x == 0:
    print(Fore.RED + "Either first or second number is 0. Destroying the program.")
    exit()
input(Fore.MAGENTA + "Your first number is " + str(x) + " and second number is " + str(y) + "\nPress any key to continue...")   
eq1 = x+y
eq2 = x-y
eq3 = x*y
eq4 = x/y
print(Fore.CYAN + "Addition: " + str(eq1)+ "\nSubstraction: " + str(eq2) + "\nMultiplication: " + str(eq3) + "\nDivision: " + str(eq4))
print(Fore.RED + "Thanks for using Basic Mathematics.") 