#include<iostream>
using namespace std;
void  eligible(int age);
main(){
int age;
cout<<"Enter age: ";
cin>>age;
eligible(age);
}
void  eligible(int age)
{
if(age>=18)
 {
  cout<<"Eligible"<<endl;
 }
 if(age<18)
 {
  cout<<"Not eligible"<<endl;
 }
}
