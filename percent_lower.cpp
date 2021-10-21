#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
   int kol1=0,kol2=0,i=0;
   char bol1=64,bol2=91,min1=96,min2=123;
   while (str[i]!='\0'){
        if (str[i]>bol1 && str[i]<bol2)
            kol1++;
        else if (str[i]>min1 && str[i]<min2)
            kol2++;
        i++;
   }
   return (100/itc_len(str)*kol1);
}

