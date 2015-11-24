#include "Simulador.h"

void parserRead(char *csvFile) {
	int 	caracter,
			valor[sizeof(int)];

	int 	i=0, j, k=0, l=0;

	FILE 	*F = fopen(csvFile, "rb");

	if(!F) {
		printf("Parâmetro 1 nao encontrado\n");
		exit(1);
	}

	while((fgetc (F) != EOF)) {
		fseek(F, -1, 1);

		if(fread(&caracter, sizeof(char), 1, F)){
			if(caracter == ',') {			// Lê até o separador da coluna
				parserTable[k][l] = 0;
				for(j=0; j<i; j++) parserTable[k][l] += (valor[j]-0x30)*(pow(10, (i-1)-j));	// Converte de ASCII para decimal
				l++;
				i=0;
				continue;
			}
			if(caracter == '\n') {			// Lê até o fim da linha
				parserTable[k][l] = 0;
				for(j=0; j<i; j++) parserTable[k][l] += (valor[j]-0x30)*(pow(10, (i-1)-j));
				k++; l=0;
				i=0;
				continue;
			}
			valor[i] = caracter;	// Atribui o caracter à respectiva cada decimal
			i++;
		}
	}
	fclose(F);
}

void parserShow(void) {
	int i, j;

	for(i=0; i<65; i++) {
		for(j=0; j<34; j++)
			printf("%-3d ", parserTable[i][j]);
		printf("\n");
	}
}
