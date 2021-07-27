#include <iostream>
using namespace std;

void MySort(int*, int*);

int main() {
  int a = 3, b = 5;
  MySort(&a, &b);
  cout << "a : " << a << endl
       << "b : " << b << endl;
  return 0;
}

void MySort(int* a, int* b){
    
    // cout << "a:" << *a << endl;
    // cout << "b:" << *b << endl;
    
    int temp;
    if (*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
