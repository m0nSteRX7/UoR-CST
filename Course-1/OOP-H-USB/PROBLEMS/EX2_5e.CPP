// Програма за преброяване на думи
// char *strtok(char *str1, char *str2);
// търси в символен низ думи, разграничени с разделители,
// дефинирани в друг символен низ. Първото обръщение към
// strtok връща указател към първия символ на първата намерена  
// дума в str1. Следващи обръщения с NULL в първия аргумент
// ще продължат през str1 по същия начин до момента, в който
// няма повече думи. Символният низ str2, съдържащ разделителите,
// може да бъде различен при всяко обръщение. При изчерпани 
// думи от str1, функцията връща указател със стойност NULL.


#include <cstring>
#include <iostream>


using namespace std;

void main()
{
	char input[40];
	char *ptstr, *pr;
	unsigned int len;
	int c1 = 0;       /* брояч на 1 буквени думи */
	int c2 = 0;       /* брояч на 2 буквени думи */
	int c3 = 0;       /* брояч на 3 буквени думи */
	int c4 = 0;       /* брояч на 4 буквени думи */
	int ca = 0;


	cout << " Vavedete simvolen niz " << endl << endl;
	cin.get(input, 40);


	ptstr=strdup(input);

	while (pr = strtok(ptstr," .,"))
	{
		len = strlen(pr);
		switch (len)
		{
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			default: ca++;
		} //end switch

		/* установява в NULL за продължение */
		ptstr = NULL;
	
	} //end while

	cout << "Broi 1 bukveni dumi: " << c1 << endl;
	cout << "Broi 2 bukveni dumi: " << c2 << endl;
	cout << "Broi 3 bukveni dumi: " << c3 << endl;
	cout << "Broi 4 bukveni dumi: " << c4 << endl;
	cout << "Broi drugi dumi: " << ca << endl << endl;

} // end main
