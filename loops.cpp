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


// int main(){

//     for(int i = 1; i < 100; i++){
//         int count = 0;
//         for(int k = 1; k <= i; k++){
//             if(i % k == 0){
//                     count++;
//             }
//         }

//         if(count <= 2){
//             cout << i << " ";
//         }
//     }

// }



// int main(){
//     int num1, num2, num3;
//     cout << "Please enter three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     for (int i = num1; i < num2; i++){

//         int result = i * num3;
//         cout << result << " ";

//     }

// }


// int main(){

//     int sum = 0;
    
//     for (int i = 1; i < 101; i++){

//         sum += i;
//     }
//     double average = sum/100;
//     cout << "sum is " << sum << " and average is " << average; 
// }

// int main(){

//     double sum = 0;
//     for (int i = 1; i < 50; i++){

//         sum += 1.0/i;
//     }

//     cout << sum;
// }

// int main(){

//     int a, b, c;
//     a = 0;
//     b = 1;
//     int n;  //n sequence
//     cout << "Please enter the number of sequence: ";
//     cin >> n;
//     for( int i = 0; i < n; i++){
//         if (i == 0){
//             cout << 0 << " " << 1 << " ";
//         }
//         c = a + b;
//         a = b;
//         b = c;

//         cout << c << " ";

//     }
// }


// int main(){
//     int num;
//     cout << "Please enter the num: ";
//     cin >> num;

//     for (int i = 1; i <= 10; i++){

//         int result = i * num;

//         cout << i << " * " << num << " = " << result << '\n';

//     }
// }

// int main(){

//     int num1, num2;
//     cout << "Please enter smaller number: ";
//     cin >> num1;
//     cout << "Please enter greater number: ";
//     cin >> num2;
//     if (num1 >= num2){
//         cout << "Oops.. Wrong entry, be carefull about inputs!";
//     }

//     else{
        
//         for (int i = num1; i <= num2; i++){

//             cout << i << " ";
//         }
//     }
// }

// int main(){
//     int num1, num2;
//         cout << "Please enter smaller number: ";
//         cin >> num1;
//         cout << "Please enter greater number: ";
//         cin >> num2;
//         if (num1 <= num2){
//             for (int i = num1; i <= num2; i++){

//                 cout << i << " ";
//             }
//         }

//         else{
            
//             for (int i = num1; i >= num2; i--){
//                 cout << i << " ";
//             }
//         }
// }
