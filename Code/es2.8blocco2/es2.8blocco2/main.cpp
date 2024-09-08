//
//  main.cpp
//  es2.8blocco2
//
//  Created by Stefano Tonini on 26/01/21.
//

#include <iostream>
using namespace std;

void swap(int array[]){
    for (int j=0; j<10; j++) {
        for (int i=0; i<=9; i++) {
            while(array[i]<array[(i+1)])
                array[i]=array[(i+1)];
        }
    }
    cout << "Il numero più grande e': " << array[0] <<endl;
}

int main() {
    int Array[10];
    cout << "Inserire 10 numeri: " << endl;
    for (int i=0; i<= 9; i++) {
        cin >> Array[i];
    }
   swap(Array);
    
    return 0;
}
