#include<stdio.h>
int main(){
	int arr[10] = {2,3,1,2,6,7,5,4,8,2}, index[10], n, flag;
	printf("nhap so can tim: ");
	scanf("%d", &n);
	int j = 0;
	for(int i = 0; i < 10; i++){
		if(n == arr[i]){
			flag = 1;
			index[j] = i;
			j++;
		}
	}
	if(flag == 1){
		printf("phan tu %d co vi tri la: ", n);
		for(int i = 0; i < j; i++){
			printf("%d ", index[i]);
		}	
	}
	else{
		printf("khong tim thay phan tu trong mang");
	}
	return 0;
}
