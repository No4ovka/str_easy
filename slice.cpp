#include "str_easy.h"

string itc_slice_str(string str, int start, int end){
    string strok="";                //�� ����� ����� �� �������,����� ������������ �����
    while (start<itc_len(str)){
        if (start<=end)
            strok+=str[start];
        else if (start>end)
            return strok;
        start++;
    }
    return strok;
}
