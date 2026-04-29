//
// Created by lost on 4/28/2026.
//

#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class employee {

private:
    ofstream empOut;
    ifstream empIn;

    vector<vector<string>> emp;
    vector<string> temp;


public:
    employee(string, string);
    void readFromFile();
    void addToRow(string);
    void addToFile();
    void writeToFile();
    void closeFiles();

};



#endif //UNTITLED_EMPLOYEE_H
