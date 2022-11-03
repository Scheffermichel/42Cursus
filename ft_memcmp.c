#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str1;
    const char *str2;

    str1 = s1;
    str2 = s2;

    while (*str1 && *str2 && n > 0)
    {
        if (*str1 != *str2)
            break;
        str1++;
        str2++;
        n--;
    }
    return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

int main(void)
{
    char string1[100] = "Michel";
    char string2[100] = "Midhel";

    printf("Comparing: :%d:\n", ft_memcmp(string1, string2, 5));   
    return 0;
}