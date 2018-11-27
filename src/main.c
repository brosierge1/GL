	 


#include  "Tp_lib_suite.h"
	




	int main(void)
	{
		
	
		
	 	
	unsigned char joueur[6]={1,12,32,41,25,4};
	unsigned char i;
	unsigned char nbgagnants=0;
	unsigned char meilleur=0;
	unsigned char j; 
	for(j=0;j<100;j++)
	{
	 initialiserTirage();
	unsigned char gagnant[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()}; 
	
	unsigned char nbgagnants=0; 	

	for(i=0;i<6;i++)
	{
		
	 if( joueur[0]==gagnant[i])
		nbgagnants=nbgagnants+1;
	 
	if (joueur[1]==gagnant[i])
		nbgagnants=nbgagnants+1;
		
	if (joueur[2]==gagnant[i])
		nbgagnants=nbgagnants+1;
		
	if (joueur[3]==gagnant[i])
		nbgagnants=nbgagnants+1;
		
	if (joueur[4]==gagnant[i])
		nbgagnants=nbgagnants+1;
		
	if (joueur[5]==gagnant[i])
		nbgagnants=nbgagnants+1;
		
		
	
	}
	
	if(nbgagnants>meilleur)
		meilleur=nbgagnants;

	
	
	}
	   
	return 0;
	
	
	} 
