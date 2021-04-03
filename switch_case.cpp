#include <iostream>
using namespace std;
#include <math.h>
// int main(){

//     int n_th_day;
//     cout << "Please enter day of the week: ";
//     cin >> n_th_day;
//     switch (n_th_day)
//     {
//     case 1:
//         cout << "Monday";
//         break;

//     case 2:
//         cout << "Tuesday";
//         break;

//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;

//     case 5:
//         cout << "Friday";
//         break;

//     case 6:
//         cout << "Saturday";
//         break;

//     case 7:
//         cout << "Sunday";
//         break;

//     default:
//         cout << "Wrong entry!";
//         break;
//     }
// }

int main(){
    int day;
    day = 1;
    while (day != 0){
        cout << "Enter the day of month: ";
        cin >> day;

        int reminder;
        double n_th_week;
        reminder = day % 7;
        n_th_week = (day / 7.0);
        n_th_week = ceil(n_th_week);

        switch (reminder)
        {
        case 0:
            cout << "Sunday" << " => " << n_th_week << "\n";
            break;

        case 1:
            cout << "Monday" << " => " << n_th_week << "\n";
            break;

        case 2:
            cout << "Tuesday" << " => " << n_th_week << "\n";
            break;
        
        case 3:
            cout << "Wednesday" << " => " << n_th_week << "\n";
            break;

        case 4:
            cout << "Thursday" << " => " << n_th_week << "\n";
            break;

        case 5:
            cout << "Friday" << " => " << n_th_week << "\n";
            break;
        case 6:
            cout << "Saturday" << " => " << n_th_week << "\n";
            break;

        default:
            break;
        }
    }
}