#include "str_easy.h"

string itc_hello_str(string name){
    return ("Hello, " + name);
}

long long itc_len(string str){
    int kol,i=0;
    while (str[i]!='\0'){
        kol++;
        i++;
    }
    return kol;
}
