//
//  main.cpp
//  array_inverse
//
//  Created by Stefano Tonini on 30/01/21.
//

#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Inserire lunghezza della stringa: ";
    cin>>x;
    char a[x];
    cout<<"Inserire una stringa: ";
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    cout<<"Stringa al contrario:"<<endl;
    for(int j=x-1;j>=0;j--)
    {
        cout<<a[j];
    }
    cout<<endl;
    return 0;
}
