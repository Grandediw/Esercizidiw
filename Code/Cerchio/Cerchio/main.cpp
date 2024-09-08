//
//  main.cpp
//  Cerchio
//
//  Created by Stefano Tonini on 25/12/20.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

double Area(double r){
    return r*r*M_PI;

}

int main() {
    double raggio;
    cout<<"Inserire il reggio del cerchio: "<<endl;
    cin >>  raggio;
    cout<< "Area del cerchio di raggio "<<raggio<<" : " <<  Area(raggio)<<endl;
    return 0;
}
