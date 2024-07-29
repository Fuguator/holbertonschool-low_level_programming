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
      if (h->len == NULL)
      {
        printf("[0] (nil)\n");
        h = h->next;
        i++;
      }
      else
      {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        i++;
      }
    }
}
