//
// Created by lost on 4/28/2026.
//

#include "employee.h"
using namespace std;

employee::employee(string infile, string outfile) {
    empIn.open(infile);
    empOut.open(outfile);
}

void employee::readFromFile() {
    string line, word;

    while (getline(empIn, line)) {

        temp.clear();
        word = "";

        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ',') {
                temp.push_back(word);
                word = "";

            }
            else {
                word += line[i];
            }
        }
        addToRow(word);
        addToFile();
    }
}

void employee::writeToFile() {
    for (int i = 0; i < emp.size(); i++) {
        string fullName = emp[i][1] + " " + emp[i][0];

        empOut << fullName << ", " << emp[i][2] << ", " << emp[i][3] << ", " << emp[i][4] << endl;
    }
}

void employee::addToRow(string value) {
    temp.push_back(value);
}

void employee::addToFile() {
    emp.push_back(temp);
}

void employee::closeFiles() {
    empIn.close();
    empOut.close();
}
