//
// Created by Varun Malhotra on 4/22/18.
//

#include "Card.h"

Card::Card(string line) {

    //card_weights = map<string, int>();
    amount = 0;
    amount_with_bias = 0;
    string temp;
    stringstream ss(line);

    getline(ss, temp, ',');
    name = temp;

    for (int i = 0; i < 13; ++i) {
        getline(ss, temp, ',');
        card_weights[categories[i]] = atoi(temp.c_str());
    }

}

void Card::compute(string category, double transaction_amount, int bias) {

    amount += card_weights[category] * transaction_amount / 100;
    amount_with_bias += (card_weights[category] + bias) * transaction_amount / 100;
}

ostream & operator << (ostream &out, const Card &c)
{
    out << "Name: " << c.name << "\n";
    auto it_beg = c.card_weights.cbegin();
    auto it_end = c.card_weights.cend();

    for(; it_beg != it_end; ++it_beg) {
        out << it_beg->first << ": " << it_beg->second << "\n";
    }

    out << "Amount: " << c.amount << "\n";
    out << "Bias Amount: " << c.amount_with_bias << "\n\n";

    return out;
}
