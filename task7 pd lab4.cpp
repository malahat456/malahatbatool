#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void move(int x,int y);

main()
{
 system("cls");
 printMaze();
 int x=4;
 int y=2;
 while(true)
{
 move(x,y);
 if(y<8)
 {
  y=y+1;
 }
 if(y==8)
 {
  gotoxy(x,y-3);
  cout<<" ";
  y=2;
}
move(x,y);
 if(y<8)
 {
  y=y-1;
 }
 if(y==8)
 {
  gotoxy(x,y+3);
  cout<<" ";
  y=2;
 }
}
} 
void printMaze()
{
cout<<"**********************"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"*                    *"<<endl;
cout<<"**********************"<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void move(int x,int y)
{
gotoxy (x,y-3);
cout<<" ";
gotoxy (x,y+3);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(500);
}
