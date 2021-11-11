#include "str_easy.h"

int itc_find_str(string str1, string str2) { // 12
    bool a = true;
    char txt1 = 'a', txt2 = 'a';
    for (int n1 = 0; n1 < itc_len(str1); n1++) {
        if (str1[n1] == str2[0]) {
            a = true;
            if ((itc_len(str1) - (n1 + 1)) >= itc_len(str2) - 1) {
                for (int n2 = 1; n2 < itc_len(str2); n2++) {
                    txt1 = str1[n1 + n2];
                    txt2 = str2[n2];
                    if (txt1 != txt2)
                        a = false;
                }
                if (a == true)
                    return n1;
            }
        }
    }
	return -1;
}
