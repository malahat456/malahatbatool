#include<iostream>
using namespace std;
void even(int number);
int main(){
int number;
cout<<"Enter number: ";
cin>>number;
even(number);
}
void even(int number)
{
 if (number%2==0)
  {
  cout<<"Even"<<endl;
  }
 if (number%2!=0)
  {
  cout<<"Odd"<<endl;
  }
} 


 