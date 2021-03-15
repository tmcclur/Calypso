#include set.h

/*

tensor is a set

unary operations:
    create
    sum
    sort 
    remove
    copy
    max
    destroy

binary operations:
    inner product
    matrix multiplication

sparse matrices

indexing/slicing
*/

union ElementType {
    long ele;
    double d;
} EleType;

Set *create( int dim, long *shape, int type, EleType *init);

EleType sum(Set *tensor);

void sort(Set *tensor);

EleType remove(Set *tensor, EleType ele);

Set *copy(Set *tensor);

EleType max(Set *tensor);

void destroy(Set *tensor);

//binary operations
EleType innerProduct(Set *a, Set *b);

EleType multiply(Set *a, Set *b);



