#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printName (int x, int y);

main ()
{
  system("cls");
  int x=20;
  int y=8;
  gotoxy (x , y);
  printName (x,y);
}



void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printName (int x, int y)
{
    gotoxy (x, y);

cout << " ##########  ##########   ##         ##        ##        ##        ##   " << endl;
gotoxy(x,y=y+1);
cout << " ##          ##           ## ##   ## ##       ####       ## #      ##   " << endl;
gotoxy(x,y=y+1);
cout << " ##          ##           ##  ## ##  ##      ##  ##      ##  #     ##   " << endl;
gotoxy(x,y=y+1);
cout << " ##          #            ##    #    ##     ##    ##     ##   #    ##   " << endl;
gotoxy(x,y=y+1);
cout << " ########    ########     ##         ##    ##      ##    ##    #   ##   " << endl;
gotoxy(x,y=y+1);
cout << " ##          ##           ##         ##   ############   ##     #  ##   " << endl;
gotoxy(x,y=y+1);
cout << " ##          ##           ##         ##  ##          ##  ##      # ##   " << endl;
gotoxy(x,y=y+1);
cout << " ##########  ##########   ##         ## ##            ## ##        ##   " << endl;
gotoxy(x,y=y+1);
}
