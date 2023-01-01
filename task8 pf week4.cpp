#include<iostream>
using namespace std;
void print(string name);
int main()
{
string name;
while(true)
{
 cout<<"Enter the name: ";
 cin>>name;
 print(name);
}
}
void print(string name)
{
 if(name=="Irzam")
 {
  cout<<"Irzam";
 }
}
