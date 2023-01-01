#include<iostream>
using namespace std;
void calculatePrice(string countryName,float ticketPrice,float finalPrice);
main(){
string countryName;
float ticketPrice;
float finalPrice;
while(true)
{
cout<<"Enter the name of country: ";
cin>>countryName;
cout<<"Enter ticket price: ";
cin>>ticketPrice;
calculatePrice( countryName, ticketPrice, finalPrice);
}
}
void calculatePrice(string countryName,float ticketPrice,float finalPrice)
{
if (countryName=="Pakistan")
  {
   finalPrice= (ticketPrice-((ticketPrice/100)*5));
   cout<<"Your final price is: "<<finalPrice<<endl;
  }
 if (countryName=="Ireland")
  {
   finalPrice= (ticketPrice-((ticketPrice/100)*10));
   cout<<"Your final price is: "<<finalPrice<<endl;
  }
 if (countryName=="India")
  {
   finalPrice= (ticketPrice-((ticketPrice/100)*20));
   cout<<"Your final price is: "<<finalPrice<<endl;
  }
 if (countryName=="England")
  {
   finalPrice= (ticketPrice-((ticketPrice/100)*30));
   cout<<"Your final price is: "<<finalPrice<<endl;
  }
 if (countryName=="Canada")
  {
   finalPrice= (ticketPrice-((ticketPrice/100)*45));
   cout<<"Your final price is: "<<finalPrice;
  }
}

 