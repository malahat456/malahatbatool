#include<iostream>
using namespace std;
void reverse(string check);
main()
{
string check;
cout<<"Enter true or false:";
cin>>check;
reverse(check);
}
void reverse(string check)
{
 if(check=="true")
 {
  cout<<"False";
 }
 if(check=="false")
 {
  cout<<"True";
 }
}