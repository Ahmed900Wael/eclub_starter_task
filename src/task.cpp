#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateTotal(double price, const string promoCode) {
    double discount = 0.15;
    double finalPrice = price;
    if (promoCode == "ECLUB2026")
    {
        finalPrice -= price * discount; 
    }

    return round(finalPrice * 100.0) / 100.0;
}

int main() {
    bool test1 = false;
    bool test2 = false;

    if (calculateTotal(100.0, "INVALID") == 100.0)
    {
        test1 = true;
    }

    if (calculateTotal(100.0, "ECLUB2026") == 85.0)
    {
        test2 = true;
    }

    cout << "Test 1 (No Promo): " << (test1 ? "PASS" : "FAIL") << endl;
    cout << "Test 2 (Valid Promo): " << (test2 ? "PASS" : "FAIL") << endl;

    if (test1 && test2) {
        cout << "\nAll verification tests PASSED!" << endl;
    } else {
        cout << "\nSome tests FAILED. Please check your logic." << endl;
    }

    return 0;
}