#include<iostream>
using namespace std;
void isEqual(int num1,int num2);
main()
{
int num1,num2;
cout<<"Enter first integer: ";
cin>>num1;
cout<<"Enter second integer: ";
cin>>num2;
isEqual(num1,num2);
}
void isEqual(int num1,int num2)
{
 if(num1==num2)
 {
  cout<<"True"<<endl;
 }
 if(num1!=num2)
 {
  cout<<"False"<<endl;
 }
}


