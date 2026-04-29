#include "employee.h"

int main() {

    employee napka1("employee.csv", "newemployee.csv");

    napka1.readFromFile();
    napka1.writeToFile();
    napka1.closeFiles();

    cout << "New employee CSV file created successfully." << endl;

    return 0;
}