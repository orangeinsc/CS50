#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string name = get_string();
    printf("%c", toupper(name[0]));
    
    for(int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            printf("%c", toupper(name[i + 1]));
            i++;
        }
    }
    printf("\n");   
}
