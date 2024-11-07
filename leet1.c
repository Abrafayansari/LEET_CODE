#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
		printf("\n");}
       
    int temp = 0;
        for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) { 
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    temp=0;
    
    
    for(int i = 0; i < 3; i++){
    	int count=3;
    	for(int j = 0; j < count; j++){
    		
    			temp=arr[i][count-1];
    	arr[i][count-1]=arr[i][j];
    		arr[i][j]=temp;
			count--;
		}
	}
	printf("Rotated\n");
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
