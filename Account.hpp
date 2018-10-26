//
//  Account.hpp
//  banking_system
//
//  Created by Bayram Muradov on 17/05/2017.
//  Copyright © 2017 Bayram Muradov. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <string>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <ctype.h>
using namespace std;

class Account{
    //constructor proto
public:
    Account();
    Account(double balance);
    //methods proto
    void setId(int newId);
    void setBalance(double newBalance);
    int getId();
    double getBalance();
    void printAc();
    //properties
private:
    int id;
    double balance;

};

#endif /* Account_hpp */
