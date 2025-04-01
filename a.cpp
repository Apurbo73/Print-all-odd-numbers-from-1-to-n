#include <bits/stdc++.h>

using namespace std;

int main() {
    // Print all odd numbers from 1 to n
    int n;
    cin >> n;
    int b = 0;
    cout << "The Odd Numbers are:" << endl;
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " "<<endl;
            b++;
        }
    }
    cout << "Total Of Odd Numbers Is :" << b << endl;
}