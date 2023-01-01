#include<iostream>
using namespace std;
void challan(int speed);
main(){
int speed;
cout<<"Enter the speed: ";
cin>>speed;
challan(speed);
}
void challan(int speed)
{
 if(speed==100)
 {
   cout<<"Perfect! you are going good";
 }
 if(speed>100)
 { 
  cout<<"halt...you will be challenged";
 }
}
