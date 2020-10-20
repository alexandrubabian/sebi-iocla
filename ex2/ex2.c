#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern){
	char *copie,*parcurgere;
	copie=strdup(s);
	parcurgere=strstr(copie,pattern);
	strcpy(parcurgere,parcurgere+2);
	return copie;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	 printf("%s\n", delete_first(s, pattern));

	return 0;
}
