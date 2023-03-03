#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long long S(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * S(n - 1);
    }
}


int main() {
    int n;
    double x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    double sum = 0;
    for (int i = 1 ; i <= n ; i++){
        sum += (pow(x,i) / S(i));
    }
    cout << "Tong la: " << sum << endl;
    return 0;
}