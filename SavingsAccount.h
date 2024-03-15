/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SavingsAccount.h
 * Author: cse278
 * Copyright 2020 Samuel Fisher
 * Created on September 30, 2020, 3:53 PM
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"
#include <string>

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(const std::string owner, double balance,
            std::string address, double interest);
    SavingsAccount(const SavingsAccount& orig);
    virtual ~SavingsAccount();
    double getInterestRate();
    void setInterestRate(double interestRate);
private:
    double interest;
};

#endif /* SAVINGSACCOUNT_H */

