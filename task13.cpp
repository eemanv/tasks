#include <iostream>
#include <windows.h>
using namespace std;

void playTime(int holidays);

main()
{
 int holidays;
 cin >> holidays;
 playTime(holidays);
}

void playTime(int holidays)
{
 int playtime;
 int diff;
 int hours;
 int min;
 playtime=(365-holidays)*63+holidays*127;
 diff= 30000-playtime;
 if(diff>0)
  {
    hours=diff/60;
    min= diff%60;
    cout << "Tom sleeps well" << endl;
    cout << hours << "hours"  ;
    cout << min << "mins for play " ;
  }
 if(diff <0)
  {
    diff =(-1)*diff;
    hours = diff/60;
    min = diff%60;
    cout << "Tom will run away" << endl;
    cout << hours << "hours";
    cout << min << " min for play ";
  }
}