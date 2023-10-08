TASK#01
#include<iostream>
using namespace std;
int value1 =10;
int value2 =20;

int sum(){
    value1 = 40;
    return value1 + value2;

}
main(){
    int x = value1;
    value1 = 100;
    x = 100;
    x = 20;
    value2 = sum();
    cout<<value1<<" "<<value2;
}



TASK#02
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

TASK#03
#include <iostream>
using namespace std;
float tax(char type, float price);
float amount;
main()
{
    char type;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    float price;
    cout << "Enter the price of the vehicle: $";
    cin>>price;
    float final;
    final = tax(type, price);
   
    
    cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << final;
}
float tax(char type, float price)
{
    float final;
    if (type == 'M' )
    {
        float taxamount = price * 0.06;
        amount= taxamount+price;
        amount = final;
    }
    if (type == 'E')
    {
        float taxamount = price * 0.08;
        amount=taxamount+price;
        final = amount;
    }
    if (type == 'S')
    {
        float taxamount = price * 0.1;
        amount=taxamount+price;
        final = amount;
    }
    if (type ==  'V')
    {
        float taxamount = price * 0.12;
        amount=taxamount+price;
        final = amount;
    }
    if (type == 'T')
    {
       float taxamount = price * 0.15;
       amount=taxamount+price;
        final = amount;
    }

    return final;
}

TASK#04
#include<iostream>
using namespace std;
void projectTimeCalculation(int days, int hours, int workers);
main(){
    int hours;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    int days;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    int workers;
    cout<<"Enter the number of all workers: ";
    cin>>workers; 
projectTimeCalculation(days, hours,workers);



}
void projectTimeCalculation(int days,int hours,int workers)
{
    
    int training;
    training=days*0.1;
    int remaining;
    remaining=days-training;
    int calculation;
    calculation=remaining*10*workers;
    
    if(hours>calculation)
    {cout<<"Not enough time! "<< hours-calculation<<" hours needed.";}
if(hours<=calculation)
{cout<<"Yes! "<<calculation-hours <<" hours left. ";}
}


