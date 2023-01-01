#include<iostream>
using namespace std;
void price(int red,int white,int tulips,float total,float discountedPrice);
main()
{
int red,white,tulips;
float total;
float discountedPrice;
cout<<"Enter the red flowers: ";
cin>>red;
cout<<"Enter the white flowers: ";
cin>>white;
cout<<"Enter the tulip flowers: ";
cin>>tulips;
price( red, white, tulips, total, discountedPrice);
}
void price(int red,int white,int tulips,float total,float discountedPrice)
{
total=((red*2.00)+(white*4.10)+(tulips*2.50));
discountedPrice=(total-((total/100)*20));
 if(total>200)
 {
  cout<<"The original price is: "<<total<<endl;
  cout<<"The price after discount is: "<<discountedPrice;
 } 
}

