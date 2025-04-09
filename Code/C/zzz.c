#include <stdio.h>

int main(){
	int arr[5] = {};
	int n = 0;
	for(int k = 0; k < 5; k++){
	scanf("%d", &arr[k]);
	}
	for(int i =0; i < arr[5]; i++)
	{
		for(int j = 0; j < i; j++){

		if(arr[i] > arr[j])
		{
			arr[i] = n;
		    arr[i] = arr[j];
			arr[j] = n;
		}
		}
	}
	for(int z = 0; z < arr[5]; z++)
	{
		printf("%d입니다 \r\n", arr[z]);
	}
	return 0;
}
