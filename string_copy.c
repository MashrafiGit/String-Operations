#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    // int length = strlen(b);


    // for (int i = 0; i <= length; i++)
    // {
    //     a[i] = b[i];
    // }

    // shortcut for copy an array, first where we wanna copying,2nd which array we wanna copy
    strcpy(a, b);

    printf("%s %s", a, b);


    return 0;
}