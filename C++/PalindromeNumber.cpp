#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A"); 
 int x,n,num;
 int reverse = 0;
 cout<<"Enter the number:\n";
 cin>>x;
 num = x;
 while (x>0) {
    n = x%10; 
    reverse = reverse*10 + n;
    x = x/10;
 }
 if(num == reverse) { cout<<"It is a Palindrome Number."; } else { cout<<"It is not a Palindrome Number."; }
 getch();
}