#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[80];
	int i, cnt = 0;
	printf ("\nnhap vao dong van ban: ");
	scanf ("%[^\n]s", name);
	for (i = 0; i < 80; i++){
		if (name[i] == 'a' || name[i] == 'A'||name[i] == 'e'||name[i] == 'E'||name[i] == 'i'||name[i] == 'I'||name[i] == 'o'||name[i] == 'O'||name[i] == 'u'||name[i] == 'U')
		cnt +=1;	
		}
	printf ("so ky tu nguyen am trong chuoi van ban la %d", cnt);
	return 0;
}
