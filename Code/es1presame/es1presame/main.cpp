//
//  main.cpp
//  es1presame
//
//  Created by Stefano Tonini on 26/01/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    for (int i=argc-1; i>=1; --i) {
        cout << argv[i] << " " ;
    }
    return 0;
}
