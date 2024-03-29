#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *, size_t, int);

int binary_search(int *, size_t, int);

void print_array(int *, size_t, size_t);

int *jump(int *, size_t, int);

int print_val_l(listint_t *);

void print_list(const listint_t *);

void free_list(listint_t *);

listint_t *create_list(int *, size_t);

int print_val(size_t, int);

int interpolation_search(int *, size_t, int);

int exponential_search(int *, size_t, int);

int binary_search_e(int *, size_t, size_t, int);

int advanced_binary(int *, size_t, int);

int b_r(int *, size_t, size_t, size_t, int);

listint_t *jump_list(listint_t *, size_t, int);

skiplist_t *linear_skip(skiplist_t *, int);

void init_express(skiplist_t *, size_t);

skiplist_t *create_skiplist(int *, size_t);

void free_skiplist(skiplist_t *);

void print_skiplist(const skiplist_t *);

int print_val_s(skiplist_t *);
#endif /* SEARCH_ALGOS_H */
