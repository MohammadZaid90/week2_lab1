#include<iostream>
using namespace std;

int main()
{
  float matric;
  float inter;
  float ecat;
  float aggregate;
  float matricPercent;
  float interPercen;
  float ecatPercen;


cout<<"enter the matric marks: ";
cin>>matric;

cout<<"enter the inter marks: ";
cin>>inter;

cout<<"enter the ecat marks: ";
cin>>ecat;

   matricPercent = (matric/1100)*100;
   interPercen = (inter/550)*100; 
   ecatPercen = (ecat/400)*100;

aggregate = matricPercent*0.10+interPercen*0.40+ecatPercen*0.50;

cout<<"your aggregate is: "<<aggregate<<endl;
}