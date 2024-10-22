#include <iostream>
#include <stdexcept>

class InsufficientFundsException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient funds for this withdrawal.";
    }
};

class InvalidAmountException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Invalid amount for withdrawal.";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            throw InvalidAmountException();
        }
        balance = initialBalance;
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    try {
        BankAccount account(1000);

        double withdrawalAmount;
        std::cout << "Enter amount to withdraw: ";
        std::cin >> withdrawalAmount;

        account.withdraw(withdrawalAmount);
        std::cout << "Withdrawal successful. Remaining balance: " << account.getBalance() << std::endl;

    } catch (const InsufficientFundsException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const InvalidAmountException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
