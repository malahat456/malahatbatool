#include<iostream>
using namespace std;
main(){
float megabytes;
float kilobytes;
float bytes;
float bits;
cout<<"Enter megabytes: ";
cin>>megabytes;
kilobytes=1024*megabytes;
bytes=1024*kilobytes;
bits=1024*bits;
cout<<"The bits are: "<<bits;
}