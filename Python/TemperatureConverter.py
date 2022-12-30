import colorama
from colorama import Fore

print("Welcome to Temperature Convertor!")
valid = False
while not valid:
    try:
        x = int(input(Fore.GREEN + "Select what you want to do:\nEnter 1 to Convert Celcius to Fahrenheit\nEnter 2 to Convert Fahrenheit to Celcius\nEnter 3 to Convert Celcius to Kelvin\nEnter 4 to Convert Kelvin to Celcius\nEnter 5 to Convert Fahrenheit to Kelvin\nEnter 6 to Convert Kelvin to Fahrenheit"))
        valid = True
    except ValueError:
        print("Valid option not inputted. Retrying the program.")
question = int(input(Fore.MAGENTA + "Enter the value to Convert: "))
if x == 1:
    ans = (question * 1.8) + 32
    print(Fore.CYAN + str(question) + "°C is " + str(ans) + "°F.") 
    print(Fore.RED + "Thanks for using Temperature Convertor.")
    exit()
if x == 2:
    ans = (question - 32) * 0.5556
    print(Fore.CYAN + str(question) + "°F is " + str(ans) + "°C.")
    print(Fore.RED + "Thanks for using Temperature Convertor.") 
    exit()    
if x == 3:
    ans = (question + 273.15)
    print(Fore.CYAN + str(question) + "°C is " + str(ans) + "°K.")
    print(Fore.RED + "Thanks for using Temperature Convertor.")
    exit()    
if x == 4:
    ans = (question - 273.15)
    print(Fore.CYAN + str(question) + "°K is " + str(ans) + "°C.")
    print(Fore.RED + "Thanks for using Temperature Convertor.")
    exit()    
if x == 5:
    ans = ((question - 32) * 0.5556) + 273.15
    print(Fore.CYAN + str(question) + "°F is " + str(ans) + "°K.")
    print(Fore.RED + "Thanks for using Temperature Convertor.")
    exit()    
if x == 6:
    ans = ((question - 273.15) * 1.8) + 32
    print(Fore.CYAN + str(question) + "°K is " + str(ans) + "°F.")
    print(Fore.RED + "Thanks for using Temperature Convertor.")
    exit()   