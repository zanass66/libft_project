#include <stdio.h>
void print_first_byte(const void *source)
{
    const unsigned char *byte_ptr = (const unsigned char *)source;
    printf("Byte value: 0x%02X\n", *byte_ptr);
}
int main(void)
{
    char buffer[] = "hekko";
    print_first_byte(buffer);
}