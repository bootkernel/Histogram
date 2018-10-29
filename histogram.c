#include <stdio.h>

int main(){
int ch;
	
while((ch = getchar()) != EOF) {
if(ch == ' ' || ch == '\n' || ch == '\t')
	putchar('\n');
else
	putchar('*');
}
return 0;
}
