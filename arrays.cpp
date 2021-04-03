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

    // int arr[5];
    // for (int i = 0; i < 5; i++){

    //     cout << "Please enter the number: ";
    //     cin >> arr[i];
    // }
    // int max =arr[0];
    // int max_index;
    // for (int i = 0; i < 5; i ++){
    //     if (arr[i] > max){

    //         max = arr[i];
    //         max_index = i;
    //     }
        
    // }

    // if(max_index != 4){

    //         int copy;
    //         copy = arr[4];
    //         arr[4] = max;
    //         arr[max_index] = copy;
    //     }

    // for (int i = 0; i < 5; i++){

    //     cout << arr[i] << " ";

    // }
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




//    *******       Exercises        *********


// int main(){

//    int arr[10], count = 0;

//    for ( int i = 0; i < 10; i++){
//        cout << "Please enter an integer: ";
//        cin >> arr[i];
//    }
//    for ( int i = 0; i < 10; i++){
//        if ( arr[i] > 10){
//            count++;
//        }
//    }
//    cout << "Here are " << count << " numbers in the array that are greater than ten.";

// }


// int main(){
//     int x, arr[10], flag = 0;
//     cout << "Please enter x: ";
//     cin >> x;
//     for (int i = 0; i < 10; i++){
//         cout << "Please enter an integer: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 10; i++){
//         if (arr[i] == x){
//             flag = 1;
//         }
//     }
//     if (flag == 1){
//         cout << "Yes, x is in the array that you've provided.";
//     }
//     else
//     {
//         cout << "No, x is not in the array that you've provided.";
//     }
    
// }


// int main(){
//     int arr[10];
//     for(int i = 0; i < 10; i++){
//         cout << "Please enter the number: ";
//         cin >> arr[i];
//     }

//     int max = arr[0];
//     int max_index = 0;
//     for(int i = 0; i < 10; i++){

//         if( arr[i] > max){

//             max = arr[i];
//             max_index = i; 
//         }
//     }
//     cout << "Maximum number in the provided array is " << max << " and its index is " << max_index;
// }

// int main(){

//     int arr[5], x, arr1[5], count = 0, flag = 0, index = 0;

//     cout << "Please enter x: ";
//     cin >> x;

//     for (int i = 0; i < 5; i++){

//         cout << "Please enter an integer: ";
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++){
//         if ( x == arr[i]){
//             flag = 1;
//             break;
//         }
//     }

//     if( flag == 1){

//         for (int i = 0; i < 5; i++){
//                 if (arr[i] != x){
//                     arr1[index] = arr[i];
//                     index++;

//                 }
//                 else{
//                     count++;
//                 }
//         }
//         for (int i = 5 - count; i < 5; i++){

//             arr1[i] = 0;
//         }
//     }
//     else{
//         cout << "X is not in the array that you've provided";
//     }

//     for (int i = 0; i < 5; i++){
//         cout << arr1[i] << " ";
//     }
    
// }

// int main(){

//     int c[20], b[10], d[10];
//     for (int i = 0; i < 10; i ++){
//         cout << "Please enter an integer for b[" << i << "]";
//         cin >> b[i];

//     }
//     for (int i = 0; i < 10; i ++){
//         cout << "Please enter an integer for d[" << i << "]";
//         cin >> d[i];

//     }

//     for (int i = 0; i < 20; i++){

//         if (i < 10){

//             c[i] = b[i];
//         }
//         else{

//             c[i] = d[i - 10];
//         }
//     }
//     for (int i = 0; i < 20; i ++){
//         cout << c[i] << " ";
//     }
// }

// int main(){
//     int arr[5][5];
//     for (int i = 0; i < 5; i ++){

//         for (int k = 0; k < 5; k ++){
//             cout << "Please enter an integer for arr[" << i << "][" << k <<"]";
//             cin >> arr[i][k]; 
//         }
//     }

//     for (int i = 0; i < 5; i ++){

//         for (int k = 0; k < 5; k ++){
//             arr[i][k] ++;
//             cout << arr[i][k] << " "; 
//         }
//     }
// }


//  transform [7][6] => [14][3]
// int main(){
//     int arr[7][6], arr1[14][3], count, index = 0;
//     for (int i = 0; i < 7; i++){
//         for(int k = 0; k < 6; k++){
//             cout << "Please enter an integer for arr[" << i << "][" << k << "]: ";
//             cin >> arr[i][k];
//         }
//     }
//     for (int i = 0; i < 7; i++){
//             for(int k = 0; k < 6; k++){
//                 cout << arr[i][k] << " ";
//             }
//             cout << "\n";
//         }


//     for (int i = 0; i < 14; i++){

//         if (i % 2 == 0 and i != 0){
//             index ++;
//         }
//         for(int k = 0; k < 3; k++){
//             if (i % 2 != 0){
//                 arr1[i][k] = arr[index][k+3];
//             }
//             else{
//                 arr1[i][k] = arr[index][k];
//             }
            
//         }
//     }

//     for (int i = 0; i < 14; i++){
//             for(int k = 0; k < 3; k++){
//                 cout << arr1[i][k];
//             }
//             cout << "\n";
//         }

// }

// #include <iostream>
// using namespace std;

// int main() {
//    int a[10][10], transpose[10][10], row, column, i, j;

//    cout << "Enter rows and columns of matrix: ";
//    cin >> row >> column;

//    cout << "\nEnter elements of matrix: " << endl;

//    // Storing matrix elements
//    for (int i = 0; i < row; ++i) {
//       for (int j = 0; j < column; ++j) {
//          cout << "Enter element a" << i + 1 << j + 1 << ": ";
//          cin >> a[i][j];
//       }
//    }

//    // Printing the a matrix
//    cout << "\nEntered Matrix: " << endl;
//    for (int i = 0; i < row; ++i) {
//       for (int j = 0; j < column; ++j) {
//          cout << " " << a[i][j];
//          if (j == column - 1)
//             cout << endl << endl;
//       }
//    }

//    // Computing transpose of the matrix
//    for (int i = 0; i < row; ++i)
//       for (int j = 0; j < column; ++j) {
//          transpose[j][i] = a[i][j];
//       }

//    // Printing the transpose
//    cout << "\nTranspose of Matrix: " << endl;
//    for (int i = 0; i < column; ++i)
//       for (int j = 0; j < row; ++j) {
//          cout << " " << transpose[i][j];
//          if (j == row - 1)
//             cout << endl << endl;
//       }

//    return 0;
// }


// **** switch elements of an array n times ****

// int main(){
//     int arr[5], n, copy[5], mem;
//     for (int i = 0; i < 5; i ++){
//         cout << "Please enter an integer: ";
//         cin >> arr[i];
//     }
//     cout << "Please enter how much you want to switch: ";
//     cin >> n;

//     for (int i = 0; i < 5; i ++){
//         copy[i] = arr[(n + i)];
//         if ( (n+i) == 4){
//             mem = i + 1;
//             break;
//         }
//     }

//     for (int i = 0; i < n; i ++){
//         copy[mem] = arr[i];
//         mem++;
//     }
//     for (int i = 0; i < 5; i ++){
//         cout << copy[i] << " ";
//     }
// }


// int main(){
//     int arr[5], x;
//     cout << "Please enter x: ";
//     cin >> x;
//     for (int i = 0; i < 5; i++){
//         cout << "Please enter an integer: ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++){
//         if (x == arr[i]){
//             cout << i << " ";
//         }
//     }
// }

// int main(){
//     int arr[5], x, copy, arr1[5], index = 0, replace = 4;
//     cout << "Please enter value for x: ";
//     cin >> x;
//     for (int i = 0; i < 5; i++){
//         cout << "Please enter an integer: ";
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++){
//         if (arr[i]==x){
//             arr1[index] = i;
//             index ++;
//         }
//     }


//     for (int i = 0; i < index; i++){
//         copy = arr[replace];
//         arr[replace] = arr[arr1[i]];
//         arr[arr1[i]] = copy;
//         replace = replace - 1;
//     }

//     for ( int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }

//     }

// int main(){
//     int arr[5][4], memo[4];
//     for (int i = 0; i < 5; i++){
//         for (int k = 0; k < 4; k ++){
//             cout << "Please enter an integer: ";
//             cin >> arr[i][k];
//         }
//     }
//     cout << "Original Array:\n";
//     for (int i = 0; i < 5; i++){
//         for (int k = 0; k < 4; k ++){
//             cout << arr[i][k] << ' ';
//         }
//         cout << "\n";
//     }

//     for (int i = 0; i < 5; i++){
//         for (int k = 0; k < 4; k ++){
//             if (i == 1){
//                 memo[k] = arr[i][k];
//                 arr[i][k] = arr[3][k];
//                 arr[3][k] = memo[k];
//             }
//         }
//     }


//     cout << "Modified Array:\n";
//     for (int i = 0; i < 5; i++){
//         for (int k = 0; k < 4; k ++){
//             cout << arr[i][k] << ' ';
//         }
//         cout << "\n";
//     }
// }