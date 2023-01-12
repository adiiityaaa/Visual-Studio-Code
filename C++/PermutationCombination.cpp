#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int fact(int x) {
 int factorial = 1;
 for(int n=1; n <= x; ++n) {
   factorial *= n; 
 }
 return factorial;
}

int main()
{
 int a, n, ans, r;
 system("CLS");
 system("Color 0A");
 cout<<"Please select your operation:\n1. Permutation\n2. Combination\n3. Factorial of a Number\n";
 cin>>a;  
 switch(a) {
  case 1: cout<<"Please enter N and R:\n";
          cin>>n>>r;
          if(n > 12 || r > 12) { cout<<"Values cannot be greater than 12 due to C++ restrictions."; exit(0); }
          ans = fact(n)/(fact(n-r));
          cout<<"Permutation where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; 
  break;
  case 2: cout<<"Please enter N and R:\n";
          cin>>n>>r;
          if(n > 12 || r > 12) { cout<<"Values cannot be greater than 12 due to C++ restrictions."; exit(0); }
          ans = fact(n)/(fact(n-r)*fact(r));
          cout<<"Combination where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; 
  break;
  case 3: cout<<"Please enter the number:\n";
          cin>>n;
          if(n > 12) { cout<<"Cannot calculate factorial of number greater than 12 due to C++ restrictions."; exit(0); } else { ans = fact(n); cout<<"Factorial of "<<n<<" is "<<ans; }
  break;
  default: cout<<"Please enter a valid option."; exit(0);
  break;        
 }
}