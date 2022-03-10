#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1. Définir les structures étudiant, enseignant, notes et modules.

//ETUDIANT

typedef struct {
	int code;	
	char nom[10] ;
	char filiere[30];
} ETUDIANT;

//ENSEIGNANT

typedef struct {
	char nom[10] ;
	int code;
	char filiere[10];
} ENSEIGNANT;

//NOTE 

typedef struct {
	float TP;
	float controle;
	float examen;
} NOTE;

//MODULE

typedef struct { 
	int code;
	char nom[20] ;
	ETUDIANT etudiant;
	ENSEIGNANT enseignant;
	NOTE notes;
}MODULE;


//2. Ecrire une fonction qui saisit un étudiant.

void saisirEtudiant(ETUDIANT *e)
{
	printf("veuilez saisir le nom d'etudiant : \n");
	scanf("%s",e->nom);
	printf("veuilez saisir le code d'etudiant : \n");
	scanf("%d",&e->code);
	printf("veuilez saisir la filliere d'etudiant :\n ");
	scanf("%s",e->filiere);
	
}
//3. Ecrire une fonction qui affiche un étudiant.

void affichageEtudiant(ETUDIANT e)
{
	printf("le nom d'etudiant est : %s \n le code est : %d \n la filliere est  %s",e.nom,e.code,e.filiere);
}

//4. Ecrire une fonction qui saisit un enseignant.

void saisirENSEIGNANT(ENSEIGNANT *ens)
{
	printf("\n veuilez saisir le nom de l'enseignant: ");
	scanf("%s",ens->nom);
	printf("veuilez saisir le code l'enseignant : ");
	scanf("%d",&ens->code);
	printf("veuilez saisir  la filiere l'enseignant : ");
	scanf("%s",ens->filiere);
	
}


//5. Ecrire une fonction qui affiche un enseignant.

void affichageENSEIGNANT(ENSEIGNANT ens)
{
	printf("le nom de l'ENSEIGNANT est : %s \n le code est : %d \n la filliere est: %s ",ens.nom,ens.code,ens.filiere);
}


//6. Ecrire une fonction qui saisit les notes.

void saisirNote(NOTE *n)
{
	printf("\n Veuillez saisir la note de TP :");
	scanf("%f",&n->TP);
	printf("Veuillez saisir  la note de controle: ");
	scanf("%f",&n->controle);
	printf("Veuillez saisir  la note d'examen : ");
	scanf("%f",&n->examen);
	
}


//7. Ecrire une fonction qui affiche les notes.

void affichageNote(NOTE n)
{
	printf("La note de TP est : %.3f \n de controle est: %.3f \n d'examen est :%.3f ",n.TP,n.controle,n.examen);
}

//8. Ecrire une fonction qui saisit un module.

void sisairModule(MODULE *m)
{
	printf("\n Veuillez saisir le nom de module: ");
	scanf("%s",m->nom);
	printf("Veuillez saisir le code de module : ");
	scanf("%d",&m->code);
	saisirEtudiant(&m->etudiant);
	saisirENSEIGNANT(&m->enseignant);
	saisirNote(&m->notes);

	
}
//9. Ecrire une fonction qui affiche un module.

void affichageModule(MODULE m)
{
	printf(" le nom de module est : %s et le code est : %d  ",m.nom,m.code);
	affichageEtudiant(m.etudiant);
	affichageENSEIGNANT(m.enseignant);
	affichageNote(m.notes);
}

//10. Ecrire une fonction qui saisit un tableau de modules.

void saisirtabModulesta(MODULE tab[3]){
	
	
	for( int i = 0 ; i <3 ; i++)
	{
		printf("\n Veuillez saisr le nom du tableau de module  : ");
		scanf("%s" , tab[i].nom);
		printf("Veuillez saisir le code du tableau de module : ");
		scanf("%d" , &tab[i].code);
		saisirEtudiant(&tab[i].etudiant);
		saisirENSEIGNANT(&tab[i].enseignant);
		saisirNote(&tab[i].notes);

	
	}
}

//11. Ecrire une fonction qui affiche un tableau de modules.

void affichagetabModulesta(MODULE tab[3] )
{

	
	for(int i = 0 ; i < 3 ; i++)
	{
		printf("le tableau de module  est : \n");
		printf(" le nom : %s ,le code : %d  \n" , tab[i].nom,tab[i].code);
		affichageEtudiant(tab[i].etudiant);
		affichageENSEIGNANT(tab[i].enseignant);
		affichageNote(tab[i].notes);
		
	}
		
}


//12. Ecrire le programme principal qui réalise le scénario suivant :
	
	
void saisirtabModuleDy(MODULE tab[])
{
	//• Déclaration d'un tableau dynamique de modules.
	int n;
	printf("\n Veuillez saisir la taille de tableau : ");
	scanf("%d", &n);
	
	//• Saisie d'un tableau de modules.
	
	for( int i = 0 ; i <n ; i++)
	{
		printf("\n Veuillez saisir le nom du tableau  de module : ");
		scanf("%s" , tab[i].nom);
		printf("Veuillez saisir le code du tablea de module : ");
		scanf("%d" , &tab[i].code);
		saisirEtudiant(&tab[i].etudiant);
		saisirENSEIGNANT(&tab[i].enseignant);
		saisirNote(&tab[i].notes);
	}
		
}
	
	//• Affichage d'un tableau de modules.
void affichagetabModulDy(MODULE tab[] )
{
	int n;
	
	for(int i = 0 ; i < n ; i++){
		
		printf("le tableau de module contient   \n");
		printf("le nom est : %s ,  code : %d  \n" , tab[i].nom,tab[i].code);
		affichageEtudiant(tab[i].etudiant);
		affichageENSEIGNANT(tab[i].enseignant);
		affichageNote(tab[i].notes);
	
	}
		
}


int main (){
	int z=3 ,dy;
	ETUDIANT e;
	ENSEIGNANT ens;
	NOTE n;
	MODULE m ,tab[dy];
	
	//ETUDIANT
	
	//sisairEtudiant(&e);
	//affichageEtudiant(e);
	
	//ENSEIGNANT
	
//	saisirENSEIGNANT(&ens);
//	affichageENSEIGNANT(ens);
	
	//NOTE 
	
	//saisirNote(&n);
	//affichageNote(n);

	//MODULE

	//sisairModule(&m);
	//affichageModule(m);
	
	//saisirtabModulesta(&tab[z]);
	//affichagetabModulesta(&tab[z]);
	
	saisirtabModuleDy(&tab[dy]);
	affichagetabModulDy(&tab[dy]);
}
