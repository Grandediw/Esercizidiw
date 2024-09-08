//
//  main.cpp
//  es2preesame
//
//  Created by Stefano Tonini on 27/12/20.
//

#include <iostream>
using namespace std;

int funzione(int array[],int x,int y){
  
    for (int i=0; i<=16; i++) {
    if (array[i]==x){
        array[i]=y;
    }
   }
    for(int j =0;j<=15;j++){
        cout << array[j] << " ";
        }
        return array[15];
    }



int main() {
    int x,y;
    int Array[16]={3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8};
    cout << "Inserire due numeri: "<<endl;
    cin >> x >> y;
    funzione(Array,x,y);
    return 0;
}
