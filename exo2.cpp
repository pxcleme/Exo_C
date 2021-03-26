#include <stdio.h>

int main ()
{

    int i,n,tmp;

    printf("veillez tapez la dimension du tableau :");
    scanf("%d", &n);
    
    int tab[n];

    for( int i=0; i < n; i++ ) {
        printf("Indiquez le chiffre  %d : ",i+1);
        scanf("%d",&tab[i]);
    }
    
    printf("votre tableau apres trie ");
    
    
     for ( int i = 0 ; i < n - 1; i++ ) {
       for ( int j = 0 ; j < n - i - 1; j++ ) {
         
         if ( tab[j] > tab[j+1] ) {
           tmp      = tab[j];
           tab[j]   = tab[j+1];
           tab[j+1] = tmp;
         }
       }
     }

    
    for(i=0;i<n;i++)
    {
        printf(" \n %d",tab[i]);
        printf("\n");
    }


    return 0;
}
