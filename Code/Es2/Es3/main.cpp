//
//  main.cpp
//  Es2
//
//  Created by Stefano Tonini on 31/01/21.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void longerWord(char sentence[],int length)
{
    int Ncaratteri=0;
    int max=-1;
    int indice=-1;
  
    for(int j=0;j<length;j++)
    {
        if(int(sentence[j])==32)
        {
            Ncaratteri=1;
        }
        if(sentence[j]!='\0')
        {
            Ncaratteri++;
            indice=j;
            if(max<Ncaratteri)
            {
                max=Ncaratteri;
            }
        }
        
    }
    for(int j=indice-Ncaratteri;j<max;j++)
    {
        cout<<sentence[j];
    }
    cout<<" "<<Ncaratteri<<endl;
}

int main()
{
    string line;
    int length = -1;
    
    // leggi frase da stdin in stringa
    getline(cin, line);
    
    // copia stringa da variabile di tipo string a variabile di tipo char*
    char *cstr = new char[line.length() + 1];
    length = line.length();
    strcpy(cstr, line.c_str());
//    char *strtok(char *cstr,const char *delimiters);
   

    

    
   longerWord(cstr, length);
//    Arraymax(cstr,length);
  //  cout<<word<<" "<<length;
    return 0;
}
