#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A"); 
 int x;
 int sum = 0;
 cout<<"Enter the number:\n";
 cin>>x;
 while (x != 0) {
  sum = sum + x%10;
  x = x/10;
 }
 cout<<"Sum of digits is: "<<sum;
 getch();
}