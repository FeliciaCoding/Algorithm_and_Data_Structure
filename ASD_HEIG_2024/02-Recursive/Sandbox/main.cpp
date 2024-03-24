#include <iostream>
#include <cmath> // sqirt()

using namespace std;

int f1(unsigned n) { // 8 , 4 , 2 ,1, 0
    if (n == 0){
        return -1; // -1,
    } else {
        return 1+ f1(n/2); // 1+f4=3, 1+f2=2, 1+f1=1, 1+f0= 1-1=0
    }
}

int f2(double n) {
    if (n <= 1) {
        return 1;
    } else {
        1+f2(n-2*sqrt(n)+1);
    }
}

int main() {
    cout << "F1:" << endl;
    cout << "f1(8) = " << f1(8) << endl;

    return 0;
}
