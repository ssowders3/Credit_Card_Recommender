//
// Created by Varun Malhotra on 4/22/18.
//

#ifndef PROJECT_CARD_H
#define PROJECT_CARD_H

#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class Card {

public:

    Card(string line);
    void compute(string category, double transaction_amount, int biasy);
    friend ostream & operator << (ostream &out, const Card &c);
    friend bool sort_by_amount(const Card& a, const Card &b);
    friend bool sort_by_bias_amount(const Card &a, const Card &b);


private:
    map<string, int> card_weights;
    double amount;
    double amount_with_bias;
    string name;

};

ostream & operator << (ostream &out, const Card &c);



const string categories[] = {"gas", "restaurants", "departmental_store", "groceries", "supermarkets", "wholesale_clubs",\
 "hotel", "airfare", "travel_other", "amazon", "paypal", "online", "miscellaneous"};


#endif //PROJECT_CARD_H
