typedef int Item;
#define CUTOFF 12
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)
#define SZ2 (sz+sz)
#define MIN(X,Y) ((X < Y) ? (X) : (Y))