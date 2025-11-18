#include <stdio.h> 
#include "kupl.h" 
   
 int main() 
 { 
         int num = kupl_get_num_executors(); 
         printf("kupl executor number = %d\n", num); 
         return 0; 
 }