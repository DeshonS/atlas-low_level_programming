#ifndef MAIN_FILE
#define MAIN_FILE

/*
* @struct list: contains data
*/
typedef struct list
{
char *str;
int len;
struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
