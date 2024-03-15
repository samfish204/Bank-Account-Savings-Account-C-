/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SavingsAccount.cpp
 * Author: cse278
 * Copyright 2020 Samuel Fisher
 * Created on September 30, 2020, 3:53 PM
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string owner,
        double balance, std::string address,
        double interest) : BankAccount(owner, balance, address),
        interest(interest) {
    this->interest = interest;
}

SavingsAccount::SavingsAccount(const SavingsAccount& orig) {
    this->interest = orig.interest;
}

SavingsAccount::~SavingsAccount() {
}

double SavingsAccount::getInterestRate() {
    return interest;
}

void SavingsAccount::setInterestRate(double interestRate) {
    this->interest = interestRate;
}
