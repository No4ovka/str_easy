#include "str_easy.h"

int itc_find_str(string str1, string str2) { // 12
    bool test = true;
    char text1 = 'a';
    char text2 = 'a';
    for (int n1 = 0; n1 < itc_len(str1); n1++) {
        if (str1[n1] == str2[0]) {
            test = true;
            if ((itc_len(str1) - (n1 + 1)) >= itc_len(str2) - 1) {
                for (int n2 = 1; n2 < itc_len(str2); n2++) {
                    text1 = str1[n1 + n2];
                    text2 = str2[n2];
                    if (text1 != text2)
                        test = false;
                }
                if (test == true)
                    return n1;
            }
        }
    }
	return -1;
}
