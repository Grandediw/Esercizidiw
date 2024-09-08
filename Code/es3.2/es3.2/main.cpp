//
//  main.cpp
//  es3.2
//
//  Created by Stefano Tonini on 26/12/20.
//

#include <iostream>
using namespace std;

double Ipotenusa(double cateto1, double cateto2){
    double ipotenusa;
    ipotenusa= sqrt(pow(cateto1,2.0)+pow(cateto2,2.0));
    return ipotenusa;
}

int main() {
    double cateto1,cateto2;
    cout << "Inserire due cateti: "<<endl;
    cin >> cateto1 >> cateto2;
    cout <<"Ipotenusa= " << Ipotenusa(cateto1,cateto2)<<endl;
    return 0;
}
