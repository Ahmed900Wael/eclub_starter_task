
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateTotal(double price, const string promoCode) {
    if (promoCode == "ECLUB2026") {
        price = price * 0.85;
    }

    return round(price * 100) / 100;
}

int main() {
    double price = 100.0;

    bool test1 = price == calculateTotal(price, "");
    bool test2 = price != calculateTotal(price, "ECLUB2026");

    cout << fixed << setprecision(2);

    cout << "Test 1 (No Promo): "
         << (test1 ? "PASS" : "FAIL") << endl;

    cout << "Test 2 (Valid Promo): "
         << (test2 ? "PASS" : "FAIL") << endl;

    if (test1 && test2) {
        cout << "\nAll verification tests PASSED!" << endl;
    } else {
        cout << "\nSome tests FAILED. Please check your logic." << endl;
    }

    return 0;
}
