#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A");    
 int a,b,c;
 cout<<"\nPlease enter the first number:";
 cin>>a;
 cout<<"\nPlease enter the second number:";
 cin>>b;
 if(a > b) { c = a; } else { c = b; }
 cout<<"The Greater number amongst "<<a <<" and "<<b <<" is " <<c;
 cout<<"\nThanks for using Number Comparison.";
}