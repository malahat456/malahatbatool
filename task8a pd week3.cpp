#include<iostream>
using namespace std;
int main(){
int veg;
int fruits;
float Ncoins=0.95;
float Mcoins=5.96;
float totalveg;
float totalfruits;
float sum;
float totalearning;
cout<<"Enter amount of vegetables: ";
cin>>veg;
cout<<"Enter amount of fruits: ";
cin>>fruits;
totalveg=Ncoins*veg;
cout<<"Vegetables price per kg is: "<<totalveg<<endl;
totalfruits=Mcoins*fruits;
cout<<"Fruits price per kg is: "<<totalfruits<<endl;
sum=totalveg+totalfruits;
totalearning=sum*1.94;
cout<<"The total earning in Rs is: "<<totalearning;
}