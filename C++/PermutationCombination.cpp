#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
int main()
{
system("CLS");
system("Color 0A");  
 int a;
 long factorial = 1.0;
 cout<<"Enter the number: ";
 cin>>a;
 for(int n=1; n <= a; ++n) {
   factorial *= n; 
 }
cout<<"Factorial is: " << factorial; 
getch();
}