#include <iostream>
using namespace std;

void MySort(int& a, int& b){
    int temp;
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
}

int main() {
  int a = 3, b = 5;
  MySort(a, b);
  cout << "a : " << a << endl
       << "b : " << b << endl;
  return 0;
}
