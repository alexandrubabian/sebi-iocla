#include <stdio.h>
#include <stdlib.h>
/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    unsigned char *char_ptr = (unsigned char*)&v;
    //printf("%p -> 0x%x\n",char_ptr, *char_ptr);
    //afisare din octet in octet
    int octeti=sizeof(v)/sizeof(unsigned char);
    //printf("%d",dimensiune);
    for(int i=0;i<octeti;i=i+4)
    	printf("elementul %d ->ox%x%x%x%x\n",i/4,*(char_ptr+i),*(char_ptr+(i+1)),*(char_ptr+(i+2)),*(char_ptr+(i+3)));
    //pt celelalte exercitii se declara un  unsigned short si un unsigned int cu care se itereaza prin v
    return 0;
}
