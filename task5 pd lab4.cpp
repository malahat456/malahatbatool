#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x,int y); 
void A();
void B();
void C();
void D();
void E();
void F();
void G();
main()
{ 
gotoxy(70,20);
A();
gotoxy(70,25);
B();
gotoxy(70,30);
C();
gotoxy(70,35);
D();
gotoxy(70,40);
E();
gotoxy(70,45);
F();
gotoxy(70,50);
G();

}
void A()
{
gotoxy(70,9);
cout<<"  *** ***    "<<endl;
gotoxy(70,10);
cout<<" ** **  **"<<endl;
gotoxy(70,11);
cout<<" ** **  **"<<endl;
gotoxy(70,12);
cout<<" ** **  **"<<endl;
gotoxy(70,13);
cout<<" ** **  ** "<<endl;
gotoxy(70,14);
cout<<"           "<<endl;
}

void B()
{
gotoxy(70,16);
cout<<"  ***     "<<endl;
gotoxy(70,17);
cout<<" ** **    "<<endl;
gotoxy(70,18);
cout<<" *****    "<<endl;
gotoxy(70,19);
cout<<" ** **    "<<endl;
gotoxy(70,20);
cout<<" ** **    "<<endl;
gotoxy(70,21);
cout<<"          "<<endl;
}

void C()
{
gotoxy(70,23);
cout<<" **     "<<endl;
gotoxy(70,24);
cout<<" **    "<<endl;
gotoxy(70,25);
cout<<" **    "<<endl;
gotoxy(70,26);
cout<<" **     "<<endl;
gotoxy(70,27);
cout<<" *******    "<<endl;
gotoxy(70,28);
cout<<"         "<<endl;
}
void D()
{
gotoxy(70,30);
cout<<"  ***     "<<endl;
gotoxy(70,31);
cout<<" ** **    "<<endl;
gotoxy(70,32);
cout<<" *****    "<<endl;
gotoxy(70,33);
cout<<" ** **    "<<endl;
gotoxy(70,34);
cout<<" ** **    "<<endl;
gotoxy(70,35);
cout<<"          "<<endl;
}
void E()
{
gotoxy(70,37);
cout<<"  **  **   "<<endl;
gotoxy(70,38);
cout<<"  **  **    "<<endl;
gotoxy(70,39);
cout<<"  ******  "<<endl;
gotoxy(70,40);
cout<<"  **  **  "<<endl;
gotoxy(70,41);
cout<<"  **  ** "<<endl;
gotoxy(70,42);
cout<<"         "<<endl;
}
void F()
{
gotoxy(70,44);
cout<<"  ***     "<<endl;
gotoxy(70,45);
cout<<" ** **    "<<endl;
gotoxy(70,46);
cout<<" *****    "<<endl;
gotoxy(70,47);
cout<<" ** **    "<<endl;
gotoxy(70,48);
cout<<" ** **    "<<endl;
gotoxy(70,49);
cout<<"          "<<endl;
}
void G()
{
gotoxy(70,51);
cout<<" ******* "<<endl;
gotoxy(70,52);
cout<<"    * "<<endl;
gotoxy(70,53);
cout<<"    * "<<endl;
gotoxy(70,54);
cout<<"    * "<<endl;
gotoxy(70,55);
cout<<"    *  "<<endl;
gotoxy(70,56);
cout<<"          "<<endl;
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

