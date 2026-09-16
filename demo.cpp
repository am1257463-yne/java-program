#include <iostream>
using namespace std;
int main() {
    int a = 15;
    cout<< &a << endl;
    int* ptr = &a;
    cout<< *(&a)<<endl;
    cout<< *(ptr);
    return 0;
}
