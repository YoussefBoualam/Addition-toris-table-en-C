#include <stdio.h>
#include <stdlib.h>
void saisie(int tab[],int N)
     { int i;
       for (i=0;i<=N-1;i++)
       {printf("entrer element N° %d \n\t ",i+1);
       scanf("%d",&tab[i]);
       }
     } 
void affichage(int tab[],int N)
     { int i;
     for (i=0;i<=N-1;i++)
      printf("%d \t ",tab[i]);
      }
void addition(int tab1[],int tab2[],int tab3[],int N)
     { int i;
     for(i=0;i<=N-1;i++)
     { tab3[i]=tab1[i]+tab2[i];
     }
      }
       main()
{
  int tab1[4],tab2[4],tab3[4];
  saisie(tab1,4);
  affichage(tab1,4);
  printf("\n-------------------------------------------\n");
  saisie(tab2,4);
  affichage(tab2,4);
  printf("\n-------------------------------------------\n");
  addition(tab1,tab2,tab3,4);
  affichage(tab3,4);
    printf("\n-------------------------------------------\n");
  
  
  system("PAUSE");	
  return 0;
}
