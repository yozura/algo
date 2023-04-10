#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char* fri;

    scanf("%d", &n);
   
    fri = new char[n + 1];
    for (int i = 0; i < n; ++i)
    {
        scanf("%c", &fri[i]);
    }

    
    
    return 0;
}

