#include<stdio.h>
#include<ctype.h>
#include<string.h>
void Stral(char str[])
{
 int i;

 // To replace space by * in sentence
 for(i=0;i<=strlen(str)-1;i++)
 {
 if(str[i]==' ')
  str[i]='*';

 // To change the case of alphabets in sentence
 if(islower(str[i]))
  str[i]=toupper(str[i]);
 else
  str[i]=tolower(str[i]);

 // To replace digits by ? in sentence
 if(isdigit(str[i]))
  str[i]='?';
 }

 printf("\n %s \n",str);
}

int main()
{
 char str[100];
 printf("\n Enter any sentence:-");
 fgets(str,100,stdin);
 Stral(str);
}
