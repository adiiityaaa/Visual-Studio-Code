#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A");    
 int a,b,c;
 cout<<"Please enter the three numbers:\n";
 cin>>a>>b>>c;
 if(a == b || c == a || b == c) { cout<<"Numbers should be distinct."; exit(0); }
 if(a>b) { 
 if(a>c) { cout<<"A ["<<a<<"] is the greatest number."; exit(0); } else { cout<<"C ["<<c<<"] is the greatest number."; exit(0); }
 } else if(b>a) {
 if(b>c) { cout<<"B ["<<b<<"] is the greatest number."; exit(0); } else { cout<<"C ["<<c<<"] is the greatest number."; exit(0); }
 }
getch(); 
}