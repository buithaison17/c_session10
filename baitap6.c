#include<stdio.h>

int main() {
    int arr[10] = {0, 1, 3, 2, 6, 7, 9, 8, 5, 4}, n, flag = 0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10 - i -1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("nhap so can tim: ");
	scanf("%d", &n);
	int start = 0, end = 9, mid;
	while(start <= end){
		mid = (start + end) / 2;
		if(arr[mid] > n){
			end = mid -1;
		}
		else if(arr[mid] < n){
			start = mid +1;
		}
		else{
			flag =1;
			break;
		}
	}
	if(flag = 0){
		printf("khong tim thay");
	}
	else{
		printf("phan tu %d co vi tri: %d", n , mid);
	}
	return 0;
}
