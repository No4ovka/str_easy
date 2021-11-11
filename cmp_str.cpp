#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string str3;
    long long m=0, k = 0, schet = 0;
    while (schet<itc_len(str1)){
        if (k<num){
            str3=str3+str1[k];
            k++;
        }
        else if (k>=num){
            if (m<itc_len(str2)){
                str3=str3+str2[m];
                m++;
            }
            else{
                str3=str3+str1[k];
                k++;
            }
        }
        schet++;
    }
    return str3;
}
