#include <iostream>
using namespace std;
#include <math.h>

// int my_function(int x, int y){
//     int z;
//     z = x + y;
//     cout << z;
//     return 0;
// }


// void helloWorld(){
//     cout << "Hello World, I'm alive!";
// }

// int sg( int x){
//     x ++;
//     return x;
// }

// int main(){
//     int y;
//     y = sg(5);
//     cout << "y is " << y;
// }

// int func1(int x, int y){
// 	int sum = x + y;
// 	return sum;
// }

// float calc(){

// 	int x, y;
//   float result;
// 	char op;
// 	cin >> op >> x >> y;
// 	switch (op)
// 	{
// 	case '+':
// 		result = x + y;

// 	case '-':
// 		result = x - y;

// 	case '*':
// 		result = x * y;

// 	case '/':
// 		result = x/y;		
// 	}
//   return result;
// }

// int great(){

// 	int x, y;
// 	cin >> x >> y;
// 	if (x > y){
// 		return x;
// 	}
// 	else{
// 		return y;
// 	}
// }

// int func1(float x){
// 	return int(x);
// }

// int prime(int limit){
// 	for(int i = 2; i <=limit; i ++){
// 		int flag = 0;
// 		for (int k = 2; k < i; k++){
// 			if (i % k == 0){
// 				flag = 1;
// 			}
// 		}
// 		if(flag == 0){
// 			cout << i << ' ';
// 		}
// 	}
// 	return 0;
// }

// float area(float w, float h){

// 	float area;
// 	area = w * h;
// 	return area;
// }

// float area_cube(float a){
// 	float area;
// 	area = 6*a*a;
// 	return area;
// }

// float circle_area(float r){

// 	float area;
// 	area = M_PI*r*r;
// 	return area;
// }

int main() {
	float r;
	cout << "Please enter width and height respectively: ";
	cin >> r;
	cout << circle_area(r);
}
