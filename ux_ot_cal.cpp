
#include <iostream>

using namespace std;

int main()
{
    double workedHours = 0;
    double intendedDays;
    double intendedWorkingHPD;
    double salary = 0;
    double HOUR_RATE = 31.25;
    double FIRST_OT = 1.7;
    double SECOND_OT = 2.0;
    double THIRD_OT = 2.25;
    double FORTH_OT = 2.5;
    cout << "Worked Hours: ";
    cin >> workedHours;
    // cout << "70";
    // workedHours = 70;
    cout << "Intended Days: ";
    cin >> intendedDays;
    cout << "Intended Working Hours Per Day: ";
    cin >> intendedWorkingHPD;
    //************************************************************//
    double totalHours = workedHours + intendedDays * intendedWorkingHPD;
    if (totalHours <= 180)
    {
        salary = totalHours * HOUR_RATE;
    }
    else
    {
        salary += 180 * HOUR_RATE;
        double otHours = totalHours - 180;
        if (otHours != 0)
        {
            if (otHours <= 19 && otHours > 0)
            {
                salary += otHours * FIRST_OT * HOUR_RATE;
                cout << "first stage";
            }
            if (otHours <= 29 && otHours > 19)
            {
                salary += otHours * SECOND_OT * HOUR_RATE;
                cout << "second Stage";
            }
            if (otHours > 29 && otHours <= 39)
            {
                salary += otHours * THIRD_OT * HOUR_RATE;
                cout << "third stage";
            }
            if (otHours > 39)
            {
                salary += otHours * FORTH_OT * HOUR_RATE;
                cout << "forth stage";
            }
        }
    }
    //************************************************************//

    cout
        << endl
        << "total hours: " << totalHours << endl;
    cout
        << "Salary: " << salary << endl;
    return 0;
}
