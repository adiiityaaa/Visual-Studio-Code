#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
 system("CLS");
 system("Color 0A"); 
 int x;
 bool prime = true;
 cout<<"Enter the number:\n";
 cin>>x;
 if(x == 0 || x == 1) { cout<<x<<" is neither a prime nor a composite number."; exit(0); }
 for(int n=2; n <= x/2; n++) {
    if(x%n == 0) { prime = false; }
  }
 if(prime) { cout<<x<<" is a prime number."; } else { cout<<x<<" is a composite number."; 
 cout<<"\nIts Factors are: "<<"1 ";
 for(int n=2; n <= x; n++) {
  if(x%n == 0) { cout<<n<<" "; }
 }}
 getch();
}