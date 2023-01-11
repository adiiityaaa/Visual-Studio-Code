#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;
int main()
{ 
 int num;
 float calc;
 system("CLS");
 system("Color 0A");   
 cout<<"Enter the Number:\n";   
 cin>>num;
 if(isnan(num)) { cout<<"Given number is not a valid integer."; exit(0); }
 calc=num%2;
 if(calc == 0) { cout<<"Number is Even."; } else { cout<<"Number is Odd."; }
 getch();
}    
