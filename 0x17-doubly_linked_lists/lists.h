#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct dlistint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * @prev: points to the previous node
 * Description: singly linked list node structure
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

int _putchar(char);

size_t print_dlistint(const dlistint_t *);

size_t dlistint_len(const dlistint_t *);

dlistint_t *add_nodeint(dlistint_t **, const int);

dlistint_t *add_nodeint_end(dlistint_t **, const int);

void free_dlistint(dlistint_t *);

void free_dlistint2(dlistint_t **);

int pop_dlistint(dlistint_t **);

dlistint_t *get_nodeint_at_index(dlistint_t *, unsigned int);

int sum_dlistint(dlistint_t *);

dlistint_t *insert_nodeint_at_index(dlistint_t **, unsigned int, int);

int delete_nodeint_at_index(dlistint_t **, unsigned int);

dlistint_t *reverse_dlistint(dlistint_t **);

size_t print_dlistint_safe(const dlistint_t *);

size_t free_dlistint_safe(dlistint_t **);

size_t free_dlistint1_safe(dlistint_t *, dlistint_t *);

dlistint_t *find_dlistint_loop(dlistint_t *);


#endif /*LISTS_H*/
