//
//  main.cpp
//  es1preesame
//
//  Created by Stefano Tonini on 28/12/20.
//

#include <iostream>
using namespace std;


int f(int array[]){
    for(int i=9; i>=0; i--){
        cout << array[i] <<" ";
    }
    return 0;
}

int main() {
    int array[10];
    cout << "Inserire 10 numeri: " << endl;
    for(int j=0;j<=9;j++){
        cin >> array[j];
    }
    f(array);
    return 0;
}
