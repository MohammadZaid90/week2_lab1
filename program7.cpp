#include<iostream>
using namespace std;

int main()
{
  int charge;
  int time;
  int current;

cout<<"enter the value of charge: ";
cin>>charge;

cout<<"enter the value of time: ";
cin>>time;

current = charge/time;

cout<<"the value of current is: "<<current;

return 0;
}