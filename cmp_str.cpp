#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string str3;
    int m=0;
    for (int k=0;k<itc_len(str1);k++){
        if (k<num)
            str3=str3+str1[k];
        else if (k>=num){
            if (m<itc_len(str2)){
                str3=str3+str2[m];
                m++;
            }
            else
                str3=str3+str1[k];
        }
    }
    return str3;
}
