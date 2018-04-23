//
// Created by Varun Malhotra on 4/11/18.
//

#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Card.h"

using namespace std;

class Parser {

public:

    Parser(string, string);
    Parser(string);
    void parse_file();
    void create_cards();
    void compute();
    void print_cards();
    vector<Card> recommend_top(int);



private:
    //member variables
    string file_name;
    std::vector<string> transaction_date;
    std::vector<double> amount;
    std::vector<string> category;
    string cards_csv;
    vector<Card> cards_vector;

};

bool sort_by_amount(const Card& a, const Card &b);

bool sort_by_bias_amount(const Card &a, const Card &b);

#endif //PROJECT_PARSER_H
