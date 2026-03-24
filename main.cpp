#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int *a,N;
  if(argc < 3) return 1;
  N = argc - 2;
  a = new int[N];
  for(int i=0;i<N;i++){
    a[i] = atoi(argv[i+2]);
  }

   display(a,N);

  if(argc>1){
       if(strcmp(argv[1],"bubble")==0) bubbleSort(a,N); 
       else if(strcmp(argv[1],"insertion")==0) insertion(a,N);
       else if(strcmp(argv[1],"selection")==0) selectionSort(a,N);
       display(a,N);
      }
  delete[] a;
 return 0;
}

