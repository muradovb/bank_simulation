//
//  BankingSystem.cpp
//  banking_system
//
//  Created by Bayram Muradov on 17/05/2017.
//  Copyright © 2017 Bayram Muradov. All rights reserved.
//

#include "BankingSystem.hpp"
#include "Customer.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

//constructor
BankingSystem::BankingSystem() {
    headCus = NULL;
}
//destructor
BankingSystem::~BankingSystem() {

}

//methods
void BankingSystem::addCustomer(const int customerId, const string firstName, const string lastName) {
    
    NodeCus * locpntr = new NodeCus;
    
    Customer *cuss = new Customer(); //creating customer
    
    locpntr->cus = *cuss;
    
    
    NodeCus *curr=headCus;
    //setting properties
    locpntr->cus.setId(customerId);
    locpntr->cus.setName(firstName);
    locpntr->cus.setSname(lastName);
    
    //adding customer to the list
    if(headCus == NULL) {
        headCus = locpntr;
        locpntr->next=NULL;
    }
    
    else {
        
        while((curr->next)!=NULL) {
            curr=curr->next;
        }
    
        curr->next = locpntr;
        
        if(headCus != NULL)
            locpntr->next = NULL;
    }
}

void BankingSystem::deleteCustomer(const int customerId) {
    NodeCus * curr = headCus;
    headCus=NULL;
    NodeCus * last = NULL;
    while(curr!=NULL) {
        if(curr->cus.getId()==customerId) {
            NodeCus* temp =curr;
            curr=curr->next;
            delete temp;
        }
        else {
            if(headCus == NULL)
                headCus = curr;
            else
                last->next=curr;
            last = curr;
            curr = curr->next;
        }
    }
}

int BankingSystem::addAccount(const int customerId, const double amount) {
    NodeCus * curr = headCus;
    while (curr != NULL) {
        
        if(curr->cus.getId()==customerId) {
            curr->cus.addAcc(amount);
            return curr->cus.getId();
            break;
        }
        else
            curr= curr->next;
    }
    return -1;
}

void BankingSystem:: deleteAccount(const int accountId) {

}

void BankingSystem:: showAllAccounts() {
    NodeCus * curr = headCus;
    while (curr != NULL){
        curr->cus.printAcc();
        curr=curr->next;
    }
}

void BankingSystem:: showAllCustomers() {
    NodeCus* curr = headCus;
    
    while(curr!=NULL) {
        curr->cus.printData();
        curr=curr->next;
    }
}

void BankingSystem:: showCustomer(const int customerId) {
    NodeCus * curr = headCus;
    while (curr != NULL) {
        if(curr->cus.getId()==customerId) {
            curr->cus.printData();
        }
    }
}



