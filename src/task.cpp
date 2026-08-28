/**
 * Diagnostic Checkpoint: Calculate Final Cart Price with Discount (C++)
 * 
 * TASK: Fix the function below so that:
 * 1. It grants a 15% discount when promoCode matches "ECLUB2026".
 * 2. It returns the correct final price rounded/calculated to 2 decimal places.
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateTotal(double price, const string promoCode) {
    double discount = 0.0;

    // TODO: Grant a 15% discount (0.15) when promoCode matches "ECLUB2026"
}

int main() {
    // TODO: Verify that test1 returns true when no discount is applied, test2 returns false when 15% discount is applied
    bool test1 = true;
    bool test2 = true;

    cout << "Test 1 (No Promo): " << (test1 ? "PASS" : "FAIL") << endl;
    cout << "Test 2 (Valid Promo): " << (test2 ? "PASS" : "FAIL") << endl;

    if (test1 && test2) {
        cout << "\nAll verification tests PASSED!" << endl;
    } else {
        cout << "\nSome tests FAILED. Please check your logic." << endl;
    }

    return 0;
}