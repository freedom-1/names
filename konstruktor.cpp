#include <bits/stdc++.h>
using namespace std;
class Car {
public:
string brand;
string model;
int year;
Car(string x, string y, int z) { // parametrLarga ega konstruktor
brand = x;
model = y;
year = z;
>
~Car();
};
int mainQ {
// obyektLar yaratish
Car carObjl("Cobalt","Sedan", 2013);
Car car0bj2("Nexia", "Sedan", 2020);
// qiymatLarni chiqarish
cout << carObjl.brand << " " << carObjl.model << " " << carObjl.year << "\n";
cout << car0bj2.brand << " " << car0bj2.model << " " << car0bj2.year << "\n";
