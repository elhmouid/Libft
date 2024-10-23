#include "libft.h"
#include <ctype.h>

int main(void)
{

    int tab[8] = {1, 2,3,4,4,5,6,7};
    // char str[] = "hello";
    ft_bzero(tab, 3 * 4);
    int j = 0;
    // printf("str : %s\n", str);
    while (j <= 4)
    {
        printf(" tab[%d] = %d\n", j, tab[j]);
        j++;
    }
    return (0);
}