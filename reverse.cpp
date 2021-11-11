#include "str_easy.h"

string itc_reverse_str(string str){
    long long i = itc_len(str), k=0;
    string rev = "";
    while (k<itc_len(str)){
        rev+=str[i];
        i--;
        k++;
    }
    return rev;
}
