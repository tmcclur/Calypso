
typedef struct GenericSet {

    size_t size;
    void *compare;
    void *block;
    /* 

    elements
    special functions
    extra properties

    */

} Set; 

Set *build(void *rule, /* additional args */);

int contains(void *compare, void *element)

void destroy(Set *set);

//binary operations
Set *merge(Set *a, Set *b);

Set *intersection(Set *a, Set *b);

