// 6. WAP to find simple interest provided by bank on the available amount on the saving account by
// various banks SBI, Union, HDFC, ICICI with rate of interest 6.5,6.5, 7.4, 7.9 respectively using
// function overriding and virtual class. Minimum rate of interest is 5.4 and mechanism to compute
// simple and compound interest is set by RBI.
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

// Base class for Bank
class Bank {
protected:
    double amount;
    double rateOfInterest;

public:
    Bank(double amt, double rate) {
        amount = amt;
        rateOfInterest = rate;
    }

    virtual double getSimpleInterest(int duration) = 0;
    virtual double getCompoundInterest(int duration) = 0;
};

// Derived class for SBI
class SBI : public Bank {
public:
    SBI(double amt) : Bank(amt, 6.5) {}

    double getSimpleInterest(int duration) override {
        return (amount * rateOfInterest * duration) / 100;
    }

    double getCompoundInterest(int duration) override {
        return amount * pow(1 + rateOfInterest / 100, duration) - amount;
    }
};

// Derived class for Union Bank
class UnionBank : public Bank {
public:
    UnionBank(double amt) : Bank(amt, 6.5) {}

    double getSimpleInterest(int duration) override {
        return (amount * rateOfInterest * duration) / 100;
    }

    double getCompoundInterest(int duration) override {
        return amount * pow(1 + rateOfInterest / 100, duration) - amount;
    }
};

// Derived class for HDFC Bank
class HDFC : public Bank {
public:
    HDFC(double amt) : Bank(amt, 7.4) {}

    double getSimpleInterest(int duration) override {
        return (amount * rateOfInterest * duration) / 100;
    }

    double getCompoundInterest(int duration) override {
        return amount * pow(1 + rateOfInterest / 100, duration) - amount;
    }
};

// Derived class for ICICI Bank
class ICICI : public Bank {
public:
    ICICI(double amt) : Bank(amt, 7.9) {}

    double getSimpleInterest(int duration) override {
        return (amount * rateOfInterest * duration) / 100;
    }

    double getCompoundInterest(int duration) override {
        return amount * pow(1 + rateOfInterest / 100, duration) - amount;
    }
};

int main() {
    double amount;
    int duration;

    cout << "Enter the available amount in the savings account: ";
    cin >> amount;

    cout << "Enter the duration (in years): ";
    cin >> duration;

    Bank* banks[] = {
        new SBI(amount),
        new UnionBank(amount),
        new HDFC(amount),
        new ICICI(amount)
    };

    cout << "Bank\tSimple Interest\tCompound Interest" << endl;
    cout << "----\t---------------\t-----------------" << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i == 0 ? "SBI" : (i == 1 ? "Union" : (i == 2 ? "HDFC" : "ICICI"))) << "\t"
             << fixed << setprecision(2) << banks[i]->getSimpleInterest(duration) << "\t\t"
             << banks[i]->getCompoundInterest(duration) << endl;
        delete banks[i];
    }

    return 0;
}
