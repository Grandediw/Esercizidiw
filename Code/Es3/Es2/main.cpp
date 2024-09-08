//
//  main.cpp
//  Es3
//
//  Created by Stefano Tonini on 31/01/21.
//


#include <iostream>
using namespace std;

struct Complex
{
    double Re;
    double Im;
};

Complex add(Complex c1,Complex c2)
{
    Complex result={0,0};
    result={c1.Re+c2.Re,c1.Im+c2.Im};
    return result;
}

Complex sub(Complex c1, Complex c2)
{
    Complex result={0,0};
    result={c1.Re-c2.Re,c1.Im-c2.Im};
    return result;
}

Complex mul(Complex c1,Complex c2)
{
    Complex result={0,0};
    result={c1.Re*c2.Re-c1.Im*c2.Im,c1.Re*c2.Im+c2.Re*c1.Im};
    return result;
}

int main()
{
    char op;
    double r1, r2, c1, c2;
    cin>>op>>r1>>c1>>r2>>c2;
    Complex N1={r1,c1};
    Complex N2={r2,c2};
    cout<<op<<endl;
    
    if(op=='a')
    {
        Complex result=add(N1,N2);
        cout<<result.Re<<" "<<result.Im<<"i";
    }
    if(op=='s')
    {
        
        Complex result=sub(N1,N2);
        cout<<result.Re<<" "<<result.Im<<"i";
    }
    if(op=='m')
    {
        Complex result= mul(N1,N2);
        cout<<result.Re<<" "<<result.Im<<"i";
    }
    
    // leggere i dati da stdin
    
    // chiamare funzioni add, sub, mul
    
    // stampare risultato su stdout

    return 0;
}
