#include<iostream>
using namespace std;
void marks(int num);
int main()
{
int num;
cout<<"Enter marks: ";
cin>>num;
 marks(num);
}
void marks(int num)
{
 if(num>50)
 {
  cout<<"Pass";
 }
 if(num<50)
 {
  cout<<"Fail";
 }
}