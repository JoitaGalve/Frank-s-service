#include<iostream>
using namespace std;

int main(){
    cout << "Welcome to Frank's Carpet Cleaning Service :)" << endl;

  cout << endl; 
  
    int smallRooms;
    cout << "How many small rooms would you like cleaned? ";
    cin >> smallRooms;

    int largeRooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> largeRooms;

    double pricePerSmallRoom = 25.0;
    double pricePerLargeRoom = 35.0;

    double taxRate = 0.06;

    double cost = (smallRooms * pricePerSmallRoom) + (largeRooms * pricePerLargeRoom);

    double tax = cost + taxRate;

    double totalCost = cost + tax;

    cout << "Estimate for carpet cleaning service" << endl;

    cout << "Number of small rooms: " << smallRooms << endl;

    cout << "Number of large rooms: " << largeRooms << endl;

    cout << "Price per small room: $" << pricePerSmallRoom << endl;

    cout << "Price per large room: $" << pricePerLargeRoom << endl;

    cout << "Cost: $" << cost << endl;

    cout << "Tax: $" << tax << endl;
   cout << "----------------------------------------------------" << endl;
  
   cout << "----------------------------------------------------" << endl;

    cout << "Total estimate: $" << totalCost << endl;

    cout << "This estimate is valid for 30 days" << endl;
}