#include <iostream>
using namespace std;

int factorialN(int n) {

    int fact = 1;

    for( int i = 2; i <= n; i++){
  fact*= i;
    }
    return fact;
}

int main() {

    cout << "factorial = "<< factorialN(5);

    return 0;
}