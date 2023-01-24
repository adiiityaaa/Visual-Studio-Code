#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A"); 
 int x;
 float sum = 0;
 cout<<"Enter the number to which you want to find the sum:\n";
 cin>>x;
 for(int n=1; n<=x; n++) {
 sum = sum+n; }
 cout<<"Sum of first "<<x<<" numbers is: "<<sum;
 getch();
}