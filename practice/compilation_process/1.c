/*
1--> Preprocessing -> including header file and macros && and conditional compilation
2--> Compilation -> The compiler takes the expanded text file (.i) and converts it into assembly language code (.s).
3--> assembly -> The assembler translates assembly code mnemonics into raw machine code instructions.
4--> linking -> The linker combines one or more object files along with library code to create a single executable file.
*/
#define MULTIPLY(a, b) a * b

int main(void)
{
    int total = MULTIPLY(2 + 3,4);
    return total;
}
// the Preprocessing is procees of i