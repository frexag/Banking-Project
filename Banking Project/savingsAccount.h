#pragma once
#include "bankAccount.h"

class savingsAccount : public bankAccount {
private:
	double interestRate = 0.0;

public:
	void setInterestRate(double interestRate);
	double getInterestRate() const;
	void postInterest() const;
	void deposit(double amount) override;
	void withdraw(double amount) override;
	void print() const override;

	savingsAccount();
	savingsAccount(int accountNumber, double balance, double interestRate);
};