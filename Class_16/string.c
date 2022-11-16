//https://www.programiz.com/c-programming/c-strings

#include <stdio.h>
#include <string.h>
#define N 100// prepared size of sentence
// for dynamic array try malloc - https://cplusplus.com/reference/cstdlib/malloc/

void statistics();
int main()
{
    char sentence[N];
    printf("Enter sentence:\n");
    //scanf("%s", sentence);// problem - scanf takes string only until first space
    //gets(sentence);// warning by compiler - fgets is better to use
    //https://cplusplus.com/reference/cstdio/fgets/
    fgets(sentence,N-1,stdin);

    int n = strlen(sentence);// actual size of sentence (position of first '\0' symbol + 1)
    printf("Your entered sentence is (%d symbols):\n%s\n",n,sentence);

    for(int i=0;i<n;i++)
        {
        //printf("Symbols nr.%02d - %c (ASCII code - %d)\n",i+1,sentence[i],sentence[i]);
        statistics();
        }

    printf("\n");
/*
    for(int i=0;i<N;i++)
        {
        printf("Symbols nr.%02d - %c (ASCII code - %d)\n",i+1,sentence[i],sentence[i]);
        }
*/
    return 0;
}

void statistics()
   {
   ;
   }
