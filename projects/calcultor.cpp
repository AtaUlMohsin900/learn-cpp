#include <iostream>

using namespace std;

int main() {
    char option, op;
    cout << "\t\t***************************************************************************************" << endl;
    cout << "\t\t**   #####                                                                           **" << endl;
    cout << "\t\t**  #     #     ##    #        ####   #    #  #          ##     ###   ####   #####   **" << endl;
    cout << "\t\t**  #          #  #   #       #    #  #    #  #         #  #     #   #    #  #    #  **" << endl;
    cout << "\t\t**  #         #    #  #       #       #    #  #        #    #    #   #    #  #    #  **" << endl;
    cout << "\t\t**  #         ######  #       #       #    #  #        ######    #   #    #  #####   **" << endl;
    cout << "\t\t**  #     #  #      # #       #    #  #    #  #       #      #   #   #    #  #   #   **" << endl;
    cout << "\t\t**   #####   #      #  ######  ####    ####   ######  #      #   #    ####   #    #  **" << endl;
    cout << "\t\t***************************************************************************************" << endl;
    cout << "\t\t**ALI AHMED                  **   DR : MOHAMMED kHFAGY   **              AHMED MATTAR**" << endl;
    cout << "\t\t**MOHAMMED MAGDY             ******************************              ABDALLAH    **" << endl;
    cout << "\t\t****************************************   WAEL   *************************************" << endl;
    cout << "-------------------------------------------------------------------------------------------------------"
         << endl;
         
    cout << "Basic calculator\t'a'\nAdvanced calculator\t'b'\nASCII Table\t\t'c'\nDigital system\t\t'd'\n" << ">> ";
    cin >> option;
    if (option == 'a') {
        double x, y, z = 0;
        cout << "Enter first number , operation , second number (x+y)\n>> ";
        cin >> x >> op >> y;
        if (op == '+')
            z += x + y;
        else if (op == '-')
            z += x - y;
        else if (op == '*')
            z += x * y;
        else if (op == '/')
            z += x / y;
        cout << "Result = " << z << endl;
    } else if (option == 'b') {
        double x, y, z = 1;
        cout << "Square root (z^2=x)\t'a'\nnth Root\t(z^y=x)\t'b'\npower square\t(x^2)\t'c'\nPower nth\t(x^y)\t'd'\n";
        cout << "*Note ('x' first number , 'y' second number , 'z' result, '^' power sign)\n>> ";
        cin >> op;
        if (op == 'a')// sqrt
        {
            cout << "Enter the number of (x) : ";
            cin >> x;
            if (x < 0) {
                cout << "Error!\nPlease, Check the input!";
            }