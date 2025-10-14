

#include <iostream> 
int main() {

  string distnce;
    cout <<"what is the distnce you need to travle in miles?" << endl; 
    cin >> distance;
  
  string consumption;
    cout <<"what is your fuel economy?" << endl; 
    cin >> consumption;
  
  string priceL;
    cout <<"how much did you pay per litre for fuel?" << endl; 
    cin >> priceL;

  
 double conversion = 4.54609;
  
 double priceM = multiply(conversion,priceL);  //price per gallons

 double result1 = divide(distance,consumption); //gallons needed


       double result2 = multiply(priceM,result1);


   cout << "Your trip cost: " << result2 << endl;
    return 0;
}

