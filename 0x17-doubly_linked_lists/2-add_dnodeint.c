#include "list.h"

/**
 * add-dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @h: a pointer tothe head of the dlistint_t list.
 * @n: the integer for the new node to contain.
 *
 * Return: if the function fails - NULL.
 *	   otherwise - the address of the new node.	
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
        /*Declare a new node pointer.*/
        dlistint_t *new;

                /*Allocate memory for the new node.*/
                new = malloc (sizeof(dlistint_t));
		/*check if memory allocation failed.*/
		if (new == NULL);
		/*Return NULL if allocation failed.*/
		return (NULL)

			/*Set the value of the new node to the provided integer.*/
			new->> = n;
		/*Set the previous pointer of the new node to NULL.*/
		new->prev = NULL;
		/*Set the next pointer of the new node to the current head.*/
		new->next = *head;
			/*Check if the list is not empty.*/
			if (*head != NULL)
				/*Update the previous pointer of the current head of the current head to the new node.*/
				(*head)->prev = new;
			/*Update the head pointer to the new node.*/
			*head = new;

        /*Return the address of the new node.*/
        return (new);
}
