// Програма за сортиране на редове

#include <iostream>

using namespace std;

#define SIZE 81 /* максимална дължина на реда, включва \0 */
#define LIM 20  /* максимален брой прочетени редове */

void sortline( char * [], int);

void main()
{
	char input[LIM][SIZE]; /* масив за запомняне на редовете */
	char *ptrstr[LIM];     /* масив за указтелите */
	int ct = 0;            /* брояч на въведените редове */

	cout << " Vavedete do " << LIM << " reda" << endl;
	cout << "Za prekratiavane na vavezdaneto "
		<< "natisnete <Ctrl/Z> v nachaloto na reda" << endl << endl;

	while ( ((cin >> input[ct])) && (ct++ < LIM))
		ptrstr[ct-1] = input[ct-1];

  sortline(ptrstr,ct);     /* сортировка на редове */
    
	cout << endl << " SORTIRAN MASIV " << endl << endl;
    for ( int k=0; k<ct; k++) cout << ptrstr[k] << "\n";

} //end main

void sortline( char *strings[], int num )
{
	char *temp;
	int top,seek;

	for (top=0; top<num-1; top++)
		for (seek=top+1; seek<num; seek++)
			if (strcmp(strings[top],strings[seek]) > 0)
			 {
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			 }
} // end sortline
