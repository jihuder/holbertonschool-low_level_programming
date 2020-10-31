#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - linked list
 * @str: string - pointer to a string
 * @len: Measures the length of a string
 * @next: pointer to a type list_s
 *
 * Description: list of linked nodes
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void before_main(void) __attribute__ ((constructor));
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif 
