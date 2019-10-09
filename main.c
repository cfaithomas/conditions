#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main()
{
    /************************************jeu de devinettes***********************************/
    srand(time(NULL));
    int nombre=rand()%10+1;
    int choixnombre=0;
    printf("Veuillez entrez un nombre compris entre 1 et 10\n");
    scanf("%d",&choixnombre);

    if(choixnombre>=1&& choixnombre<=10) //isdigit ne peut pas tester plusieurs caracteres
    {
        if(choixnombre==nombre)  //test choixnombre doit être égal à nombre
        {
            printf("Vous avez trouvé");
        }
        else
        {
            printf("Vous n'avez pas trouvé le nombre est %d",nombre);
        }
    }
    else
        printf("La saisie doit être un nombre compris entre 1 et 10");



    /********************************horoscope***************************************************/
    int journaiss=0;
    int moisnaiss=0;
    printf("Veuillez taper votre jour de naissance");
    scanf("%d",&journaiss);
    printf("Veuillez taper votre mois de naissance");
    scanf("%d",&moisnaiss);

    if((moisnaiss==3 &&journaiss>=21) || (moisnaiss==4 && journaiss<=19) )
    {
        printf("Vous êtes belier\n");
        printf("vous aurez certainement un défi professionnel important à relever");
    }
    else
    if((moisnaiss==4 && journaiss>=20) || (moisnaiss==5 && journaiss<=21) )
    {
        printf("Vous êtes Taureau\n");
        printf("vous serez assez vindicatif. Vous réclamerez plus d’écoute et de responsabilités");

    }
    else
    if((moisnaiss==5 && journaiss>=21) || (moisnaiss==6 && journaiss<=21) )
    {
        printf("Vous êtes Gémeaux\n");
        printf("vous serez en proie à une ambition démesurée.  Ne vous laissez pas freiner et avancez coûte que coûte");

    }
    else
    if((moisnaiss==6 && journaiss>=21) || (moisnaiss==7 && journaiss<=22) )
    {
        printf("Vous êtes Cancer\n");
        printf("sera une année de projets, de belles amitiés et d’implication dans la vie collective.");
    }
    else
    if((moisnaiss==7 && journaiss>=22) || (moisnaiss==8 && journaiss<=22) )
    {
        printf("Vous êtes Lion\n");
        printf(" vous chercherez avant tout à introduire du plaisir dans chaque secteur de votre vie.");
    }
    else
    if((moisnaiss==8 && journaiss>=23) || (moisnaiss==9 && journaiss<=22) )
    {
        printf("Vous êtes Vierge\n");
        printf("vous serez un peu perdu(e) concernant votre positionnement dans votre famille, votre couple.");

    }
    else
    if((moisnaiss==9 && journaiss>=23) || (moisnaiss==10 && journaiss<=22) )
    {
        printf("Vous êtes Balance\n");
        printf("malgré des responsabilités familiales plus lourdes, vous élargissez le champ de vos connaissances.");
    }
    else
    if((moisnaiss==10 && journaiss>=23) || (moisnaiss==11 && journaiss<=22) )
    {
        printf("Vous êtes Scorpion\n");
        printf("En 2019 vous vous donnerez les moyens de vos ambitions. Et ce travail sans relâche pourrait bien vous réussir.");
    }
    else
    if((moisnaiss==11 && journaiss>=23) || (moisnaiss==12 && journaiss<=21) )
    {
        printf("Vous êtes Sagittaire\n");
        printf("vous vous donnerez les moyens de réussir vos projets quitte à vous montrer plus discipliné(e).");
    }
    else
    if((moisnaiss==12 && journaiss>=22) || (moisnaiss==1 && journaiss<=19) )
    {
        printf("Vous êtes Capricorne\n");
        printf("Vous élargissez votre champ d'action, faites vos preuves et restez optimiste face aux embûches.");
    }
    else
    if((moisnaiss==1 && journaiss>=20) || (moisnaiss==2 && journaiss<=19) )
    {
        printf("Vous êtes Verseau\n");
        printf("vous répondrez à votre ambition grissante mais vous risquez de payer cher des tentatives avortées");
    }
    else
    if((moisnaiss==2 && journaiss>=20) || (moisnaiss==3 && journaiss<=20) )
    {
        printf("Vous êtes Poisson\n");
        printf("vous oserez ce que vous n’avez jamais osé auparavant. Quitte à tenter le diable !");
    }
    /******************************************Jeu de dé***************************************************************/
    srand(time(NULL));
    int de=rand()%6+1;
    int de1=rand()%6+1;
    printf("%d %d\n",de,de1);

    if(de+de1==7 || de+de1==11)
    {
        printf("player wins\n");
    }
    else
    {
        printf("somme= %d\n",de+de1);
        printf("Thank you for playing this game");
    }
    return 0;

}