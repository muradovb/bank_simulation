//
//  BankingSystem.hpp
//  banking_system
//
//  Created by Bayram Muradov on 17/05/2017.
//  Copyright © 2017 Bayram Muradov. All rights reserved.
//

#ifndef BankingSystem_hpp
#define BankingSystem_hpp
#include "Customer.hpp"

#include <stdio.h>
#include <iostream>
using namespace std;

class BankingSystem {
public:
    BankingSystem();
    ~BankingSystem();
    void addCustomer( const int customerId, const string firstName, const string lastName );
    void deleteCustomer( const int customerId );
    int addAccount( const int customerId, const double amount );
    void deleteAccount( const int accountId );
    void showAllAccounts();
    void showAllCustomers();
    void showCustomer( const int customerId );
    //properties
private:
    
    struct NodeCus
    {
        Customer cus;
        NodeCus *next;
    };
    
    NodeCus * headCus;
    
};
#endif /* BankingSystem_hpp */
