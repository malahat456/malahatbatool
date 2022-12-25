#include<iostream>
using namespace std;
int main(){
int num1;
int num2;
int position1;
int position2;
int position3;
int position4;
int pos1;
int pos2;
int pos3;
int pos4;
int result;
cout<<"Enter integer1: ";
cin>>num1;
cout<<"Enter integer2: ";
cin>>num2;
position4=num1%10;
position3=(num1/10)%10;
position2=((num1/10)/10)%10;
position1=(((num1/10)/10)/10)%10;
pos4=num2%10;
pos3=(num2/10)%10;
pos2=((num2/10)/10)%10;
pos1=(((num2/10)/10)/10)%10;
result=(position1+position3+pos1+pos3)+(position2*position4*pos2*pos4);
cout<<"The total sum is: "<<result;
}


