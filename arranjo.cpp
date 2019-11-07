#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

unsigned long int fat(unsigned long int n){
    unsigned long int fat = 1;
    for(int i = n; i > 0; i--){
        fat *= i;
    }
    return fat;
}

unsigned long int arr(unsigned long int n, unsigned long int p){
    unsigned long int arr = 1;
    for(int i = n; i > (n-p); i--){
        arr *= i;
    }
    return arr;
}

unsigned long int comb(unsigned long int n, unsigned long int p){
    unsigned long int comb = 1;
    comb = arr(n, p)/fat(p);
    return comb;
}

int main(){
    cout << fat(5) << endl;
    cout << arr(32, 3) << endl;
    cout << comb(5, 2) << endl;
    return 0;
}