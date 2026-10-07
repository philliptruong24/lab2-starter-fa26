#include <stdio.h>

int contains(int item, int arr[], int size){
	int result = 0;

	for(int i = 0; i < size; i++){

		if(arr[i] == item){

			result = 1;
			break;

		}

	}

	return result;

}

int main(){

	int arr[] = {2,9,2,0,2,5};

	printf("result: %d\n", contains( 7, arr, 6));


}
