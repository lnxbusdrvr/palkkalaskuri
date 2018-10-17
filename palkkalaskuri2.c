/*Työaikalaskin:
 *Ohjelma laskee tietyn ajanjakson aikana tehtyjen työtuntien
 *määrän sekä tulostaa tuntien yhteismäärän, keskimääräisen
 *työpäivän pituuden ja syötetyt tunnit eriteltynä. 
 *Ohjelman tulee aluksi kysyä, kuinka monen työpäivän tiedon
 *syötetään (max. 30 päivää). Tämän jälkeen ohjelma kysyy
 *päivittäiset työtunnit. 
 *vihje: ohjelman toteutus onnistuu helpoimmin käyttämällä
 *apuna taulukkoa, jonka koko on 30 alkiota.
 */

#include <stdio.h>  

int main (void)  
{                   
	float yhtmh, tuntipalkka;
	int i, m, tunnit[30], minuutit[30], yhth, yhtm, summa, paivat;
 
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
		printf("Anna %d päivän työtunnit: ", i+1);
		scanf("%d", &tunnit[i]);
		printf("Anna %d, päivän minuutit: ", i+1);
		scanf("%d", &minuutit[i]);
		yhth+=tunnit[i];
		yhtm+=minuutit[i];

		if(yhtm>=60)
		{
			printf("yli minuutin");
			yhth=yhth+1;
			yhtm=yhtm-60;
		}

	}
		//tarkistaa, että onko minuutit tunteja

	//yhtmh=tunnit[i]+minuutit[i];
     

	printf("-----------------------------------\n");
	printf("Tehdyt työtunnit yhteensä: %dh %dmin", yhth, yhtm);
	printf("                           -------\n");

	printf("Bruttopalkka: %feur\n", yhtmh*tuntipalkka); 
	printf("              ----------\n\n"); 

	printf("Keskimääräinen työpäivän pituus: %.1f\n\n", yhtmh/paivat);

	printf("Syötetyt tunnit:\n");

 
	for(i=0; i<paivat; i++)
	{
		printf("%d %d\n", tunnit[i], minuutit[i]);     
	}   
           
	printf("\n");

	/* system("pause"); */

	return 0;   

}                 



