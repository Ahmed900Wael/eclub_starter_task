#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateTotal(double price, const string promoCode) {
    double discount = 0.0;

    if (promoCode == "ECLUB2026") {
        discount = 0.15;
    }

    double finalPrice = price * (1.0 - discount);
    return round(finalPrice * 100.0) / 100.0;
}

int main() {
    bool test1 = (calculateTotal(100.0, "NO_PROMO") == 100.0);
    bool test2 = (calculateTotal(100.0, "ECLUB2026") == 85.0);

    cout << "Test 1 (No Promo): " << (test1 ? "PASS" : "FAIL") << endl;
    cout << "Test 2 (Valid Promo): " << (test2 ? "PASS" : "FAIL") << endl;

    if (test1 && test2) {
        cout << "\nAll verification tests PASSED!" << endl;
    } else {
        cout << "\nSome tests FAILED. Please check your logic." << endl;
    }

    return 0;
}