#include <iostream>
#include <windows.h>
using namespace std;

void reverse(string state);

main()
{
  string state;
  cin >>state;
  reverse(state);
}

void reverse(string state)
{
  if (state == "true")
  {
    cout << " False " ;
  }
  if (state == "false")
  {
    cout << " True ";
  }
}