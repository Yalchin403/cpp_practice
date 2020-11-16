#include <iostream>
using namespace std;
// int main() {

//     int num;
//     cout << "Please enter the number: ";
//     cin >> num;

//     int bolen = 1;
//     int max = num + 1;
//     while( bolen != max){
//         if (num % bolen == 0){
//             cout << bolen << " ";
//         }
//         bolen++;
//     }


// }



// int main(){

//     int num;
//     cout << "Enter the number: ";
//     cin >> num;

//     string checker = "sadedir";
//     for (int i = 2; i < num; i++){
//         if (num % i == 0 && num != 1 && num != 3){
//             checker = "sade deyil";
//             break;
//         }
//     }
//     cout << checker;

// }


int main(){

    for(int i = 1; i < 100; i++){
        int count = 0;
        for(int k = 1; k <= i; k++){
            if(i % k == 0){
                    count++;
            }
        }

        if(count <= 2){
            cout << i << " ";
        }
    }

}