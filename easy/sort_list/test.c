# include <stdio.h>
# include <stdlib.h>
# include "sort_list.h"


int ft_list_size(t_list * begin_list)
{
    int size

    size = 0
    while (begin_list)
    {
        size++
        begin_list = begin_list -> next
    }
    return (size)
}


void ft_list_push_front(t_list ** begin_list, int data)
{
    t_list * next
    t_list * new_node

    new_node = malloc(sizeof(t_list))
    new_node -> data = data

    next = *begin_list
    (*begin_list) = new_node
    new_node -> next = next

}

t_list * ft_list_find(t_list * begin_list, int data_ref)
{
    while (begin_list)
    {
        if (data_ref == begin_list -> data)
        return begin_list
        begin_list = begin_list -> next
    }
    return NULL
}


void print_list(t_list * list)
{
    while (list)
    {
        printf("%d\n", list -> data)
        list = list -> next
    }
}

int multiply(int x, int y)
{
    return (x * y)
}

int ascending(int a, int b)
{
    return (a <= b)
}

// int main()
// {

    // t_list * node1 = malloc(sizeof(t_list))
    // t_list * node2 = malloc(sizeof(t_list))
    // t_list * node3 = malloc(sizeof(t_list))
    // t_list * head = node1

    // node1 -> data = 5
    // node1 -> next = node2

    // node2 -> data = 10
    // node2 -> next = node3

    // node3 -> data = 15
    // node3 -> next = NULL


    //     ft_list_push_front(& head, 4)
    // print_list(head)


    //     // int total_size = ft_list_size(& head)
    // // printf("%d\n", total_size)


    // return 0
    // }


int main()
{
    int(*ptr)(int, int) = ascending
    printf("%d\n", (*ptr)(3, 1))
    return 0
}
