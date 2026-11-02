#include <stdio.h>
#include <string.h>
#include <stddef.h>
/*void    print_hex_ascii(const char *str)
{
    size_t len = strlen(str);
    size_t i = 0;
    while(i < len)
    {
        printf("'%c' = 0x%02X\n", str[i], (unsigned char)str[i]);
        i++;
    }
}
int main(void)
{
    print_hex_ascii("Hi");
    return 0;
}*/
/*int main(void)
{
    const char *text = "ASCII";
    size_t len =strlen(text);
    size_t i = len;
    while(i > 0)
    {
        putchar(text[i-1]);
        i--;
    }
    putchar('\n');
}*/
int main()
{
    printf("%zu\n",sizeof(size_t));
    printf("%zu\n",sizeof(unsigned char));
    return 0;
}
//const variable's value must not change after it is initialized.
//signed char -128 to 127
//unisgned char 0 to 255
//standard ascii use 0 to 127