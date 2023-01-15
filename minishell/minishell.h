#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdbool.h>
# include "libft/libft.h"
# include <fcntl.h>
# include <sys/stat.h> 


# define METACHARACTER "|&;<>() \n\t"

typedef struct s_split
{
	char *val;
	char *type;
} t_split;


typedef struct s_redirect
{
	char *f_name;
	char *flag;
	char *type;
	struct s_redirect *next;
} t_redirect;


bool    is_space(char c);
bool    is_pipe(char c);
bool    is_redirect_in(char c);
bool    is_redirect_out(char c);
bool    is_append(char c, char d);
char	*valid_ls(char *str);

#endif