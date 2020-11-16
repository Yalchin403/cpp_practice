#include <iostream>
using namespace std;
int main() {

    int num;
    cout << "Please enter the number: ";
    cin >> num;

    int bolen = 1;
    int max = num + 1;
    while( bolen != max){
        if (num % bolen == 0){
            cout << bolen << " ";
        }
        bolen++;
    }


}