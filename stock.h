#ifndef STOCK_H
#define STOCK_H
#include "transaction.h"
#include <iostream>

using namespace std;

class Stock
{
private:
    int stockID;
    int qty;
    string description;
    string category;
    string subCategory;
    Transaction * transaction;
public:
    Stock();
    void addStock();
    void removeStock();
    void editStock();
    void searchStock();
    void checkStockExists();
};

#endif // STOCK_H
