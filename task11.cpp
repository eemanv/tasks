#include <iostream>
#include <windows.h>
using namespace std;

void challan (int speed);


main ()
{
 int speed;
 cin >> speed;
 challan (speed );
}
void challan (int speed)
{
 if ( speed > 100)
  {
   cout << "Halt.. YOU WILL BE CHALLANGED!!!" << speed ;
  }
 if (speed <101 )
  {
   cout << "Perfect! You're doing great" << speed;
  }
}