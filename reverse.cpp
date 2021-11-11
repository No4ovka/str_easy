#include "str_easy.h"

string itc_reverse_str(string str) { 
    string txt = "";
    for (int n = itc_len(str); n > 0; n--) {
        txt += str[n - 1];
    }
    return txt;
}
