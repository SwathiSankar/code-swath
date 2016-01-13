#include<stdio.h>
#include<Windows.h>

int main()
{
char p[]="HAPPY PONGAL";
int i;

for(i=0;p[i]!='\0';i++)
{
 printf("%c",p[i]);
 sleep(2);
}

return 0;
}
