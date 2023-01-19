#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

float fact(int x) {
if(x > 12) {
float factorial = 1;
for(int n=1; n <= x; ++n) {
   factorial = factorial*n; 
 }
 return factorial;
} else {
long int factorial = 1;
for(int n=1; n <= x; ++n) {
   factorial = factorial*n; 
 }
 return factorial; 
}}

int main()
{
 int a, n, r;
 system("CLS");
 system("Color 0A");
 cout<<"Please select your operation:\n1. Permutation\n2. Combination\n3. Factorial of a Number\n";
 cin>>a;  
 switch(a) {
  case 1: cout<<"Please enter N and R:\n";
          cin>>n>>r;
          if(n < r) { cout<<"R cannot be greater than N."; exit(0); }
          if(n > 12 || r > 12) {
          float ans;
          ans = fact(n)/(fact(n-r));
          cout<<"Permutation where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; } 
          else if(n < 13 && r < 13) {
          long int ans;
          ans = fact(n)/(fact(n-r));
          cout<<"Permutation where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; }
  break;
  case 2: cout<<"Please enter N and R:\n";
          cin>>n>>r;
          if(n < r) { cout<<"R cannot be greater than N."; exit(0); }
          if(n > 12 || r > 12) {
          float ans;
          ans = fact(n)/(fact(n-r)*fact(r));
          cout<<"Combination where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; }
          else if(n < 13 && r < 13) {
          long int ans;
          ans = fact(n)/(fact(n-r));
          cout<<"Combination where n = "<<n<<" and r = "<<r<<" is "<<ans<<"."; }
  break;
  case 3: cout<<"Please enter the number:\n";
          cin>>n;
          if(n > 12) {
          float ans;
          ans = fact(n); 
          cout<<"Factorial of "<<n<<" is "<<ans; }
          else if(n < 13) {
          long int ans;
          ans = fact(n); 
          cout<<"Factorial of "<<n<<" is "<<ans; }
  break;
  default: cout<<"Please enter a valid option."; exit(0);
  break;        
 }
getch();
}