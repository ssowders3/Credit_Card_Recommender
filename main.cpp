#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    std::ifstream input_stream("../data/Discover-2017-YearEndSummary.csv");
    double temp_d;

    std::vector<string> transaction_date;
    std::vector<string> description;
    std::vector<double> amount;
    std::vector<string> category;

    string line = "";
    string temp = "";

    getline(input_stream, line);
    cout << line << endl;

    while (getline(input_stream, line)) {

        stringstream ss(line);

        getline(ss, temp, ',');
        transaction_date.push_back(temp);

        getline(ss, temp, ',');

        getline(ss, temp, ',');
        description.push_back(temp);

        getline(ss, temp, ',');
        amount.push_back(atof(temp.c_str()));

        getline(ss, temp, ',');
        category.push_back(temp);
    }

    for (int i = 0 ; i < amount.size(); ++i) {
        cout << transaction_date.at(i) << " " << description.at(i) << " " << amount.at(i) << " " << category.at(i) << endl;
    }

}