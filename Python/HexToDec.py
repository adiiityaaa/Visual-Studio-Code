import colorama
from colorama import Fore

print(Fore.RED + "Welcome to Hexadecimal to Decimal Converter!")
hex = input(Fore.GREEN + "Enter your Hexadecimal Value:")
deci = int(hex, 16)
print(Fore.CYAN + "Hexadecimal Value: " + str(hex) + "\nDecimal Value: " + str(deci))
print(Fore.RED + "Thanks for using Hexadecimal to Decimal Converter.")       