//
//  main.cpp
//  es1.3blocco1
//
//  Created by Stefano Tonini on 27/01/21.
//

#include <iostream>
using namespace std;
/*
int main(int argc, const char * argv[]) {
    if(argc!=2){
        cout <<"Errore, inserire solamente un numero";
        return -1;
    }
    int lenght = 5;
    int *a = new int [lenght];
    for (int i = 0; i<lenght; i++) {
        a[i]= argv[1][i];
    }
    if(a[0]==a[4]){
        if(a[1]==a[3])
            cout <<"Il numero e' palindormo!" << endl;
        }
        else{
        cout << "Il numero non e' palindromo!" << endl;
        }
    delete[] a;
    return 0;
}
*/
int main(){
int x;
    cout << "Inserire numero: ";
cin >> x;
int a[5];
    a[0] = x/10000;
    a[1] = (x/1000)%10;
    a[3] = (x/10)%10;
    a[4] = x%10;
    if(a[0]==a[4]){
        if(a[1]==a[3])
            cout <<"Il numero e' palindormo!" << endl;
        }
        else{
        cout << "Il numero non e' palindromo!" << endl;
        }
    return 0;
}

