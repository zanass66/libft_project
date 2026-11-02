/*Standard ASCII uses 7 bits for each character. Because 7 bits can hold 
2 values, standard ASCII defines 128 unique codes, from 0 to 127: */
#include <stdio.h>
/*int main(void)
{
    char letter = 'A';
    printf("Character: %c\n", letter);
    printf("ascii code: %d\n", letter);
    return 0;
}*/
/*int main(void)
{
    char lower = 'b';
    char upper = lower - ('a' - 'A');//32
    printf("Lowercase: %c\n", lower);
    printf("uppercase: %c\n", upper);
}*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int main(void)
{
    char arr[] = "hELLO";
    size_t len = ft_strlen(arr);
    size_t memory = sizeof(word);
    printf("Lenght: %zu\n",len);
    printf("Memory: %zu bytes\n",Memory);
    return (0);
}