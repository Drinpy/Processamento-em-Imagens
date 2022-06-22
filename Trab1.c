  #include <stdio.h>
  
    int main(void) 
{
    // Código Base do Neves
	FILE *arq;
	FILE *arq_saida;
	int col, lin, escala;
	char tipo[2], comentario[100];
	
	//Leitura e armazenamento do arquivo inicial
	arq = fopen("imagem.pgm", "r");
	if (arq == NULL) 
	{
		printf("Falha ao abrir o arquivo");
		exit(1);
	}
	fscanf(arq, "%s", &tipo);
	fscanf(arq, "%s", &comentario);
	fscanf(arq, "%d", &col);
	fscanf(arq, "%d", &lin);
	fscanf(arq, "%d", &escala);
	int mat[lin*col];
	
	for(i=0; i<lin*col; i++)
	{
			fscanf(arq, "%d", &aux);
			mat[i]=aux;
	}
    fclose(arq);
}
