#include<unistd.h>
#include <stdio.h>
int ft_strlen(char *s)
{
    int i =0;
    while(s[i])
    {
        i= i+1;
    }
    return(i);
}
int main(void)
{
    char *h = "descriptions";
    int e = 0;
    e=ft_strlen(h);
    printf("e =%i",e);

}