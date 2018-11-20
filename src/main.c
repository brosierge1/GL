#define  SEUIL 5
#define SEUILH 200
#define SEUILB -100
#include <ansi_c.h>
#include "TP_lib.h"
#include <stdlib.h>
#define N 8

int main(void)
{
	unsigned char bin [10]={1,2,3,4,5,6,7,8,9,10};
	unsigned char i;
	int sat [10]={rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384,rand()-16384};
	char dist [10]={13,12,11,10,9,8,7,6,5,4};
	char a[5]={1,5,9,8,11};
	char b[5];
	char miroir [N]= {1,2,3,4};
	
	
	
	
	
	
	
//question 1//
	
	for(i=0; i<10;i=i+1)
{
		
	if(bin[i]<SEUIL)				   
		bin[i]=0;
	else if (bin[i]>=SEUIL)
		bin[i]=1;
		
}

//question 2//	
	
	for(i=0; i<10;i=i+1)
{
	   if(sat[i]>SEUILH)
		   sat[i]=SEUILH;
	   else if (sat[i]<SEUILB)
		   sat[i]=SEUILB;
	 
}

//question 3//
 	 for(i=1; i<10;i=i+1)
	 
{

		
		if(dist[i]<dist[i-1])
			dist[i]=dist[i-1]-dist[i];
		
		else if (dist[i]>dist[i-1])
			dist[i]=dist[i]-dist[i-1];
	 
}
	
	
//question 4//	

   for(i=0;i<5;i=i+1)
	   
{
	b[i]=a[5-i-1];   
   
}

//question 5// 
 for(i=0;i<N/2;i=i+1)
 {
  miroir[N-i-1]=miroir[i];
 
 }
	
	

   return 0;
   
}
