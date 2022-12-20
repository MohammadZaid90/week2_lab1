#include<iostream>
using namespace std;

int main()	
{

float constant;
float kgs;
float pounds;

constant = 0.4535;

cout<<"enter the kgs: ";
cin>>kgs;

pounds = kgs/constant;

cout<<"The conversion value is : "<< pounds <<endl;

return 0;
}