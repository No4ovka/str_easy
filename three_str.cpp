#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3) {
    string txt = "";
    string test = str1;
    int num1 = itc_find_str(str1, str2),num2=0;
    if (num1 == -1)
        return str1;
    for (num2; num2 < num1; num2++) {
        txt+=str1[num2];
    }
    for (num2=0; num2 < itc_len(str2); num2++){
        txt+=str3[num2];
    }
    for (num2=num1+itc_len(str2); num2 < itc_len(str1); num2++){
        txt+=str1[num2];
    }
    return txt;
}
