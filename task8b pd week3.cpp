#include<iostream>
using namespace std;
int main(){
int num;
int rem1;
int rem2;
int rem3;
int rem4;
float result;
cout<<"Enter 4 digit number: ";
cin>>num;
rem1=num%10;
rem2=(num/10)%10;
rem3=((num/10)/10)%10;
rem4=(((num/10)/10)/10)%10;
result=rem1+rem2+rem3+rem4;
cout<<"The result is: "<<result;
}

