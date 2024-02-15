#include <stdio.h>
#include <string.h>

void convert(char *s)
{
    int i;
    for(i=0;i<15;i++)
   {
        if(s[i]>=65&&s[i]<=90)
       {
        s[i]=s[i]+32;
       }
        else if(s[i]>=97&&s[i]<=122)
       {
        s[i]=s[i]-32;
       }
   }
}


int main () {
	char s [100];
	
	printf ("masukan kalimat : \n");
	gets(s);
	strrev (s);
	
	convert(s);
	
	printf ("kalimat yang di balik :\n%s\n",s);
}
