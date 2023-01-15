#include "minishell.h"
// >>        a>>b>>c<t<o>p<<t<<u ls -la

int main(int c, char **v)
{
	t_redirect	*ptr;
	t_redirect	*head;
	char		**argv;
	
	int i = 0;
	int	x;
	int start;
	int end = 0;
	char *name;
	ptr = malloc(sizeof(t_redirect));
	head = ptr;
	char *line =  "   >> ajags     ukguyg >>b>>c<t<o>p1<<t<<u ls <t >u -la";
	x = 1;
	while (line[i] != '\0')
	{
		while (line[i] <= 32)
			i++;
		if (is_redirect_in(line[i]) || is_redirect_out(line[i]))
		{
				if (is_append(line[i], line[i + 1]))
					x++;
				ptr->flag = ft_substr(line, i, x);
				i += x;
				while (is_space(line[i]))
					i++;
					start = i;
				while (!ft_strchr(METACHARACTER, line[i]))
				{
					//ptr->type = ft_substr(line, start, i - start + 1);
					i++;
				}
				ptr->f_name = ft_substr(line, start, i - start);
				// ptr->next = malloc(sizeof(t_redirect));
				// ptr = ptr->next;
			x = 1;
		}
		else if (!is_redirect_in(line[i]) || !is_redirect_out(line[i]))
		{
			int st = i;
			while ((!is_redirect_in(line[i]) || !is_redirect_out(line[i])))
				i++;
			ptr->type = ft_substr(line, start, i - st + 1);		
			// ptr->next = malloc(sizeof(t_redirect));
			// ptr = ptr->next;
		}
		ptr->next = malloc(sizeof(t_redirect));
		ptr = ptr->next;
		i++;
	}

	while (head)
	{
		printf("f_name: %s\n", head->f_name);
		printf("flag: %s\n", head->flag);
		//printf("type: %s\n", head->type);
		head = head->next;
	}

	printf("start: %d\n", start);
	printf("end: %d\n", end);
	return (0);
}
