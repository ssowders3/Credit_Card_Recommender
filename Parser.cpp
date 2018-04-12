//
// Created by Varun Malhotra on 4/11/18.
//

#include "Parser.h"
#include "fstream"

Parser::Parser(string file_name) {
    this->file_name = file_name;
}

void Parser::parse_file() {

    std::ifstream input_stream(file_name);
    double temp_d;



    string line = "";
    string temp = "";

    getline(input_stream, line);
    cout << line << endl;

    while (getline(input_stream, line)) {

        stringstream ss(line);

        getline(ss, temp, ',');
        transaction_date.push_back(temp);

        getline(ss, temp, ',');
        amount.push_back(atof(temp.c_str()));

        getline(ss, temp, ',');
        category.push_back(temp);
    }

    for (int i = 0 ; i < amount.size(); ++i) {
        cout << transaction_date.at(i) << " "  << amount.at(i) << " " << category.at(i) << endl;
    }
}