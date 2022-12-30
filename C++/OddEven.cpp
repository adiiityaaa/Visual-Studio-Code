#include <iostream>
#include <windows.h>

using namespace std;
int main()
{ 
 int num;
 float calc;
 system("CLS");
 system("Color 0A");   
 cout<<"Enter the Number:\n";   
 cin>>num;
 calc=num%2;
 if(calc == 0) { cout<<"Number is Even."; } else { cout<<"Number is Odd."; }
}    