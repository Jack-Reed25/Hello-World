#include <iostream>
using namespace std;

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double distance;
    cout << "What is the distance you need to travel in miles? ";
    cin >> distance;

    double consumption;
    cout << "What is your fuel economy)? ";
    cin >> consumption;

    double priceL; 
    cout << "How much did you pay per litre for fuel? ";
    cin >> priceL;

    double conversion = 4.54609;

    double priceM = multiply(conversion, priceL);
  
    double GNeeded = divide(distance, consumption);

    double cost = multiply(priceM, GNeeded);

    cout << "Your trip cost: $" << cost << endl;

    return 0;
}
