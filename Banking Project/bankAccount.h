#pragma once

class bankAccount {
private:
	int accountNumber = 0;
	double balance = 0;

public:
	void setAccountNumber(int accNum);
	int getAccountNumber() const;
	double getAccountBalance() const;
	virtual void deposit(double amount);
	virtual void withdraw(double amount);
	virtual void print() const;
	bankAccount();
	bankAccount(int accountNumber, double balance);
};