// Specification file for the Account class.
// if we dont have this the declaration will run multiple time
#ifndef ACCOUNT_H // if account_h doesnt define
#define ACCOUNT_H // then please define

//we have to include needed to use account class
#include "account.h"

class Account
{
private:
   double balance;         // Account balance
   double interestRate;    // Interest rate for the period
   double interest;        // Interest earned for the period
   int transactions;       // Number of transactions
public:
   Account(double iRate = 0.045, double bal = 0)
      { balance = bal; 
        interestRate = iRate; 
        interest = 0;
        transactions = 0; }

   void setInterestRate(double iRate)
      { interestRate = iRate; }
   
   void makeDeposit(double amount)
      { balance += amount; transactions++; }
   
   bool withdraw(double amount); // Defined in Account.cpp
   
   void calcInterest()
      { interest = balance * interestRate; balance += interest; }
   
   double getInterestRate() const
      { return interestRate; }
   
   double getBalance() const
      { return balance; }
   
   double getInterest() const
      { return interest; }
   
   int getTransactions() const
      { return transactions; }
};
#endif // to avoid multiple declaration. link to line 3
