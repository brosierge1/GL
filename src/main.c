
#include <userint.h>
#include <ansi_c.h>
int main(void)
{
 char ligne1[80]="Nom: pentagone_B";
 char ligne2[80]="Nb points: 5";
 char ligne3[80]="Coordonnées: 10 20 30 20 40 43 53 35 65 54";
 
 static char res[81];   
 static char libelle[81];
 char nom_fig[80];
 char nb_pts[80];
 int x[5];
 int y[5];

 
 sscanf(ligne1,"%*s %s",nom_fig);
 sscanf(ligne2,"%*s %*s %s",nb_pts);
 sscanf(ligne3,"%*s %u %*u %u %*u %u %*u %u %*u %u %*u",&x[0],&x[1],&x[2],&x[3],&x[4]);
 sscanf(ligne3,"%*s %*u %u %*u %u %*u %u %*u %u %*u %u",&y[0],&y[1],&y[2],&y[3],&y[4]);


  if(y[4]>20000)
  {
	
	sprintf(libelle,"coordonnées manquantes");
	MessagePopup("Erreur",libelle);  
  }

	

sprintf(res,"La figure %s possède %s sommets",nom_fig,nb_pts);
MessagePopup("Résultat",res);

 
 
 return 0;
}								
																		 
