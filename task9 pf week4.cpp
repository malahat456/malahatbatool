#include<iostream>
using namespace std;
void calculatebill(string day,int totalamount,float discountedAmount);
main(){
string day;
int totalamount;
float discountedAmount;
while(true)
{
cout<<"Enter the day: ";
cin>>day;
cout<<"Enter totalamount: ";
cin>>totalamount;
calculatebill( day, totalamount, discountedAmount);
}
}
void calculatebill(string day,int totalamount, float discountedAmount)
{
 if (day=="sunday")
 {
  discountedAmount= (totalamount-((totalamount/100)*10));
  cout<<"Your discounted amount is: "<<discountedAmount<<endl;
 }
 if (day=="monday")
 {
  discountedAmount= (totalamount-((totalamount/100)*5));
  cout<<"Your discounted amount is: "<<discountedAmount<<endl;
 }
 if (day=="tuesday")
 {
  discountedAmount= (totalamount-((totalamount/100)*5));
  cout<<"Your discounted amount is: "<<discountedAmount<<endl;
 }
 if (day=="wedday")
 {
  discountedAmount= (totalamount-((totalamount/100)*5));
  cout<<"Your discounted amount is: "<<discountedAmount<<endl;
 }
 if (day=="thursday")
 {
  discountedAmount= (totalamount-((totalamount/100)*5));
  cout<<"Your discounted amount is: "<<discountedAmount<<endl;
 }
 if (day=="friday")
 {
  discountedAmount= (totalamount-((totalamount/100)*5));
  cout<<"Your discounted amount is: "<<discountedAmount<<endl;
 }
 if (day=="saturday")
 {
  discountedAmount= (totalamount-((totalamount/100)*5));
  cout<<"Your discounted amount is: "<<discountedAmount;
 }
 }

