#include <stdio.h>
#include <stdbool.h>
int main(){
bool isHeap = true;
bool isHeap2 = true;
int arr[10]={16,14,10,8,7,9,3,2,4,1};
int size=sizeof(arr)/sizeof(arr[0]);
int arr2[9]={10,3,9,7,2,11,5,1,6};
int size2=sizeof(arr2)/sizeof(arr2[0]);	
for(int i = 0 ; i<=((size-2)/2) ; i++){
if(arr[i]<arr[(i*2)+1]){
	isHeap = false;
	}
	if((i*2)+2<size && arr[i]<arr[(i*2)+2]){
		isHeap = false;
	
	}

}
if (isHeap==true){
		printf("The first array is a heap.");
}
else {
		printf("The first array is not a heap.");
}

for(int i = 0 ; i<=((size2-2)/2) ; i++){
if(arr2[i]<arr2[(i*2)+1]){
	isHeap2 = false;
	}
	if((i*2)+2<size2 && arr2[i]<arr2[(i*2)+2]){
		isHeap2 = false;
	}

}
if (isHeap2==true){
		printf("The second array is a heap.");
}
else {
		printf("The second array is not a heap.");
}	
	
	
	
	
	
	
	
	
}