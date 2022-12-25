#include<iostream>
using namespace std;
main(){
int marks1;
int marks2;
int marks3;
int totalmarks;
float percentage;
float average;
cout<<"Enter student 1 marks: ";
cin>>marks1;
cout<<"Enter student 2 marks: ";
cin>>marks2;
cout<<"Enter student 3 marks: ";
cin>>marks3;
cout<<"Enter total marks: ";
cin>>totalmarks;
average=(marks1+marks2+marks3)/3;
percentage=(average/totalmarks)*100;
cout<<"The average is:  "<<average<<endl;
cout<<"The average percentage is: "<<percentage;
}
