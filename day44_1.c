#include <stdio.h>
#include <string.h>
int main (){
char str[200], cleaned [200];
int i=0, sp=0, digit=0, spaces=0;
printf ("Enter string\n"); 
fgets (str, sizeof(str), stdin);
while (str[i] != "10"){
    if (str[i] >= '0' && str[i] <= '9'){
        digit++;
    }
    else if (str[i] == ' '){
        spaces++;
    }
    else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
//ignore alphabets
    }
    else if (str[i] != 'In'){//ignore newline from fgets
        sp++;
    }
    i++;
}
printf ("Spaces = %d\n", spaces) ;
printf ("Digits = %d\n",digit);
printf ("Special characters = %d\n", sp);
return 0;
}