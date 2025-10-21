#include <iostream>
#include <string>
using namespace std;


int main(){
  double time;
  string response;
  cout << "how long is your friend going to take? ";
  cin >> response;
  time = stod(response);
  bool big = time > 15;
  cout << time << big << endl;
  if (big){
    double money;
    cout << "how much money do you have? ";
    cin >> money;
      
    if (money >= 3 ){
        cout << "Get yourself a coffee" << endl;
    }
    else {
        cout << "Sit on a bench till your friend comes" << endl;
    }
  }   
  else {
      cout << "wait for your friend" << endl;
  }

  return 0;
}
