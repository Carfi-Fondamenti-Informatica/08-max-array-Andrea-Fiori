#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int n;
    float a=0;
    float max=0;
    cin >> n;
    float array[n];
    cout << valMax(array, n);
  return 0;
}
