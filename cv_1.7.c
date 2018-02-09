#include <stdio.h>

int mocnina(int m, int n);

/* otestuje funkci mocnina */ 

int main()
{ 
    int i;
    
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, mocnina(2,i), mocnina( -3, i));
}

/* mocnina: umocní základ na n-tou; n >= 0 */
int mocnina(int zaklad, int n)
{  
    int i, m;
    
    m = 1;
    for (i=1; i <= n; ++i)
        m = m * zaklad;
    return m;
}
