/*
There are three types of types of edits that can be performed on a string : 
1. insert a character
2. remove a character
3. replace a character

Given two strings, write a function to check if they are one edit away

*/

#include <stdio.h>
#include <stdlib.h>

#define ASCII_SIZE 128
int main()
{   
    char string1[] = "bale";
    char string2[] = "pale";

    int map1[ASCII_SIZE];
    int map2[ASCII_SIZE];
    int flag;

    if ( !((sizeof(string1) == sizeof(string2)) || ( abs(sizeof(string1)-sizeof(string2)) == 1 )))
    {
        printf("Strings can`t be one edit away");
    }
    for (int i = 0; i < sizeof(string1); i++)
    {
        map1[string1[i]]++;
    }
    for (int i = 0; i < sizeof(string2); i++)
    {
        map2[string1[i]]++;
    }
    for (int i = 0; i < ASCII_SIZE; i++)
    {
        if (map1[i]!=map2[i])
        {
            flag++;
        }
        if(flag>1)
        {
            printf("Strings are not one match away");
            return -1;
        }
    }
    if (flag==1)
    {
        printf("Strings are one match away");
    }else
    {
        printf("Strings are not one match away");
    }
    
    
    
    


    return 0;
}