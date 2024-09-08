//
//  main.cpp
//  es2.13_blocco2
//
//  Created by Stefano Tonini on 28/12/20.
//

#include <iostream>
using namespace std;

int f(int array[]){
    for(int z = 0; z<=8; z++){
    for(int j=0; j<=8; j++){
        if(array[j]<array[(j+1)]){
            int x = array[(j+1)];
            array[j+1]= array[j];
            array[j]= x;
           
                     
        }
    }
}
    cout << "Numeri in ordine descrescente: ";
    for(int l = 0; l<=9; l++){
        cout << array[l] << " ";
        
    }
        cout << endl;
    return 0;
}

int main() {
    int Array[10];
    cout << "Inserire 10 numeri: ";
    for(int i = 0; i<=9; i++){
        cin >> Array[i];
    }
    f(Array);

    return 0;
}
