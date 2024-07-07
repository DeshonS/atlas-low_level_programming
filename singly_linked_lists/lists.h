#ifndef MAIN_FILE
#define MAIN_FILE

/**
 * struct list - linked list
*/

typedef struct list
{
char *str;
int len;
struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
