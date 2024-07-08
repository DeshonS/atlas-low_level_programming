#ifndef MAIN_FILE
#define MAIN_FILE

/**
 * struct list - linked list
 * @str: stored string
 * @len: length of string
 * @next: pointer to next pointer in the list
*/

typedef struct list
{
char *str;
int len;
struct list *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
