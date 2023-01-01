#include<iostream>
using namespace std;
void printMenu(string menu);
void calculateAggregate(string name,float matric,float inter,float ecat);
void compareMarks(string name_std1,int ecatMarks_std1,string name_std2,int ecatMarks_std2);
main()
{
string menu;
string name;
float matric,inter,ecat;
string name_std1; 
int ecatMarks_std1;
string name_std2;
int ecatMarks_std2;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your matric marks: ";
cin>>matric;
cout<<"Enter your inter marks: ";
cin>>inter;
cout<<"Enter your ecat marks: ";
cin>>ecat;
cout<<"Enter name of student 1: ";
cin>>name_std1;
cout<<"Enter ecat marks of student 1: ";
cin>>ecatMarks_std1;
cout<<"Enter name of student 2: ";
cin>>name_std2;
cout<<"Enter ecat marks of student 2: ";
cin>>ecatMarks_std2;
printMenu(menu);
calculateAggregate( name, matric, inter, ecat);
compareMarks( name_std1, ecatMarks_std1, name_std2, ecatMarks_std2);
}
void printMenu(string menu)
{
 cout<<"UNIVERSITY ADMISSION MANAGEMENT SYSTEM"<<printMenu<<endl;
}
void calculateAggregate(string name,float matric,float inter,float ecat)
{
 float aggregateOfMatric;
 float aggregateOfInter;
 float aggregateOfEcat;
 float totalAggregate;
 aggregateOfMatric=(matric/1100)*10;
 aggregateOfInter=(inter/550)*40;
 aggregateOfEcat=(ecat/400)*50;
 totalAggregate= aggregateOfMatric+aggregateOfInter+aggregateOfEcat;
 cout<<"The total aggregate is: "<<totalAggregate<<endl;
}
void compareMarks( string name_std1, int ecatMarks_std1,string name_std2, int ecatMarks_std2)
{
   if(ecatMarks_std1>ecatMarks_std2)
  {
   cout<<"Rollno of student 1 is 1";
  }
   if(ecatMarks_std1<ecatMarks_std2)
  {
   cout<<"Rollno of student 2 is 1";
  }
}



















