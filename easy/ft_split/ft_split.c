#include <stdio.h>
#include <stdlib.h>

int ft_is_space(char c)
{
    return (c == '\n' || c == ' ' || c == '\t');
}



int ft_count_word(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (!ft_is_space(str[i]) && ( i == 0 || ft_is_space(str[i - 1])))
            count++;
        i++;
    }
    return (count);
}

char **free_all(char **arr, int allocated_size)
{
    int i;

    i = 0;
    while(i < allocated_size)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
    return (NULL);
}



char **ft_split(char *str)
{
    char **arr;
    int words;
    int i;
    int k;
    int f;
    int j;

    if (!str || !str[0])
        return (NULL);
    words = ft_count_word(str);
    arr = malloc(sizeof(char *) * (words + 1));
    if (!arr)
        return (NULL);


    i = 0;
    k = 0;
    f = 0;
    while (words > i)
    {
        while (str[k] && ft_is_space(str[k]))
            k++;

        f = k;
        
        while (str[f] && !ft_is_space(str[f]))
            f++;


        arr[i] = malloc((f - k) + 1);
        if (!arr[i])
            return (free_all(arr, i));
        
        j = 0;
        while (k < f)
        {
            arr[i][j] = str[k];
            k++;
            j++;
        }
        arr[i][j] = '\0';
        i++;
    }
    arr[i] = NULL;
    return (arr);
}


int main()
{
    char **str = ft_split("hello world");
    printf("%s\n", str[0]);
    printf("%s\n", str[1]);
    // printf("%s\n", str[2]);
    return 0;
}