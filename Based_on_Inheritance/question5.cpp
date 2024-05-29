// 5. WAP to create an banking application using inheritance and do following.
// a) Create current account of the user with user Id and minimum balance 500.
// b) Allow user to deposit, withdraw and check balance on the account.
// c) Allow user to open fixed deposit account with the user defined amount available on the current
// account and display the interest obtained quarterly and the final maturity value with the interest
// obtained.
// d) Allow user to open Rd deposit account with the user defined amount available on the current
// account and display the interest obtained quarterly and the final maturity value with the interest
// obtained. Allow user to deposit premium monthly manually or automatically from the account.
#include <iostream>
#include <string>
using namespace std;

// Base class for Bank Account
class BankAccount {
protected:
    string userId;
    double balance;

public:
    BankAccount(string id, double bal) {
        userId = id;
        balance = bal;
    }

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void checkBalance() = 0;
};

// Derived class for Current Account
class CurrentAccount : public BankAccount {
public:
    CurrentAccount(string id, double bal) : BankAccount(id, bal) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void checkBalance() override {
        cout << "Current balance: " << balance << endl;
    }
};

// Derived class for Fixed Deposit Account
class FixedDepositAccount : public BankAccount {
private:
    double principalAmount;
    double interestRate;
    int tenure;

public:
    FixedDepositAccount(string id, double bal, double amount, double rate, int tenure) : BankAccount(id, bal) {
        principalAmount = amount;
        interestRate = rate;
        this->tenure = tenure;
    }

    void deposit(double amount) override {
        cout << "Fixed deposit account does not support deposit." << endl;
    }

    void withdraw(double amount) override {
        cout << "Fixed deposit account does not support withdrawal." << endl;
    }

    void checkBalance() override {
        double interest = principalAmount * interestRate * tenure / 100;
        double maturityValue = principalAmount + interest;
        cout << "Fixed deposit account details:" << endl;
        cout << "Principal amount: " << principalAmount << endl;
        cout << "Interest rate: " << interestRate << "%" << endl;
        cout << "Tenure: " << tenure << " months" << endl;
        cout << "Interest obtained: " << interest << endl;
        cout << "Maturity value: " << maturityValue << endl;
    }
};

// Derived class for Recurring Deposit Account
class RecurringDepositAccount : public BankAccount {
private:
    double principalAmount;
    double interestRate;
    int tenure;

public:
    RecurringDepositAccount(string id, double bal, double amount, double rate, int tenure) : BankAccount(id, bal) {
        principalAmount = amount;
        interestRate = rate;
        this->tenure = tenure;
    }

    void deposit(double amount) override {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) override {
        cout << "Recurring deposit account does not support withdrawal." << endl;
    }

    void checkBalance() override {
        double interest = principalAmount * interestRate * tenure / 100;
        double maturityValue = principalAmount + interest;
        cout << "Recurring deposit account details:" << endl;
        cout << "Principal amount: " << principalAmount << endl;
        cout << "Interest rate: " << interestRate << "%" << endl;
        cout << "Tenure: " << tenure << " months" << endl;
        cout << "Interest obtained: " << interest << endl;
        cout << "Maturity value: " << maturityValue << endl;
    }
};

// Derived class for Loan
class Loan {
private:
    double amount;
    double interestRate;
    int tenure;

public:
    Loan(double amount, double rate, int tenure) {
        this->amount = amount;
        this->interestRate = rate;
        this->tenure = tenure;
    }

    void checkLoan() {
        double interest = amount * interestRate * tenure / 100;
        double totalAmount = amount + interest;
        cout << "Loan details:" << endl;
        cout << "Amount: " << amount << endl;
        cout << "Interest rate: " << interestRate << "%" << endl;
        cout << "Tenure: " << tenure << " months" << endl;
        cout << "Interest obtained: " << interest << endl;
        cout << "Total amount: " << totalAmount << endl;
    }
};

int main() {
    CurrentAccount currentAccount("1234567890", 500);
    FixedDepositAccount fixedDepositAccount("1234567891", 500, 10000, 5, 6);
    RecurringDepositAccount recurringDepositAccount("1234567892", 500, 10000, 5, 6);
    Loan loan(5000, 5, 6);
	cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check balance" << endl;
        cout << "4. Open fixed deposit account" << endl;
        cout << "5. Open recurring deposit account" << endl;
        cout << "6. Take loan" << endl;
        cout << "7. Exit" << endl;
    int choice;
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: ";
                double depositAmount;
                cin >> depositAmount;
                currentAccount.deposit(depositAmount);
                break;
            case 2:
                cout << "Enter the amount to withdraw: ";
                double withdrawAmount;
                cin >> withdrawAmount;
                currentAccount.withdraw(withdrawAmount);
                break;
            case 3:
                currentAccount.checkBalance();
                break;
            case 4:
                cout << "Enter the principal amount: ";
                double fixedDepositAmount;
                cin >> fixedDepositAmount;
                fixedDepositAccount.deposit(fixedDepositAmount);
                break;
            case 5:
                cout << "Enter the principal amount: ";
                double recurringDepositAmount;
                cin >> recurringDepositAmount;
                recurringDepositAccount.deposit(recurringDepositAmount);
                break;
            case 6:
                loan.checkLoan();
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
