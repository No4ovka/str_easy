#include "str_easy.h"

int itc_max_char_on_end(string str){
    int kol=0,num=0;
    for (int k = 0; k < itc_len(str); k++){
        if (str[k] > 47 && str[k] < 58)
            kol++;
        else
            kol=0;
        if (kol>num)
            num=kol;
    }
    return num;
}
