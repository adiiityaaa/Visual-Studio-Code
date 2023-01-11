#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int main()
{ 
 system("CLS");
 system("Color 0A");    
 int add,mult,sub,sq;
 float div,a,b;
 cout<<"\nPlease enter the first number:";
 cin>>a;
 if(isnan(a)) { cout<<"First number is not a number."; exit(0); }
 cout<<"\nPlease enter the second number:";
 cin>>b;
 if(isnan(b)) { cout<<"Second number is not a number."; return 0; }
 sq=2;
 add=a+b;
 sub=a-b;
 mult=a*b;
 div=float(a/b);
 cout<<"\nThe numbers are "<<a <<" and "<<b;
 cout<<"\nSquares of numbers are "<<pow(a, sq) <<" and "<<pow(b, sq);
 cout<<"\nAddition of numbers: "<<add;
 cout<<"\nSubtraction of numbers: "<<sub;
 cout<<"\nMultiplication of numbers: "<<mult;
 cout<<"\nDivision of numbers: "<<div;
 cout<<"\nThanks for using Basic Mathematics.";
getch(); 
}