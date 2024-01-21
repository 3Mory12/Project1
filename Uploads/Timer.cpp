#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {

    int start, days = 0, hrs = 0, min = 0, sec = 0;

    cout << "\t\t\t\t\t ******************* " << endl
        << "\t\t\t\t\t *      Timer      * " << endl
        << "\t\t\t\t\t ******************* " << endl;

    cerr << " If You Want To Stop Timer Press { Ctrl C } " << char(3) << endl;
    cout << " Enter \'1\' To Start The Timer : ";
    cin >> start;
    if (start == 1) {
        while (true) {
            system("cls");
            if (sec > 59) {
                sec = 0;
                min++;
            }
            if (min > 59) {
                min = 0;
                hrs++;
            }
            if (hrs > 23) {
                hrs = 0;
                days++;
            }

            cout << "\n\n\n\n\n\n     \t\t\t\t\t" << "Days : Hours : Minutes : Seconds " << endl;

            cout << "\n\t\t\t\t\t\t" << setw(2) << setfill('0') << days << " : "
                << setw(2) << setfill('0') << hrs << " : "
                << setw(2) << setfill('0') << min << " : "
                << setw(2) << setfill('0') << sec << endl;
            Sleep(1000);
            sec++;
        }
    }
    else {
        cout << " You Should Enter 1 To Start The Timer " << endl;
    }
    return 0;
}
