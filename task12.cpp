#include <iostream>
using namespace std;

void PriceCalculate(int, int, int);

main ()
{
  int Red, white, tulips;
  cout << "Enter number of red roses: ";
  cin >> Red;
  cout << "Enter number of white roses: ";
  cin >> white;
  cout << "Enter number of tulips: ";
  cin >> tulips;
  PriceCalculate(Red, white, tulips);
}


void PriceCalculate(int Red, int white, int tulips)
{
  float price1, price2;

  price1 = Red*2 + white*4.10 + tulips*2.5;

  if (price1 > 200)
  {
    price2 = 0.8*price1;
  }
  if (price1 < 201)
  {
    price2 = price1;
  }
  
    cout << "Original price: " << price1 << endl;
    cout << "price after discount: " << price2 << endl;
}