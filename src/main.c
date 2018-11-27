	 


#include  "Tp_lib_suite.h"
	initialiserTirage()
	{
	 unsigned char gagnant[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()};   
	}




	int main(void)
	{
	unsigned char joueur[6]={1,12,32,41,25,4};
	unsigned char i;
	unsigned char nbgagnants=0;
	
	 
	initialiserTirage();
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
	
	
	
	return 0;
	
	
	} 
