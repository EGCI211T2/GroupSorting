#include <iostream>
#include <cstring>
using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int *a,N;
  /* Make sure you convert 'a' properly*/ 
  

   display(a,N);

  if(argc>1){
       if(argv[1] =="bubble") bubbleSort(a,N); 
       else /* Complete the rest*/
         //insertion(a,N);
    
      // selectionSort(a,N);
       display(a,N);
      }
 return 0;
}


