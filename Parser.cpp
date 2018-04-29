//
// Created by Varun Malhotra on 4/11/18.
//

#include "Parser.h"



Parser::Parser(string file_name, string cards_csv) {

    this->file_name = file_name;
    this->cards_csv = cards_csv;

    create_cards();

}

void Parser::create_cards() {

    std::ifstream input_stream(cards_csv);

    string line;
    //skip the first line (category names)
    getline(input_stream, line);

    while (getline(input_stream, line)) {
        Card card_obj(line);
        //cout << card_obj << endl;
        cards_vector.push_back(card_obj);
    }


}


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

//    for (int i = 0 ; i < amount.size(); ++i) {
//        cout << transaction_date.at(i) << " "  << amount.at(i) << " " << category.at(i) << endl;
//    }
}

void Parser::compute() {

    for (int i = 0; i < amount.size(); ++i) {
        for (int j = 0; j < cards_vector.size(); ++j) {
            cards_vector.at(j).compute(category.at(i), amount.at(i), 1);
        }
    }
}

void Parser::print_cards() {

    for (auto card : cards_vector) {
        cout << card;
    }

}

vector<Card> Parser::recommend_top(int num) {
    sort(cards_vector.begin(), cards_vector.end(), sort_by_amount);

    if (num > cards_vector.size()) {
        num = cards_vector.size();
    }

    vector<Card> ret_vector;

    for (int i = 0; i < num; ++i) {
        ret_vector.push_back(cards_vector.at(i));
    }

    return ret_vector;
}

bool sort_by_amount(const Card& a, const Card &b) {
    return (a.amount > b.amount);
}

bool sort_by_bias_amount(const Card &a, const Card &b) {
    return (a.amount_with_bias > b.amount_with_bias);
}

    //for (int i = 0 ; i < amount.size(); ++i) {
        //cout << transaction_date.at(i) << " "  << amount.at(i) << " " << category.at(i) << endl;
    //}
//}

