#include <stdio.h>

int main()
{
	int mm;
	//printf("Il mese inserito e': ");
	//138
	
	printf("Inserire numero del mese: ");
	scanf("%d", &mm);
	
	switch(mm)
	{
		case 1 :
			printf("Il mese inserito e': Gennaio");
		break;
		
		case 2 :
			printf("Il mese inserito e': Febbraio");
		break;
		
		case 3 :
			printf("Il mese inserito e': Marzo");
		break;
		
		case 4 :
			printf("Il mese inserito e': Aprile");
		break;
		
		case 5 :
			printf("Il mese inserito e': Maggio");
		break;
		
		case 6 :
			printf("Il mese inserito e': Giugno");
		break;

		case 7 :
			printf("Il mese inserito e': Luglio");
		break;

		case 8 :
			printf("Il mese inserito e': Agosto");
		break;

		case 9 :
			printf("Il mese inserito e': Settembre");
		break;

		case 10 :
			printf("Il mese inserito e': Ottobre");
		break;

		case 11 :
			printf("Il mese inserito e': Novembre");
		break;

		case 12 :
			printf("Il mese inserito e': Dicembre");
		break;	

		default :
			printf("Mese non valido.");
		break;
	}
	return 0;
}
