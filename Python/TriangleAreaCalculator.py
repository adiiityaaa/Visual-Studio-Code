from re import A
import colorama
from colorama import Fore

print(Fore.RED + "Welcome to Triangle Area Calculator.")
valid1 = False
while not valid1:
    try:
        x = int(input(Fore.GREEN + "Enter the first side: "))
        valid1 = True
    except ValueError:
        print("First side is not a number. Retrying the program.")
valid2 = False
while not valid2:
    try:
        y = int(input(Fore.YELLOW + "Enter the second side: "))
        valid2 = True
    except ValueError:
        print("Second side is not a number. Retrying the program.")
valid3 = False
while not valid3:
    try:
        z = int(input(Fore.BLUE + "Enter the third side: "))
        valid3 = True
    except ValueError:
        print("First side is not a number. Retrying the program.")  
input(Fore.MAGENTA + "Sides of Triangle are " + str(x) + ", " + str(y) + " and " + str(z) + "\nPress any key to continue...")  
perimeter = x+y+z
s = perimeter/2
area = (s*(s-x)*(s-y)*(s-z)) ** 0.5
print(Fore.CYAN + "Perimeter of Triangle is " + str(perimeter))
print(Fore.CYAN + "Area of Triangle is " + str(area))             
print(Fore.RED + "Thanks for using Triangle Area Calculator.") 