/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BankAccount.h
 * Author: cse278
 * Copyright 2020 Samuel Fisher
 * Created on September 30, 2020, 9:27 AM
 */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount {
public:
    BankAccount(const std::string owner = "",
            double balance = 0, std::string address = "");
    BankAccount(const BankAccount& orig);
    virtual ~BankAccount();
    double getBalance();
    std::string getAddress();
    void depositMoney(double deposit);
    void withdrawMoney(double withdraw);
    void updateAddress(std::string otherAddress);
private:
    std::string owner;
    double balance;
    std::string address;
};

#endif /* BANKACCOUNT_H */

