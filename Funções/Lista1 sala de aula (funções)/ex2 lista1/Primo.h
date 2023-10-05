#ifndef PRIMO_H_INCLUDED
#define PRIMO_H_INCLUDED



#endif // PRIMO_H_INCLUDED

int primo(n)
{
    int aux2, aux, cont;

    for(aux2=2, aux=1, cont=0; aux2<= n; aux2++)
    {
        if(n % aux2 == 0 && aux2 != n)
        {
            cont++;
        }
        if(cont == 0 && aux2 == n)
        {
            aux = 0;
        }
    }

    return aux;
}
