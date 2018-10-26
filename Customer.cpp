//
//  Customer.cpp
//  banking_system
//
//  Created by Bayram Muradov on 17/05/2017.
//  Copyright © 2017 Bayram Muradov. All rights reserved.
//

#include "Customer.hpp"
#include <iostream>
using namespace std;

//constructors

Customer::Customer() {
    head = NULL;
}

Customer:: Customer(int id, string name, string surname) {
    cusId=id;
    cusName=name;
    cusSname=surname;
    head =NULL;

}

int Customer:: getId() {
    return cusId;
}

void Customer::setId(int newId) {
    cusId=newId;
}

string Customer:: getName() {
    return cusName;
}

string Customer:: getSname(){
    return cusSname;
}


void Customer::setName(string inp) {
    cusName=inp;
}

void Customer:: setSname(string newSname) {
    cusSname=newSname;
}

void Customer:: addAcc(double balance) {
    NodeAc * locpntr;
    Account *accnt = new Account();
    
    locpntr->ac = *accnt;
    
    NodeAc * curr =head;
    locpntr->ac.setBalance(balance);
    locpntr->ac.setId(11);
    
    
    if(head ==NULL) {
        head=locpntr;
        locpntr->next=NULL;
    }
    else {
        while(curr->next!=NULL) {
            curr=curr->next;
        }

        curr->next = locpntr;
        
        if(head != NULL)
            locpntr->next = NULL;
    }
}
void Customer::removeAcc(int id) {
    NodeAc * curr = head;
    NodeAc * last;
    head = NULL;
    while(curr!=NULL) {
        if(curr->ac.getId()==id) {
            NodeAc * temp=curr;
            curr=curr->next;
            delete temp;
        }
        
        else {
            if(head==NULL) {
                head =curr;
            }
            else {
                last=curr->next;
            }
            last=curr;
            curr=curr->next;
        
        }
    }
}

void Customer:: printAcc() {
    NodeAc * curr = head;
    while (curr != NULL) {
        curr->ac.printAc();
        curr = curr->next;
    }

}

void Customer:: printData() {
    cout<<cusId<<endl;
    cout<<cusName<<endl;
    cout<<cusSname<<endl;
    cout<<"-------------"<<endl;
}

