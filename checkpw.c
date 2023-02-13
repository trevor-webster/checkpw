#include <stdio.h>


int checkpw(char *);
int SCARRY1(char, char);

int main()
{

    char *pw = "password";
    return checkpw(pw);
}

int checkpw(char *in_RCX)
{
    int uVar1;

    if (((((*in_RCX != 'C') || (in_RCX[7] != '#')) || ((char)(in_RCX[2] ^ in_RCX[1]) != 0x40)) ||
         ((in_RCX[1] != 0x73 || (in_RCX[3] < '$')))) ||
        ((SCARRY1(in_RCX[3], '[') || ((in_RCX[4] != '4' || (*(short *)(in_RCX + 5) != 0x5e73))))))
    {
        uVar1 = 1;
    }
    else
    {
        uVar1 = 0;
    }
    return uVar1;
}
int SCARRY1(char a, char b)
{
    return 0;
}