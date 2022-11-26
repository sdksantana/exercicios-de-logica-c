#include <conio.h>
#include <math.h>
#include <stdio.h>

main()

{
		int n1, n2, n3, n4;

		printf("digite quatro numeros quaisquer:\n");
		scanf("%i",&n1);
		scanf("%i",&n2);
		scanf("%i",&n3);
		scanf("%i",&n4);

		puts("Eh divisivel por 2 e 3:");

            if
            (n1 % 2 == 0 && n1 % 3 == 0)
            printf("%i ", n1);

            if
            (n2 % 2 == 0 && n2 % 3 == 0)
            printf("%i ", n2);

            if
            (n3 % 2 == 0 && n3 % 3 == 0)
            printf("%i ", n3);

            if
            (n4 % 2 == 0 && n4 % 3 == 0)
            printf("%i ",n4);


        getch();




}

