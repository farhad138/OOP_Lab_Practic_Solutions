/*Online Payment sydtem*/
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0; // Pure virtual function

    // Virtual destructor for safe deletion via base class pointer
    virtual ~Payment() {}
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment via Credit Card..." << endl;
    }
};

class MobileBankingPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment via Mobile Banking (bKash/Nagad)..." << endl;
    }
};

int main() {
    Payment* ptr;

    ptr = new CreditCardPayment();
    ptr->processPayment();
    delete ptr;

    ptr = new MobileBankingPayment();
    ptr->processPayment();
    delete ptr;

    return 0;
}
