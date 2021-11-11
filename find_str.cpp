#include "str_easy.h"

int itc_find_str(string str1,string str2)
{
    long long lstr1=itc_len(str1);
    long long lstr2=itc_len(str2);
    int k=0;
    for(long long i=0;i<lstr1;i++)
    {

        if(str1[i]==str2[k])
        {
            k=k+1;
            if(k==lstr2)
            {
            return i-k+1;
            }
        }
        else
        {
            k=0;
        }
    }
    return -1;
}
