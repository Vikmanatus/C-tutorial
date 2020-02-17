#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char nom_pluriel[20];
    char something[20];

    printf("Enter a color: ");
    scanf("%s", color);
    
    printf("Enter a plural noun: ");
    scanf("%s", nom_pluriel);

    printf("Enter a something: ");
    scanf("%s", something);

    printf("Roses are %s\n", color);

    printf("%s are blue\n", nom_pluriel);
    
    printf("I love %s\n", something);

    return 0;
}
