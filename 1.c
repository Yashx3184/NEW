#include <stdio.h>
#include <stdlib.h>

char str[100],pat[100],rep[100],ans[100];
int a,b,c,d,e,flag=0;

void stringmatch() 
{
	while(str[a]!='\0') {
		if(str[a]!=pat[b]) {
			str[a]=ans[c];
			b++,a++;
		}
	
		else
		printf("Patter string is found and is replaced with the replacement string.");
		ans[c]=pat[b];
		printf("The resultant string is : %s",ans);
			
		
	}
}

int main () {
printf("Enter the strint:\n");
gets(str);
printf("Enter the pattern string:\n");
gets(pat);
printf("Enter the replacement string.\n");
gets(ans);
stringmatch();
}

	
