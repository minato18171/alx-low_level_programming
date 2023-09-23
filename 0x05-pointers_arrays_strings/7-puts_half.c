#include"main.h"
void puts_half(char *str)
{
int length_of_the_string=0;
int i=0;
int indice=0;
while (str[indice++]){
     length_of_the_string++; 
}
for (i=0;i<=length_of_the_string/2;i++ ){
if(length_of_the_string%2==0){
    _putchar(str[i]);
}else if (length_of_the_string % 2 != 0){
    _putchar(str[(length_of_the_string-1)/2]);
}
}
}
