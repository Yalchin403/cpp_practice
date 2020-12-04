#include <iostream>
using namespace std;


// int main (){
//     int x;
//     cout << "x -in unvani = " << &x ;

// }

// int main(){
//  int x, *y;
//  //x -e her hansi qiymet verek
//  x = 12;
//  //y-e x-in unvanin menimsedek
//  y = &x;
//  //x-in unvanin cap edek
//  cout << "x -in unvani = " << y << "\n";
//  //x -de olan melumati cap edek
//  cout << "x -in qiymeti = " << *y << "\n";
// }

// int main (){
//     int i, x[10], *y;
//     y = x;
//     for(i=0; i<10; ++i)
//     *(y+i) = i;
//     for(i=0; i<10; ++i)
//     cout << *(y+i) << " ";
//     cout << "\n";
//     for(i=0; i<10; ++i)
//         cout << *(x+i) << " ";
//     cout << "\n";
// }

// int main(){
//     int x, y, *z, **q;
//     x = 3;
//     y = 13;
//     z = &x;
//     q = &z;
//     *z = 27;
//     *q = &y;
//     **q = 90;
//     cout << x << ' ' << y;
// }


// int main(){
//     int *x;
//     x = new int;
//     *x = 21;
//     cout << "x = " << x << "\n" << "*x = " << *x;
//     delete x;
//     cout << "\n" << *x;
// }

// int main(){
//     int i, *x;
//     x = new int[10];
//     x[0] = 23;
//     x[1] = 12;
//     x[2] = 34;
//     x[3] = 96;
//     x[4] = 78;

//     for (i = 0; i < 5; i++)
//      cout << "x[" << i << "] = " << x[i] << "\t";
//     delete[] x;
// }

// int main(){

//     int x[5][5], **y;
//     y = x;

// }



//  ************************ Exercises **********************
// int main(){
//     int x;
//     cout << &x;
// }

// int main(){
//     int x, *y;
//     x = 12;
//     y = &x;
//     *y = 21;
//     cout << x << "\t" << &x << "\t" << y;
// }

// int main(){
//     int x, *y;
//     x = 34; y = &x;
//     *y = 21;
//     cout << &x;
//     *y = 88;
//     cout << "\n" << x;
//     cout << "\n" << *y;
// }

// int main(){

//     int x, z, *y;
//     x = 5; z = 15;
//     cout << x << "\t" << z;
//     y = &z;
//     x = *y;
//     cout << "\n" << x << "\t" << z;
// }

// int main(){
//     int x[5], *y, i;
//     for (i = 0; i < 5; i++){
//         cout << "Please enter an integer: ";
//         cin >> x[i];
//     }
        
//     y = x;
//     cout << &x[0] << "\t" << y;
// }

// int main(){
//     int i, x[5], *y;
//     for (i = 0; i < 5; i++){
//         cout << "Please enter an integer: ";
//         cin >> x[i];
//     }
//     y = x;
    
//     for (i = 0; i < 5; i++){
//         cout << "Address is " << (y + i) << " and value is " << *(y + i) << "\n";
//     }
// }


// int main(){

//     int x[5], *y, i;
//      y = x;

//      for (i = 0; i <5; i++){
//          cout << "Please enter an integer: ";
//          cin >> *(y+i);
//      }
//      for (i = 0; i <5; i++){
//          cout << *(y+i) << "\t";
//      }
// }

// int main(){

//     int x[5], *y, i;
//     for (i = 0; i <5; i++){
//         cout << "Please enter an integer: ";
//         cin >> x[i];
//     }
//     for (i = 0; i <5; i++){
//         cout << &x[i] << "\t";
//     }
//     y = x;
//     y++;
//     cout << "\n" << *y;
//     y++;
//     cout << "\n" << y << "\t" << *y << "\t" << &x[2] << "\t" << x[2] << "\n";

//     if (&x[2] == y && *y == x[2])
//         cout << "Addresses and values are identical";
//     else
//         cout << "Addresses and values are not identical";

// }

int main(){
    int x[5], i, *y;
    for (i = 0; i <5; i++){
        cout << "Please enter an integer: ";
        cin >> x[i];
    }
     for (i = 0; i <5; i++){
        cout << &x[i] << "\t" << x[i] << "\n";
    }
    y= x;
    y += 3;
    cout << "\n" << y << "\t" << *y;
    y -= 2;
    cout << "\n" << y << "\t" << *y << "\n";

    if (&x[1] == y && *y == x[1])
        cout << "Addresses and values are identical";
    else
        cout << "Addresses and values are not identical";
}