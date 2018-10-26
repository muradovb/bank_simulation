//
//  Customer.hpp
//  banking_system
//
//  Created by Bayram Muradov on 17/05/2017.
//  Copyright © 2017 Bayram Muradov. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp
#include <string>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>
#include "Account.hpp"
#include <ctype.h>

using namespace std;



class Customer {

    //constructors proto
public:
    Customer();
    Customer(int id, string name, string surname);
    
    //methods proto
    int getId();
    void setId(int newId);
    string getName();
    void setName(string newName);
    string getSname();
    void setSname(string newSname);
    void addAcc(double balance);
    void removeAcc(int id);
    void printAcc();
    void printData();

    
    
    struct NodeAc{
        Account ac;
        NodeAc * next;
    };
    NodeAc *head;
    
    //properties
private:
    int cusId;
    string cusName;
    string cusSname;
    

    
};
#endif /* Customer_hpp */
