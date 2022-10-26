/*Give two strings, write a method to decide if one is a permutation of the other*/

#include <stdio.h>
#include <ctype.h>
#define ascii_size 128

int main()
{
    char string1[] = "rac";
    char string2[] = "bar";
    char map[ascii_size] ={0};
    if (sizeof(string1)!=sizeof(string2))
    {
        printf("Sizes don`t match so no permutation.");
        return -1;
    }
    
    for (int i = 0; i < sizeof(string1); i++)
    {
        map[tolower(string1[i])]++;
        /* code */
    }
    for (int i = 0; i < sizeof(string2); i++)
    {
        map[tolower(string1[i])]--;
        /* code */
    }
    int flag = 0;
    for (int i = 0; i < sizeof(map); i++)
    {
        if(map[i]!=0)
        {
            printf("Strings are not a permutation");
            return -1;
        }
        
        /* code */
    }

    printf("Strings are a permutation");

    return 0;
}