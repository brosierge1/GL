#include <userint.h>
#include <ansi_c.h>



int main(void)
{
char phrase[100];

static char libelle[81];
char prenom[100];
char nom[100];
long unsigned int age;
long unsigned int an;



scanf("%s %s %lu",prenom,nom,&an);


age=2018-an;


printf("je m'appelle %s %s et j'ai %d ans",prenom,nom,age);

sprintf(libelle,"je m'appelle %s %s et j'ai %lu ans",prenom,nom,age);
MessagePopup("boum",libelle);

return 0;

}
