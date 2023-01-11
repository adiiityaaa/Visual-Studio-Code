#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A");  
 int a;
 cout<<"Enter the number:\n";  
 cin>>a;
 if(a > 0) { cout<<"Number is positive."; } else { cout<<"Number is negative."; }
}