//
//  Account.cpp
//  banking_system
//
//  Created by Bayram Muradov on 17/05/2017.
//  Copyright © 2017 Bayram Muradov. All rights reserved.
//

#include "Account.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

//constructors

Account::Account(){
    id = 0;
    balance = 0;
}

Account::Account(double balanceIn) {
    id = 0;
    balance=balanceIn;
}

//methods
void Account::setId(int newId){
    id=newId;
}
void Account::setBalance(double newBalance) {
    balance=newBalance;
}
int Account::getId() {
    return id;
}
double Account::getBalance(){
    return balance;
}

void Account:: printAc() {
    cout<<"---------"<<endl;
    cout<<id<<endl;
    cout<<balance<<endl;
    cout<<"---------"<<endl;
}

