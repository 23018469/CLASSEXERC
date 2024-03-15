#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost, employeeSalary, yearlyRent, electricityCost, desiredProfit;

    cout << "Enter total cost of merchandise: ";
    cin >> merchandiseCost;

    cout << "Enter total salary of employees (including your own): ";
    cin >> employeeSalary;

    cout << "Enter yearly rent: ";
    cin >> yearlyRent;

    cout << "Enter estimated electricity cost: ";
    cin >> electricityCost;



     double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;

     double netProfit = totalExpenses * 0.1;

     double markup = netProfit / (merchandiseCost-0.85) ;

     cout << "The merchandise should be marked up by approximately " << markup << " times." << endl;

     return 0;
}
