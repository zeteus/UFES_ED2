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
Verifica se a árvore está vazia
*/
int estaVazia_ArvBin(ArvBin raiz);

/*retorna qual a altura de uma árvore binária. */
int altura_ArvBin(ArvBin *raiz);

/** Imprime em pre-ordem */ 
void r_preOrdem_ArvBin(ArvBin *raiz);

/** Imprime em-ordem */ 
void r_emOrdem_ArvBin(ArvBin *raiz);

/** Imprime em pós-ordem */ 
void r_posOrdem_ArvBin(ArvBin *raiz);

/** Imprime em pre-ordem */ 
void i_preOrdem_ArvBin(ArvBin *raiz);

/** Imprime em-ordem */ 
void i_emOrdem_ArvBin(ArvBin *raiz);

/** Imprime nível */
void it_emNivel_ArvBin(ArvBin *raiz);

/**
Libera um NO da memória
*/
void libera_no(ArvBin *raiz);

/**
Libera a árvore binária da memória
*/
void libera_ArvBin(ArvBin *raiz);
