//ex 1.1 from CTCI
/*Implement an algorithm to determine if a string
has all unique characters. What if you cannot use additionl DS?*/
#include <stdio.h>
#include <ctype.h>
#define ascii_size 128

int main()
{
    char string[] = "MesajjUnique";
    char map[ascii_size] ={0};
    
    for (int i = 0; i < sizeof(string); i++)
    {   
        map[tolower(string[i])]++;
        if (map[tolower(string[i])]>1)
        {
            printf("Character not unique: %c \n",string[i]);
            break;
        }
        
    }
    
    return 0;
}