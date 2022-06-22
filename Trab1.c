``` int main() 
{
	FILE *arq;
	FILE *arq_saida;
	int col, lin, escala;
	int i, j, n, a, cont, aux, auxc, auxl, b, x, k, opcao_selecionada, claro_escuro, gradiente_bordas;
	int cima, baixo, direita, esquerda, diag1, diag2, diag3, diag4;
	char tipo[2], comentario[100];
	
	//Leitura e armazenamento do arquivo inicial
	arq = fopen("imagem.txt", "r");
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
} ```
