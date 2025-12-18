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
             //f(X) = x , y = nth root , b = root of x
            double a, b = 1, r;
            double q = x, q1 = x;
            // q and q1 = number near x accept the root of nth
            // a = b power y
            for (long long int i = 0; i < x; i++, q--, q1++) {
                b = 1;
                for (long long int j = 0; j < x / 3; j++, b++) {
                    a = 1;

                    for (int j = 0; j < 2; j++)// a power y
                    {
                        a *= b;
                    }
                    if (a == q) {
                        break;
                    } else if (a == q1) {
                        break;
                    }
                    }
                if (a == q || a == q1 || a == x) {
                    break;
                }
            }
            // f(x) = x, f(a) = b , a
            // f(x)=f(a)+(x-a)f^(a)
            q = 1;
            x -= a;
            for (int i = 1; i < 2; i++) {
                q *= b;
            }
            r = b + (x * (1 / (2 * q)));
            cout << "Result = " << r << endl;

        } else if (op == 'b')// nth root
        {
            cout << "Enter the number of (x) : ";
            cin >> x;
            cout << "Enter the number of (y) : ";
            cin >> y;
            if (x < 0 || y == 0) {
                cout << "Error!\nPlease, Check the input!";
            }