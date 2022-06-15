#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x[7][12];
	char y[12];
	int i,j; 
	for (i = 0; i < 7; i++){
		printf ("\nNhap chuoi thu %d: ", i+1);
		scanf ("%s", x[i]);
	}
	for (i = 0; i < 7; i++){
		for (j = i + 1; j < 7; j++){
			if (strcmp (x[j-1], x[j]) > 0){
				strcpy (y, x[j-1]);
				strcpy (x[j - 1], x[j]);
				strcpy (x[j], y);
			}
		}
	}
	for ( i = 0; i < 7; i++){
		printf ("%s\n", x[i]);
	}
	return 0;
}
