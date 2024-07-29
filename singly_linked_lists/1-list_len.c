#include "lists.h"
/**
* list_len - funcion
* @h: data
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
  size_t i = 0;

  while(h != NULL)
    {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        i++;
    }
  return (i);
}
