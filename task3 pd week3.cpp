#include<iostream>
using namespace std;
int main(){
int initialVelocity;
int acceleration;
int time;
int finalVelocity;
cout<<"Enter initial velocity: ";
cin>>initialVelocity;
cout<<"Enter acceleration: ";
cin>>acceleration;
cout<<"Enter time: ";
cin>>time;
finalVelocity=initialVelocity+(acceleration*time);
cout<<"The final velocity is: "<<finalVelocity;
}