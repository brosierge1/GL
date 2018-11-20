#define  SEUIL 5
#define SEUILH 200
#define SEUILB -100
#include <ansi_c.h>
#include "TP_lib.h"

int main(void)
{
	unsigned char bin [10]={1,2,3,4,5,6,7,8,9,10};
	unsigned char i;
	unsigned char sat [10]=((rand())%10);
	
	
	for(i=0; i<10;i=i+1)
	{
		
	if(i<SEUIL)
		bin[i]=0;
	else if (i>=SEUIL)
		bin[i]=1;
	
		
	}

	
	
	for(i=0; i<10;i=i+1)
	{
	   if(bin[i]>SEUILH)
		   bin[i];
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
   return 0;
   
}
