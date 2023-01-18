#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

float fact(int x) {
 float factorial = 1;
 for(int n=1; n <= x; ++n) {
   factorial = factorial*n; 
 }
 return factorial;
}

int main()
{
 int a, n, r;
 float ans;
 system("CLS");
 system("Color 0A");
 cout<<"Please select your operation:\n1. Permutation\n2. Combination\n3. Factorial of a Number\n";
 cin>>a;  
 switch(a) {
  case 1: cout<<"Please enter N and R:\n";
          cin>>n>>r;
          ans = fact(n)/(fact(n-r));
          cout<<"Permutation where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; 
  break;
  case 2: cout<<"Please enter N and R:\n";
          cin>>n>>r;
          ans = fact(n)/(fact(n-r)*fact(r));
          cout<<"Combination where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; 
  break;
  case 3: cout<<"Please enter the number:\n";
          cin>>n;
          ans = fact(n); 
          cout<<"Factorial of "<<n<<" is "<<ans; 
  break;
  default: cout<<"Please enter a valid option."; exit(0);
  break;        
 }
getch();
}