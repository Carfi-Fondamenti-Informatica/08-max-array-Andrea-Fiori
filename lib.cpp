#include <iostream>
#include "lib.h"
using namespace std;

float valMax(float array[], int n){
    float max=0;
    float a=0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        array[i] = a;
        if (i==0){
            max=array[i];
        }
        else if (array[i]>max){
            max=array[i];
        }
    } return max;
}
