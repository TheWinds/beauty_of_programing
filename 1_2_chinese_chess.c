#include <stdio.h>
/**
 * 这题就是一个普通的遍历问题,
 * 主要的限制是一个字节,如果是一个字节的话利用C语言位域这个特性很容易简洁的解决问题,
 * 不过能接触到位域,涉及到一些高性能的开发,例如操作系统。
 * 前些天PA实验的时候接触过位域,就不难理解了。
 **/
struct
{
    unsigned char a : 4;
    unsigned char b : 4;
} x;

void main()
{
    for (x.a = 1; x.a <=9; x.a++)
    {
        for (x.b = 1; x.b <= 9; x.b++)
        {
            if (x.a%3!=x.b%3){
                printf("A=%d,B=%d ",x.a,x.b);
            }
        }
        printf("\n");
    }
}