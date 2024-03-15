/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BankAccount.cpp
 * Author: cse278
 * Copyright 2020 Samuel Fisher
 * Created on September 30, 2020, 9:27 AM
 */

#include "BankAccount.h"

BankAccount::BankAccount(const std::string owner,
        double balance, std::string address) {
    this->owner = owner;
    this->balance = balance;
    this->address = address;
}

BankAccount::BankAccount(const BankAccount& orig) {
    this->owner = orig.owner;
    this->balance = orig.balance;
    this->address = orig.address;
}

BankAccount::~BankAccount() {
}

double BankAccount::getBalance() {
    return balance;
}

std::string BankAccount::getAddress() {
    return address;
}

void BankAccount::depositMoney(double deposit) {
    this->balance += deposit;
}

void BankAccount::withdrawMoney(double withdraw) {
    this->balance = this->balance - withdraw;
}

void BankAccount::updateAddress(std::string otherAddress) {
    this->address = otherAddress;
}
