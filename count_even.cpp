#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){
    int kol,len=itc_len(str);
    for (int i = 0 ; i < 5 ; i++){
        if (str[i]==ch)
            kol++;
    }
    return  kol;
}
string itc_even_place(string str){
    string per;
    int a=0;
    for (int i=2;i < itc_len(str); i+=2){
        per=per+str[i];
    }
    return per;
}
