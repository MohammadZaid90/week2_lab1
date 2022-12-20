#include<iostream>
using namespace std;

int main()	
{

int dollar;
int take_dollar;
int convert;

dollar = 200;

cout<<"Enter the dollar value: ";
cin>>take_dollar;

convert = take_dollar * dollar;

cout<<"Your converted rupees from dollars are: "<<convert<<endl;
  
return 0;
}