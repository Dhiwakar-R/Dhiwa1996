#include<stdio.h>
#include<unistd.h>
int main() 
{
char c[] = "HAPPY PONGAL";
int a;
for (a = 0; c[a] != '\0'; a++) 
{
printf("%c", c[a]);
sleep(5);
}
return 0;
}
