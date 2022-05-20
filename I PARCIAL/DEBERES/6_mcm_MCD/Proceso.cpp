#include "Proceso.h"
#include <iostream>
Proceso::Proceso(){
	
}

Proceso::mcm(){
	
}


void  Proceso::mcd(int a, int b) {
    if (b == 0){
    	printf("%d  ",a);
	}else{
		
		mcd(b, a % b);
	}	
    
}
