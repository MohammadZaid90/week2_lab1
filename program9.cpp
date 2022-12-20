#include<iostream>
using namespace std;

int main()
{

int mb;
int convert;

cout<<"enter the storage in mbs: ";
cin>>mb;

convert = (1024*1024)*8;

cout<<mb<<"mb =" <<convert <<"bits"<<endl;
}