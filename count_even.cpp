#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){
    long long kol=0,len=itc_len(str);
    for (int i = 0 ; i < len ; i++){
        if (str[i]==ch)
            kol++;
    }
    return  kol;
}

string itc_even_place(string str){
    if (itc_len(str) <= 1) {
		return "-1";
    }
    string per = "";
    long long a=0;
    for (int i=1;i < itc_len(str); i+=2){
        per=per+str[i];
    }
    return per;
}
