#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
int main()
{ 
 system("CLS");
 system("Color 0A");  
 int choice;
 float side1,side2,side3,convert,area,s;
 cout<<"Please select your shape:\n1. Rectangle\n2. Square\n3. Scalene Triangle\n4. Isoceles Triangle\n5. Circle\n6. Parallelogram\n7. Trapezium\n";
 cin>>choice;
 switch(choice) {
 case 1: cout<<"Please enter the length:";
         cin>>side1;
         cout<<"Please enter the width:";
         cin>>side2;
         area=side1*side2; 
         cout<<"Area of Rectangle is "<<area;
         cout<<"\nThanks for using Area Calculator.";
         exit(1);
 break;
 case 2: cout<<"Please enter the length of the side:";
         cin>>side1;
         area=side1*side1;
         cout<<"Area of Square is "<<area;
         cout<<"\nThanks for using Area Calculator.";
         exit(1); 
 break;
 case 3: cout<<"Please enter length of first side:";
         cin>>side1;
         cout<<"Please enter length of second side:";
         cin>>side2;         
         cout<<"Please enter length of third side:";           
         cin>>side3;         
         s=(side1+side2+side3)/2;
         area=pow(s*(s-side1)*(s-side2)*(s-side3), 0.5);
         cout<<"Area of Scalene Triangle is "<<area; 
         cout<<"\nThanks for using Area Calculator.";
         exit(1); 
 break;
 case 4: cout<<"Please enter length of first side:";
         cin>>side1; 
         cout<<"Please enter length of second side:";
         cin>>side2;
         area=0.5*side1*side2;         
         cout<<"Area of Isoceles Triangle is "<<area; 
         cout<<"\nThanks for using Area Calculator.";
         exit(1); 
 break; 
 case 5: cout<<"Please enter length of Radius:";
         cin>>side1; 
         area=3.14*side1*side1;
         cout<<"Area of Circle is "<<area; 
         cout<<"\nThanks for using Area Calculator.";
         exit(1); 
 break;
 case 6: cout<<"Please enter length of base:";
         cin>>side1; 
         cout<<"Please enter length of height:";
         cin>>side2; 
         area=side1*side2;
         cout<<"Area of Parallelogram is "<<area; 
         cout<<"\nThanks for using Area Calculator.";
         exit(1); 
 break;
 case 7: cout<<"Please enter length of first parallel side:";
         cin>>side1;
         cout<<"Please enter length of second parallel side:";
         cin>>side2;
         cout<<"Please enter length of height:";
         cin>>side3;       
         area = 0.5 * (side1+side2) * side3;            
         cout<<"Area of Trapezium is "<<area; 
         cout<<"\nThanks for using Area Calculator.";
         exit(1); 
 break;
 default: cout<<"Please choose a valid option.";
 break;    
} 
getch();
}