#include<iostream>
using namespace std;
int main(){
int bagsize;
int costofbag;
int area;
int costoffertilizer;
int costoffertilizingarea;
cout<<"Enter the bag size: ";
cin>>bagsize;
cout<<"Enter the cost of bag: ";
cin>>costofbag;
cout<<"Enter the area: ";
cin>>area;
costoffertilizer=costofbag/bagsize;
cout<<costoffertilizer<<endl;
costoffertilizingarea=bagsize*area;
cout<<costoffertilizingarea;
}
