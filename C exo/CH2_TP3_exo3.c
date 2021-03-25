#include <stdio.h>
#include <string.h>
#define Max 200

void lirechaine (char Tab[Max])
{
    int i=0;
    char c;
    c=getchar();
    while((c!='\n') && (i<Max))
    {
        Tab[i++]=c;
        c=getchar();
    }
    Tab[i]='\0';
}

int main()
{
    char Tab[Max];
    int x=0, i, j, k,repete = 0;
    printf("entrez une chaine de caracteres :\n");
    lirechaine(Tab);

    for(i=0; i<strlen(Tab); i++)
    {
        for (j=0; j<strlen(Tab); j++){
        if (Tab[i]==Tab[j])
        x++;
    }

    for(int x = 0;x<i;x++)
    {
        if(Tab[i]==Tab[x])
        repete++;
    }

    if(repete == 0 && Tab[i] != ' ') printf("%d fois la lettre %c\n", x, Tab[i]);
    x=0; repete=0;
    }

getchar();
}
