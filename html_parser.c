#include<stdio.h>
#include<string.h>
int parser(char string[]) {
	int i;
	int in=0;
	int index=0;
	for(i=0; i<strlen(string); i++) {
		if(string[i]=='<') {
			in=1;
			continue;
		} else if(string[i]=='>') {
			in=0;
			continue;
		}
		if(in==0) {
			string[index]=string[i];
			index++;
		}
	}
	string[index]='\0';

	while(string[0]==' ') {
		for(i=0; i<strlen(string); i++) {
			string[i] = string[i+1];
		}
	}

	while(string[strlen(string)-1]==' ') {
		string[strlen(string)-1]='\0';
	}
}
int main() 
{
	char string[30];
	strcpy(string,"<a>   hello world     <\a>");
	parser(string);
	printf("the html statement is ~~%s~~",string);
	return 0;
}
