#include<stdio.h>
#include<stdio.h>

void PerkalianMat(int A[3][3], int B[3][3], int C[3][3])
{
    int a, b, c;
    for (a = 0; a < 3; a++) {
        for (a = 0; b < 3; b++) {
            C[a][b] = 0;
            for (c = 0; c < 3; c++) {
                C[a][b] += A[a][c] * B[c][b]; }
        }
    }
    for(a = 0; a < 3; a++) {
    	for(b = 0; b < 3; b++) {
    		printf("%d\t", C[a][b]);
		}
		printf("\n");
	}
}

void PenjumlahanMat (int A[3][3], int B[3][3], int C[3][3]){
    int a, b;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            C[a][b] = A[a][b] + B[a][b]; }
    }
    
    for(a = 0; a < 3; a++) {
    	for(b = 0; b < 3; b++) {
    		printf("%d\t", C[a][b]);}
		
        printf("\n");
	}
}

void TransposeMat(int A[3][3], int B[3][3]){
    int i, j;
    int AT[3][3], BT[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            AT[j][i] = A[i][j]; }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            BT[j][i] = B[i][j]; }
    }
    printf("Transpose matriks pertama\n");
    for(i = 0; i < 3; i++) {
    	for(j = 0; j < 3; j++) {
    		printf("%d\t", AT[i][j]);}
		printf("\n");
	}
	
	printf("Transpose matriks kedua\n");
	for(i = 0; i < 3; i++) {
    	for(j = 0; j < 3; j++) {
    		printf("%d\t", BT[i][j]);}
		printf("\n");
	}
}

int main(){
	int A[3][3];
	int B[3][3];
	int i, j;
	printf("Masukkan Matriks 1(3 x 3)\n");
    for(i = 0; i < 3; i++) {
    	for(j = 0; j < 3; j++) {
    		scanf("%d", &A[i][j]);
		}
	}
    printf("Masukkan Matriks 2(3 x 3)\n");
    for(i = 0; i < 3; i++) {
    	for(j = 0; j < 3; j++) {
    		scanf("%d", &B[i][j]);
		}
	}

    int C[3][3];
    int AT, BT;
	int choice;
	do{
		printf("1. Perkalian Dua Buah Matrix\n");
		printf("2. Penjumlahan Dua Buah Matrix\n");
		printf("3. Transpose Dua Buah Matrix\n");
		printf("4. Keluar\n");
		printf("Pilihan: ");
		scanf("%d", &choice);
		switch (choice){
	        case 1: PerkalianMat(A, B, C); break;
	        case 2: PenjumlahanMat(A, B, C); break;
	        case 3: TransposeMat(A, B); break;
	        default:
	            printf("Invalid choice\n");
	            break;
		}
    }while(choice>=4);
    return 0;
}
