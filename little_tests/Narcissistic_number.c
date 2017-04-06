
#include <stdio.h>
int main()
{
    int num, sd, td, hd;
    
    for( num = 100 ; num<1000 ;  num++  )
    {
        //获取三位数字num百位上的数字
        hd = num/100         ;
        //获取三位数字num十位上的数字
        td = (num/10)%10         ;
        //获取三位数字num个位上的数字
        sd = num%10         ;

        if( num == hd*hd*hd + td*td*td + sd*sd*sd) 
        {
            printf("水仙花数字：%d\n", num);    
        }
    }
    return 0;    
}
