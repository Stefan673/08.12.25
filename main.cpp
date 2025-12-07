#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("numere.txt");

    int x;
    int min1 = 1000, min2 = 1000;

    while (f >> x) {
        if ((x>=-99 && x<=-10) || (x>=10 && x<=99)) {
            if (x < min1) {
                min2 = min1;
                min1 = x;
            } else if (x != min1 && x < min2) {
                min2 = x;
            }
        }
    }

    if (min2 == 1000) {
        // nu există două valori distincte
        cout << 0;
    } else {
        cout << min1 << " " << min2;
    }

    return 0;
}
