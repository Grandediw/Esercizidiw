//
//  main.cpp
//  Array
//
//  Created by Stefano Tonini on 25/12/20.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int Array(int){
    srand((unsigned)time(0));
    int array[10];
    int array2[10];
    int array3[10];
    for (int i=0; i<10; i++) {
        array[i]= rand()%99+1;
        array2[i]= rand()%99+1;
        array3[i]=array[i]*array2[i];
        cout<< array[i]<<"      ";
        cout<< array2[i]<<"      ";
        cout<< array3[i]<<"      ";
        cout<<endl;
            }
    return 0;
}

int main() {
    cout << "Array1 Array2 Array3"<<endl <<"---------------------------"<<endl;
    cout<< Array(1);
    
    return 0;
}
