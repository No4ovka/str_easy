#include "str_easy.h"

string itc_cmp_str(string str1,string str2, int num)
{
    string neww="";
    long long lstr2=itc_len(str2);
    long long lstr1=itc_len(str1);
    if (lstr1 < num || num < 0) return str1;
    if(str2=="")
    {
        return(str1);
    }
    for(long long i=0;i<lstr1;i++)
    {
        if (i<num ) {
            neww+=str1[i];
        }else if (i > (num+lstr2-1)) {
            neww+=str1[i-lstr2];
        }
        else {
            neww+=str2[i-num];
        }
    }
    return neww;
}
