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