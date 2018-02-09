/* mocnina: umocní základ na n-tou; n>=0; verze 2 */

int mocnina(int zaklad, int n)
{
    int m;
    
    for(m = 1; n > 0; --n)
        m = m * zaklad;
    return m;
}
