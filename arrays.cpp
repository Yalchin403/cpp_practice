#include <iostream>
using namespace std;

// int main(){
//     int arr[2];

//     for (int i = 0; i < 2; i ++){
//         cout << "Please enter " << i << "th number: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 2; i ++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){

//     int arr[7], member, index, flag = 0;

//     for (int i = 0; i < 7; i ++){

//         cout << "Please enter the number: ";
//         cin >> arr[i];
//     }

//     cout << "Please enter the array member that you want to find out index of: ";
//     cin >> member;

//     for (int i = 0; i < 7; i ++){

//         if (arr[i] == member){

//             index = i;
//             flag = 1;
//             break;

//         }
//     }
//     switch (flag)
//     {
//     case 0:
//         cout << "Sorry this is not the right place that you should be looking for this member...";
//         break;
    
//     case 1:
//         cout << "Index is " << index;
//     }
// }


// int main(){

//     // arr [1 2 3 4] => 4 1 2 3
//     int arr[5];
//     for (int i = 0; i < 5; i ++){

//         cout << "Please enter the number: ";
//         cin >> arr[i];
//     }

//     cout << "before => ";
//     for (int i = 0; i < 5; i ++){

//         cout << arr[i] << " ";
//     }

//     int copy = arr[4];
//     for (int i = 4; i > 0; i --){
//         arr[i] = arr[i - 1];
//     }

//     arr[0] = copy;

//     cout << "after => ";
//     for (int i = 0; i < 5; i ++){

//         cout << arr[i] << " ";
//     }
// }

// int main(){

//     int arr[6]; //= 2, 34, 67, 892, 0, 31;

//     for (int i = 0; i < 6; i ++){

//         cout << "Please enter number: ";
//         cin >> arr[i];
//     }

//     int max = arr[0];

//     for (int k = 0; k < 6; k ++){

//         if (max < arr[k]){
//             max = arr[k];
//         }
//     }
//     cout << "Max number in the provided array is " << max;
// }

// int main(){
//     int arr[5];
//     for(int i = 0; i < 5; i++){
//         cout << "Please enter the number: ";
//         cin >> arr[i];
//     }

//     int max = arr[0];
//     int max_index = 0;
//     for(int i = 0; i < 5; i++){

//         if( arr[i] > max){

//             max = arr[i];
//             max_index = i; 
//         }
//     }
//     cout << "Maximum number in the provided array is " << max << " and its index is " << max_index;
// }

// int main(){

//     int arr[5];
//     for (int i = 0; i < 5; i++){

//         cout << "Please enter the number: ";
//         cin >> arr[i];
//     }
//     int max =arr[0];
//     int max_index;
//     for (int i = 0; i < 5; i ++){
//         if (arr[i] > max){

//             max = arr[i];
//             max_index = i;
//         }
        
//     }

//     if(max_index != 4){

//             int copy;
//             copy = arr[4];
//             arr[4] = max;
//             arr[max_index] = copy;
//         }

//     for (int i = 0; i < 5; i++){

//         cout << arr[i] << " ";

//     }
// }


// int main(){

//     int arr[5];
//     for (int i = 0; i < 5; i++){
//         cout << "Please enter a number: ";
//         cin >> arr[i];
//     }

//     for(int i = 0; i < 5; i ++){

//         for(int k = 0; k < 5; k++){

//             if (arr[i] < arr[k]){
//                 int copy;
//                 copy = arr[i];
//                 arr[i] = arr[k];
//                 arr[k] = copy;
//             }
//         }
//     }

//     for(int i = 0; i < 5; i++){

//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[2][3];
//     int max = arr[0][0];
//     for (int i = 0; i < 2; i++){

//         for (int j = 0; j < 3; j++){
//             cout << "Please enter a number: ";
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < 2; i++){

//         for (int j = 0; j < 3; j++){
//             if (arr[i][j] > max){
//                 max = arr[i][j];
//             }

//         }
//     }

//     cout << max;        
// }