#include <iostream>
using namespace std;

class Account {
    public:
        int id;
        double balance;
        double annualInterestRate;

    // no arg constructor
    Account() {
        id = 0;
        balance = 0.0;
        annualInterestRate = 0.0;
    }

    // constructor that sets the value of the three variables.
    Account(int _id, double _balance, double _annualInterestRate) {
        id = _id;
        balance = _balance;
        annualInterestRate = _annualInterestRate;
    }

    double getMonthlyInterest() {
        return annualInterestRate / 12;
    }

    void withdraw(double amount) {
        balance -= amount;
    }

    void deposit(double amount) {
        balance += amount;
    }
};


int main() {
    Account acc1(1122, 2000, 0.045);
    Account acc2; // Using no arg constructor

    withdraw(2500);
    deposit(3000);

    cout << "The balance is " << acc1.balance << endl;
    cout << "The monthly balance is " acc1.getMonthlyInterestRate << endl;

    return 0;
}