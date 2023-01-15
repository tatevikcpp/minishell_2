#include "minishell.h"
/* void split_args(char *str)
{
    int i = 0;
    char **split;

 
    split = ft_split(str);
} */

char *valid_ls(char *str)
{
    char *cmd = "ls";
    int i = 0;
    int start;

    while (str[i])
    {
        if (is_space(str[i]) && (ft_strcmp(str, cmd)) == 0)
        {
            start = i;
            return (ft_substr(str, i, i - start));
        }
        i++;
    }
   return (0);
}