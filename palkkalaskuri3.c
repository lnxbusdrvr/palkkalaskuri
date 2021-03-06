/* Työaikalaskin:
 * Ohjelma laskee tietyn ajanjakson aikana tehtyjen työtuntien
 * määrän sekä tulostaa tuntien yhteismäärän, keskimääräisen
 * työpäivän pituuden ja syötetyt tunnit eriteltynä. 
 * Ohjelman tulee aluksi kysyä, kuinka monen työpäivän tiedon
 * syötetään (max. 30 päivää). Tämän jälkeen ohjelma kysyy
 * päivittäiset työtunnit. 
 * vihje: ohjelman toteutus onnistuu helpoimmin käyttämällä
 * apuna taulukkoa, jonka koko on 30 alkiota.
 */

#include <stdio.h>  

int main (void)  
{                   
    float tyotunnit[30], yht, tuntipalkka;
    int i, summa, paivat;
 
    printf("\n");
    printf("PALKKALASKURI\n");
    printf("-------------\n\n"); 
    printf("Syötä tuntipalkkasi:\n");
    scanf("%f", &tuntipalkka);

    printf("Kuinka monta työpäivää:\n");

    scanf("%d", &paivat);

    printf("-----------------------------------\n");
    for (i=0; i<paivat; i++)
    {
	printf("Anna %d. päivän työtunnit: ", i+1);
	scanf("%f.2", &tyotunnit[i]);
	yht+=tyotunnit[i];

        // pyöristetään desimaali
        // ? question mark vastaa yhtä merkkiä
        // * asterisk vastaa yhtä tai useampaa merkkiä
        if(yht >= .60)
        {
            printf("yli minuutin");
            yht=yht+1-0.60;
        }
            
    }
     

    printf("-----------------------------------\n");
    printf("Tehdyt työtunnit yhteensä: %.2f\n", yht);
    printf("                           -------\n");

    printf("Bruttopalkka: %.2feur\n", yht*tuntipalkka); 
    printf("              ----------\n\n"); 

    printf("Keskimääräinen työpäivän pituus: %.1f\n\n", yht/paivat);

    printf("Syötetyt tunnit:\n");

 
    for(i=0; i<paivat; i++)
    {
        printf("%.2f\n", tyotunnit[i]);     
    }   
           
    printf("\n");

    /* system("pause"); */

    return 0;   

}                 



