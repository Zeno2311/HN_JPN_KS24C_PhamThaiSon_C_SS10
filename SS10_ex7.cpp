#include <stdio.h>

int main(){
	int n,m,check;
	printf("Ban muon nhap bao nhieu phan tu chua trong mang\n");
	printf("Moi ban nhap so hang : ");
	scanf("%d",&n);
	printf("Moi ban nhap so cot : ");
	scanf("%d",&m);
	// gan n,m lan luot la hang va cot cua mang
	int arr[n][m];
	// nhap gia tri cua tung phan tu co trong mang
	printf("Moi ban nhap phan tu cua mang :\n");
	for( int i = 0; i < n; i++ ){
		for( int j = 0; j < m; j++ ){
			printf("Nhap phan tu cua %d :",i);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	// in ra mang vua nhap phan tu 
	printf("Mang sau khi nhap hoan thien\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%2d",arr[i][j]);
		}
		printf("\n");
	}
	// sap xep theo thu tu tang dan bang thuat toan noi bot
	for( int a = 0; a < n; a++ ){
		for( int b = 0; b < m; b++ ){
			for( int i = 0; i < n; i++ ){
				for( int j = 0; j < m - 1; j++ ){
					if( arr[i][j] > arr[i][j + 1] ){
						// hoan doi
						int check = arr[i][j];
						arr[i][j] = arr[i][j +1];
						arr[i][j +1] = check;
					}
				}
			}
		}
	}
	// sau khi mang da duoc sap xep hoan thien
	printf("\nMang sau khi duoc sap xep hoan thien\n");
	for(int i = 0; i < n; i++){
		for(int j =0; j < m; j++){
			printf("%2d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
