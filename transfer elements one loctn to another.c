#include<xc.h>
void main(void){
    unsigned int i ;
    int arr1[5] = {0x00 ,0x01 , 0x02 , 0x003 , 0x05};
    int arr2[5] = { };
    for(int i = 0 ; i<5 ; i++){
        arr2[i] = arr1[i] ;
    }
    return ;
}
