#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

int main()
{
    t_list *node = ft_lstnew("Hello");
    printf("%s", node->content);
    free(node);
}

