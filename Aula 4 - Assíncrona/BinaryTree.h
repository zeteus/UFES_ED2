/**
Contem um inteiro e dois apontadores (esquerda/direita)
*/
typedef struct tNO* ArvBin;

/**
Inicializa a árvore e deixa a raiz NULL
retorna: Raiz alocada e apontada para NULL
*/
ArvBin* cria_ArvBin();

/**
Inicializa um NO com sua Esq e Dir igual a NULL
retorna: No criado
*/
ArvBin cria_NO(int valor);

/**
Insere 'valor' na árvore utilizando a regra que o filho esquerdo é menor que a raiz que é menor o filho direito.
Retorna: 1 em caso de sucesso. 
*/
int insere_ArvBin(ArvBin* raiz, int valor);

/**
Pesquisa um valor a partir da árvore raiz
retorna 1 se encontrar o valor e 0 caso não encontre
*/
int consulta_ArvBin(ArvBin *raiz, int valor);

/**
Verifica se a árvore está vazia
*/
int estaVazia_ArvBin(ArvBin raiz);

/* 
Conta o número de nós não-folha de uma árvore binária 
retorna: Numero de nós não folha
*/
int totalNaoFolha_ArvBin(ArvBin *raiz);

/** 
Conta o número de folhas de uma árvore binária.
retorna: Numero de nós folhas
*/
int totalFolha_ArvBin(ArvBin *raiz);

/*conta o número de nós de uma árvore binária. */
int totalNO_ArvBin(ArvBin *raiz);

/*retorna qual a altura de uma árvore binária. */
int altura_ArvBin(ArvBin *raiz);

/** Imprime em pre-ordem */ 
void preOrdem_ArvBin(ArvBin *raiz);

/** Imprime em-ordem */ 
void emOrdem_ArvBin(ArvBin *raiz);

/** Imprime em pós-ordem */ 
void posOrdem_ArvBin(ArvBin *raiz);

/**
Libera um NO da memória
*/
void libera_secretaco(ArvBin *raiz);

/**
Libera a árvore binária da memória
*/
void libera_ArvBin(ArvBin *raiz);
