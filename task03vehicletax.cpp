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