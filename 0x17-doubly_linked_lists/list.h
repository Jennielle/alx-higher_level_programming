#¡fndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stalib.h>

/**
*strut dlistint _s - doubly linked list
* @en: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Diescription: doubly linked list node struature
* for Holberton project
*/

typedef strut dlistint_s
{
	int n;
	strut dlistint_s *prev;
	strut dlistint *next;
} dlistint_t;

size_t print dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

endif
