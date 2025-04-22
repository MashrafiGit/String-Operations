#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s", a, b);

    // int length_a = strlen(a);
    // int length_b = strlen(b);

 
    // for (int i = 0; i <= length_b; i++)
    // {
    //     a[i+length_a] = b[i];
    // }


    // using built in function
    // shortcut for copy an array, first where we wanna copying,2nd which array we wanna copy
    strcat(a, b);


    printf("%s %s", a, b);

    return 0;
}