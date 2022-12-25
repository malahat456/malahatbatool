#include<iostream>
using namespace std;
main(){
string name;
float matric;
float intermediate;
float ecat;
float matric1;
float intermediate1;
float ecat1;
float aggregate;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter matric marks: ";
cin>>matric;
cout<<"Enter intermediate marks: ";
cin>>intermediate;
cout<<"Enter ecat marks: ";
cin>>ecat;
matric1=(matric/1100)*10;
cout<<matric1<<endl;
intermediate1=(intermediate/550)*40;
cout<<intermediate1<<endl;
ecat1=(ecat/400)*50;
cout<<ecat1<<endl;
aggregate=matric1+intermediate1+ecat1;
cout<<"Aggregate is: "<<aggregate;
}
