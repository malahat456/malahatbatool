#include<iostream>
using namespace std;
void calculatebill(string day,int totalamount,float discountedAmount);
main(){
string day;
int totalamount;
float discountedAmount;
cout<<"Enter the day: ";
cin>>day;
cout<<"Enter totalamount: ";
cin>>totalamount;
calculatebill( day, totalamount, discountedAmount);
}
void calculatebill(string day,int totalamount, float discountedAmount)
{
discountedAmount= (totalamount-((totalamount/100)*10));
  if (day=="sunday")
  {
   cout<<"Your discounted amount is: "<<discountedAmount;
  }
  if (day!="sunday")
  {
  cout<<"Your amount is: "<<totalamount;
  }
 }


