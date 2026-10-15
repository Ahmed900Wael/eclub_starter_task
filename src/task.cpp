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

    if(promoCode == "ECLUB2026"){
        discount = 0.15;
    }

    return price - (price * discount);
}

int main() {
    double price = 2000;
    double totalPrice ;

    cout << "Do you have promocode ? Y|N : ";
    string conf; cin >> conf;
    bool hasPromoCode = (conf == "Y" || conf == "y");

    if(hasPromoCode){
        string promocode;
        cout << "enter the promocode : "; cin >> promocode;

        totalPrice = calculateTotal(price , promocode);
        
    }


    bool test1 = !hasPromoCode;
    bool test2 = price != totalPrice;

    cout << "Test 1 (No Promo): " << (test1 ? "PASS" : "FAIL") << endl;
    cout << "Test 2 (Valid Promo): " << (test2 ? "PASS" : "FAIL") << endl;

    if (test1 && test2) {
        cout << "\nAll verification tests PASSED!" << endl;
    } else {
        cout << "\nSome tests FAILED. Please check your logic." << endl;
    }

    return 0;
}