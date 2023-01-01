#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x,int y);
void print();
main()
{
 gotoxy(0,20);
 print();
}
void print()
{
cout<<" **     **     ***    *          ***    **  **     ***     *******"<<endl;
cout<<" ** * * **   **   **  *        **   **  **  **   **   **      *   "<<endl;
cout<<" **  *  **  ********* *       ********* ******  *********     *   "<<endl;
cout<<" **     **  **     ** ******* **     ** **  **  **     **     *   "<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

