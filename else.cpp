#include <iostream>
using namespace std;

int condition(int A){
  A = 0;
  return A;
}

int main(){
  if (A > 10){
    cout << "The number is up from 10" << endl;
  }
  else{
    cout << "The number isn't up from 10, so, it's ok." << endl;
  }
  return 0;
}
