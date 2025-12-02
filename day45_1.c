#include <stdio.h>
#include <string.h>
int main(){
    char str [200]; 
    int i=0, f=0; 
    char ch;
    printf ("Enter string\n");
    fgets (str, sizeof (str), stdin);
    printf ("Enter character\n"); 
    scanf ("%c", &ch) ;
    while (str[i] != '\0'){
        if (str[i] == ch)
        f++;
        i++;
    }
printf ("%d ", f) ;
return 0;
}