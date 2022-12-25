#include<iostream>
using namespace std;
int main(){
string moviename;
int adultticketprice;
int childticketprice;
int adultticketsold;
int childticketsold;
int donation;
int totalamount;
int amountafterdonation;
float percentage;
cout<<"Enter the movie name: ";
cin>>moviename;
cout<<"Enter the child ticket price: ";
cin>>childticketprice;
cout<<"Enter the adult ticket price: ";
cin>>adultticketprice;
cout<<"Enter the adults ticket sold: ";
cin>>adultticketsold;
cout<<"Enter the child tickets sold: ";
cin>>childticketsold;
totalamount=(adultticketprice*adultticketsold)+(childticketprice*childticketsold);
donation=(totalamount/100)*10;
amountafterdonation=totalamount-donation;
cout<<"The total amount generated is: "<<totalamount<<endl;
cout<<"Amount after donation is: "<<amountafterdonation;
}

