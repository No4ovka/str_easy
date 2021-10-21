#include "str_easy.h"

bool itc_equal_reverse(string str){
    if (str==itc_reverse_str(str))
        return true;
    return false;
}
