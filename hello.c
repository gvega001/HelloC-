#include<stdio.h>

int main(void)
{
printf("Hello World!\n");  //totally portable
printf("\x48\145\154\154\x6f\x00020\x57\157\x72\x6c\144\41\xa");  //ASCII only
printf("He\154\154\x64\x00020Worl\144!\xa"); //ASCII only

return 0;
}
