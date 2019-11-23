#include<stdio.h>

int main() {
	int arr[5];
	for (int i = 0; i < 5;i++) {
		scanf("%d", &arr[i]);
	}
	for (int i =0; i < 4; i++)
	{
		for (int j = i + 1;j < 5;j++) {
			if (arr[i] > arr[j]) {
				int a;
				a = arr[i];
				arr[i]= arr[j];
				arr[j]= a;
			}
		}

	}
	for  (int i = 0;  i < 5;  i++)
	{
		printf("%d\n", arr[i]);
	}
}