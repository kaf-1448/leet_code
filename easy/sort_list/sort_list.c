#include <stdio.h>
#include <stdlib.h>
#include "sort_list.h"




// int ascending(int a, int b)
// {
//     return (a <= b);
// }




// int main()
// {
//     int (*ptr)(int, int) = ascending;
//     printf("%d\n", (*ptr)(3, 1));
//     return 0;
// }

void buble_sort(int *arr, int size)
{
    int i;
    int j;
    int temp;

    if (!arr || size <= 1)
        return ;

    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;    
            }
            j++;
        }
        i++;
    }
}



t_list *sort_list (t_list *lst, int (*cmp)(int, int))
{
;
}


t_list *add_front(t_list **head, t_list *node)
{
    t_list *next;

    next = *head;
    *head = node;
    node->next = 

}


t_list *node(int data)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);

    node->data = data;
    return node
}



int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));


}