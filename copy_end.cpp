#include "str_easy.h"

void itc_print_copy_str(string str, int num){
    for (int i=0;i<num;i++)
        cout<<str;
}
void itc_first_end_three(string str){
    int len=itc_len(str);
    if (len>5)
        cout<<str[0]<<str[1]<<str[2]<<str[len-3]<<str[len-2]<<str[len-1];
    else{
    for (int i=0;i<len;i++)
    cout<<str[0];
    }
}
