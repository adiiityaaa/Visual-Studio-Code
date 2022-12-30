#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int main()
{ 
 system("CLS");
 system("Color 0A");  
 int choice;
 float value,convert;
 cout<<"Please select your choice:\n1. Celcius to Fahreinheit\n2. Fahreinheit to Celcius\n3. Celcius to Kelvin\n4. Kelvin to Celcius\n5. Fahreinheit to Kelvin\n6. Kelvin to Fahreinheit\n";
 cin>>choice;
 switch(choice) {
   case 1: cout<<"Please enter the Temperature in Celcius:";
           cin>>value;
           convert=(value * 1.8) + 32;
           cout<<"Celcius to Fahreinheit: "<<value <<"°C = " <<convert <<"°F.";
           cout<<"\nThanks for using Temperature Converter.";
           exit(1);
   break;
   case 2: cout<<"Please enter the Temperature in Fahreinheit:";
           cin>>value;
           convert=(value - 32) * 0.5556;
           cout<<"Fahreinheit to Celcius: "<<value <<"°F = " <<convert <<"°C.";   
           cout<<"\nThanks for using Temperature Converter.";
           exit(1);   
   break;
   case 3: cout<<"Please enter the Temperature in Celcius:";
           cin>>value;
           convert=value+273;
           cout<<"Celcius to Kelvin: "<<value <<"°C = " <<convert <<"°K.";   
           cout<<"\nThanks for using Temperature Converter.";
           exit(1);   
   break;
   case 4: cout<<"Please enter the Temperature in Kelvin:";
           cin>>value;
           convert=value-273;
           cout<<"Kelvin to Celcius: "<<value <<"°K = " <<convert <<"°C.";   
           cout<<"\nThanks for using Temperature Converter.";
           exit(1);   
   break;
   case 5: cout<<"Please enter the Temperature in Fahreinheit:";
           cin>>value;
           convert=((value - 32) * 0.5556) + 273;
           cout<<"Celcius to Fahreinheit: "<<value <<"°C = " <<convert <<"°F.";   
           cout<<"\nThanks for using Temperature Converter.";
           exit(1);   
   break;
   case 6: cout<<"Please enter the Temperature in Kelvin:";
           cin>>value;
           convert=((value - 273) * 1.8) + 32;
           cout<<"Celcius to Fahreinheit: "<<value <<"°C = " <<convert <<"°F.";   
           cout<<"\nThanks for using Temperature Converter.";
           exit(1);   
   break;
   default: cout<<"Please choose a valid option.";
   break; 
 }
} 