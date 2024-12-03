#include<stdio.h>
int main(){
	int row, col;
	printf("nhap so hang: ");
	scanf("%d", &row);
	printf("nhap so cot: ");
	scanf("%d", &col);
	int arr[row][col], numbers[row];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("nhap phan tu arr[%d][%d]", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	int n=0;
	for(int i = 0; i < row; i++){
		numbers[n] = arr[i][i];
		n++;	
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < row - i -1; j++){
			if(numbers[j] > numbers[j+1]){
				int temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < row; i++){
		printf("%d ", numbers[i]);
	}
	return 0;
}
