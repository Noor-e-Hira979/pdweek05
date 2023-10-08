#include <iostream>
#include <cmath>
using namespace std;

void centimeter(float length, float width, float height);
void kilometer(float length, float width, float height);
void meter(float length, float width, float height);
void millimeter(float length, float width, float height);

float volume_m, volume_cm, volume_mm, volume_km;

main()
{
  float length, width, height;
  cout << "Enter the length of the pyramid (in meters): ";
  cin >> length;
  cout << "Enter the width of the pyramid (in meters): ";
  cin >> width;
  cout << "Enter the height of the pyramid (in meters): ";
  cin >> height;

  string outputUnit;
  cout << "Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
  cin >> outputUnit;

  if (outputUnit == "millimeters")
  {
    millimeter(length, width, height);
  }
  if (outputUnit == "centimeters")
  {
    centimeter(length, width, height);
  }
  if (outputUnit == "meters")
  {
    meter(length, width, height);
  }
  if (outputUnit == "kilometers")
  {
    kilometer(length, width, height);
  }
}

void millimeter(float length, float width, float height)
{
  volume_m = (length * width * height) / 3;
  volume_mm = volume_m * 1000;
  cout << "The volume of the pyramid is: " << volume_mm << " cubic millimeter. ";
}
void kilometer(float length, float width, float height)
{
  volume_m = (length * width * height) / 3;
  volume_km = volume_m * 0.001;
  cout << "The volume of the pyramid is: " << volume_km << " cubic kilometer. ";
}
void meter(float length, float width, float height)
{
  volume_m = (length * width * height) / 3;
  cout << "The volume of the pyramid is: " << volume_m << " cubic meter. ";
}
void centimeter(float length, float width, float height)
{
  volume_m = (length * width * height) / 3;
  volume_cm = volume_m * 10;
  cout << "The volume of the pyramid is: " << volume_cm << " cubic centimeter. ";
}
