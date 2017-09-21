#include "hello.h"

#include <stdio.h>

void sayHello()
{
	i = 0; /* initialisation de i à la valeur 0 */
	while (i<1000) /* exécution tant que la valeur i est inférieure à 1000 */
	{
		printf("Hello\n");
		i++;  /* incrémentation de la variable i (i++ est une écriture condensée d'incrémentation de la variable i, équivalente à i = i + 1, la dernire forme étant à préférer, pour des raisons de lisibilité */
	}
	
}
