//find occurrence of a specified character in a string
#include <stdio.h>
#include <string.h>
//char *strchr(const char *s, int c);
int main(void)
{
    char tweet[] = "This is my @mention";
    char *mention = strchr(tweet, '@');
    printf("%s\n",strchr(tweet, '@'));
    
    printf("%p\n",mention);
    printf("%p\n",tweet);
    mention[0] = '*';
    printf("%s\n",tweet);
    return 0;
}