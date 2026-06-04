#include <iostream>
#include <exception>
#include <string>
using namespace std;

// Custom exception class
class InsufficientBalanceException : public exception {
    private:
        string message;
    
    public:
        InsufficientBalanceException(double balance, double amount) {
            message = "Insufficient balance! Available: $" 
                    + to_string(balance) + ", Required: $" 
                    + to_string(amount);
        }
        
        const char* what() const noexcept override {
            return message.c_str();
        }
};

class BankAccount {
    private:
        double balance;
    
    public:
        BankAccount(double initial) : balance(initial) {}
        
        void withdraw(double amount) {
            if (amount <= 0) {
                throw invalid_argument("Withdrawal amount must be positive!");
            }
            if (amount > balance) {
                throw InsufficientBalanceException(balance, amount);
            }
            balance -= amount;
            cout << "Withdrawn: $" << amount << ", Remaining: $" << balance << endl;
        }
        
        double getBalance() const { return balance; }
};

int main() {
    BankAccount acc(500);
    
    try {
        acc.withdraw(200);   // OK
        acc.withdraw(400);   // Will throw
    }
    catch (const InsufficientBalanceException& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const exception& e) {  // Catch any standard exception
        cout << "Error: " << e.what() << endl;
    }
    
    cout << "Final balance: $" << acc.getBalance() << endl;
    return 0;
}