
#include <iostream>
#include <fstream>
#include <cmath>
#include "Parser.h"
#include "Card.h"
#define YEAR 2018

using namespace std;

void generate_transactions();

void getRandomDate(int*, int*);
string getRandomCategory();
double getRandomAmount();


//const string categories[] = {"gas", "restaurants", "departmental_store", "groceries", "supermarkets", "wholesale_clubs",\
 //"hotel", "airfare", "travel_other", "amazon", "paypal", "online", "miscellaneous"};



// int main() {

//     srand(time(NULL));
//     //generate_transactions();
//     //string file_name = "../data/Discover-2017-YearEndSummary.csv"
//     string file_name = "../data/generated_transactions.csv";
//     string cards_csv = "../cards.csv";
//     //Parser my_parse(file_name);
//     Parser my_parse(file_name, cards_csv);
//     my_parse.parse_file();
//     my_parse.compute();
//     //my_parse.print_cards();
//     vector<Card> card_vector = my_parse.recommend_top(3);

//     for (Card card: card_vector) {
//         cout << card << endl;
//     }




// }


void generate_transactions() {

    ofstream output_s("../data/generated_transactions.csv");

    output_s << "date,";
    output_s << "amount,";
    output_s << "category";
    output_s << endl;

    int day;
    int month;

    for (int i = 0; i < 10000; ++i) {
        getRandomDate(&day, &month);
        cout << month << "/" << day << endl;
        output_s << month << "/" << day << "/" << YEAR << "," << getRandomAmount() << "," << getRandomCategory() << endl;
    }
}

void getRandomDate(int* day, int* month) {

    *month = 1 + rand() % 12;

    if (*month ==  2) {
        *day = 1 + rand() % 27;
    }

    else if (*month == 1 || *month == 3 || *month == 5 || *month == 7 || *month == 8 || *month == 10 || *month == 12) {
        *day = 1 + rand() % 30;
    }

    else {
        *day = 1 + rand() % 29;
    }



}

string getRandomCategory() {
    return categories[rand() % 13];
}

double getRandomAmount() {
    int exp = 1 + rand() % 3;
    double amount =  pow(10, exp) * (double) rand()/(double)RAND_MAX;

    amount =  (int)(amount * 100)/100.0;
    return amount;
}