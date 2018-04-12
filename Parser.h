//
// Created by Varun Malhotra on 4/11/18.
//

#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Parser {

public:

    Parser(string);
    void parse_file();


    //member variables
    string file_name;
    std::vector<string> transaction_date;
    std::vector<double> amount;
    std::vector<string> category;

};


#endif //PROJECT_PARSER_H
