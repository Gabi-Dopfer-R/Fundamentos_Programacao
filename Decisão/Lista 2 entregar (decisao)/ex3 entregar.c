/*A figura a seguir representa uma �rvore de decis�o para identificar se um paciente est�
saud�vel ou doente. Elabore um programa que implementa essa �rvore de decis�o.*/

#include <stdio.h>

int main (void)

{
    int bem, dor;
    float temp;

    printf ("Dgite:1 para sim e 2 para nao.\n");
    printf ("O paciente se sente bem?");
    scanf ("%d", &bem);

    if (bem == 1)
    {
        printf ("O paciente esta saudavel");
    }

    else if (bem == 2)
    {
        printf ("O paciente tem dor?");
        scanf ("%d", &dor);

        switch (dor)
        {
            case 1:
                printf ("O paciente esta doente."); break;

            case 2:
                printf ("Qual a temperatura do paciente?");
                scanf ("%f", &temp);
                temp > 37 ? printf ("O paciente esta doente.")
                            : printf ("O paciente esta saudavel."); break;
        }
    }

    return 0;
}
