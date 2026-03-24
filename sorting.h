#ifndef SORTING_H
#define SORTING_H

#include <iomanip>
/* function prototype*/


void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        std::cout<<std::setw(5)<<a[i];

	std::cout<<std::endl;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, mi; 
	for(i=0;i<length;i++){
		mi = i;
		for(j=i+1;j<length;j++){
			if(data[j] > data[mi])
				mi = j;
		}
		swap(data[i], data[mi]);
		display(data,length);
		std::cout<<std::endl;
	}
} 



void insertion(int a[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]<key){
			a[j+1] = a[j];
			display(a,n);
			j--;
		}
		a[j+1] = key;
		display(a,n);
		std::cout<<std::endl;
	}
}

void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
for(j=1;j<n;j++){
	for(i=0;i<n-j;i++){
		if(a[i] < a[i+1]){
			swap(a[i], a[i+1]);
		}
		display(a,n);
	}
	std::cout<<std::endl;
}
  
}
#endif




