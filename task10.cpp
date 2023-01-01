#include <iostream>
#include <windows.h>
using namespace std;

void countryName (string country, float ticket_price);


main ()
{
 string country;
 cin >> country;
 float ticket_price;
 cin >> ticket_price;
 countryName (country , ticket_price );

}

void countryName (string country , float ticket_price)
{
  float discount;
  if ( country == "Pakistan")
 {
   discount = 0.95 * ticket_price;
   cout << " Final price is " << discount;
 }
  if ( country == "Ireland" )
 {
   discount = 0.9 * ticket_price;
   cout << "Final price is " << discount;
 }
  if ( country == "India" )
 {
   discount = 0.8 * ticket_price;
   cout << "Final price is " << discount;
 }
 if ( country == "England" )
 {
   discount = 0.7 * ticket_price;
   cout << "Final price is " << discount;
 }
if ( country == "Canada" )
 {
   discount = 0.55 * ticket_price;
   cout << "Final price is " << discount;
 }
} 