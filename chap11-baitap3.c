#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	int i;
	for (i = 0; i < 5; i++){
		printf ("\nNhap so thu %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	for (i = 4; i >=0; i--){
		printf ("mang dao nguoc la: ");
		printf ("%d\n", arr[i]);
	}
	return 0;
}
