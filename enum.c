#include <stdio.h>

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
const int PRECIO = 1u; //unsigned

int main()
{
	
    enum weekDays today;
    today = Wednesday;
    printf("Day %d \n", today+PRECIO);
    
    int n;
    int i;
    for(i = 0;i<10;i++){
    	continue;
    	printf("Estamos en %d \n",i);
	}
	printf("El valor es %d \n",i);
    
    
    
 
    
    return 0;
}
