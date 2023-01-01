#include<iostream>
using namespace std;
void sleep(int holidays);
main(){
int holidays;
cout<<"Enter number of holidays: ";
cin>>holidays;
sleep(holidays);
}
void sleep(int holidays)
{
int workingDays,time,difference;
float hours,minutes;
workingDays=365-holidays;
time=((workingDays*63)+(holidays*127));
difference=30000-time;
hours=difference/60;
minutes=difference%60;
  if(difference>30000)
  {
   cout<<"Tom will run away"<<endl;
   cout<<hours<<"hours and"<<minutes<<"minutes";
  }
  if(difference<30000)
  {
   cout<<"Tom sleeps well"<<endl;
   cout<<hours<<"hours and"<<minutes<<"minutes";
  }
}

