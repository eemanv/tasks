#include <iostream>
#include <windows.h>
using namespace std;

void ifEqual (int x , int y);

main()
{
 int num1;
 int num2;
 cout << " Enter number 1 : ";
 cin >> num1;
 cout << " Enter number 2 : ";
 cin >> num2;

  ifEqual (num1 , num2);

}
void ifEqual (int x, int y)
{
  if ( x == y)
  {
    cout << " True " ;
  }
  if ( x != y)
  {
    cout << " False ";
  }
}

 