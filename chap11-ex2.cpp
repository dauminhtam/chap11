#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10]; 
	int i, total, max; 
	
	for (i = 0; i < 10; i++){
		printf ("\nNhap gia tri phan tu a[%d]: ", i+1);
		fflush (stdin);
		scanf ("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 10; i++){
		if (arr[i] > max) 
		max = arr[i];
	}
	printf ("\nGia tri max la: %d", max);
	for (i = 0, total = 0; i < 10; i++){
		total +=arr[i];
	}
	printf ("\nTong la: %d", total);
	printf ("\nTrung binh cong la: %d", total/10);
	return 0;
}
