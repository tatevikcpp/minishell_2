// int main(int c, char **v)
// {
// 	t_redirect	*ptr;
// 	t_redirect	*head;
// 	char		**argv;
	
// 	int i = 0;
// 	int	x;
// 	int start;
// 	char *name;
// 	ptr = malloc(sizeof(t_redirect));
// 	head = ptr;
// 	char *line =  "    >> amalia  >>b>>c<t<o>p<<t<<u ls <t >u -la";
// 	x = 1;
// 	while (line[i] != '\0')
// 	{
// 		if (is_redirect_in(line[i]) || is_redirect_out(line[i]))
// 		{
// 			if (is_append(line[i], line[i + 1]))
// 				x++;
// 			ptr->flag = ft_substr(line, i, x);
// 			i += x;
// 			while (is_space(line[i]))
// 				i++;
// 			start = i;
// 			while (!ft_strchr(METACHARACTER, line[i]))
//                 i++;
// 			ptr->f_name = ft_substr(line, start, i - start);
// 			ptr->next = malloc(sizeof(t_redirect));
// 			ptr = ptr->next;
// 			x = 1;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// #include "minishell.h"



// >>        a>>b>>c<t<o>p<<t<<u ls -la

// int main(int c, char **v)
// {
	
// 	int i = 0;
// 	int j = 0;
// 	char *str = "|&;<>()$";
// 	int len = ft_strlen(v[i][j]);
// 	char *arr = (char **)malloc(sizeof(char *) * (len + 1));
// 	while (v[i])
// 	{
// 		j = 0;
// 		while (v[i][j] != '\0')
// 		{
// 			if (v[i][j] == str[j])
// 				arr[i][j++] = str[j++];
// 		}
// 		i++;
// 	}
// }


// int main(int c, char **v)
// {
// 	t_redirect	*ptr;
	
// 	int i = 0;
// 	int j = 0;
// 	char *str = "|&;<>()$";
// 	char *line =  ">>        a>>b>>c<t<o>p<<t<<u ls <t >u -la";
// 	int len = ft_strlen(v[i][j]);
// 	char *arr = (char **)malloc(sizeof(char *) * (len + 1));
// 	while (v[i])
// 	{
// 		j = 0;
// 		while (v[i][j] != '\0')
// 		{
// 			if (v[i][j] == str[j])
// 				arr[i][j++] = str[j++];
// 		}
// 		i++;
// 	}
// }

// int main()
// {
// 	//char *str = {'|' , '&',  ';',  '<',  '>',  '(',  ')',  '$',  '`',  '\'' };
// 	char *str = "123456";
// 	printf("%d\n", ft_strlen(str));
// }


// int main()
// {
// 	int fd;

// 	// fd = open("a", O_RDWR | O_CREAT | O_TRUNC);
// 	// fd = open("a", O_RDWR | O_CREAT | O_APPEND);
// 	if (fd == -1)
// 		perror("open :");
// 	// printf("O_RDONLY = %d\n", O_RDONLY);
// 	// printf("O_CREAT = %d\n", O_CREAT);
// 	// printf("O_TRUNC = %d\n", O_TRUNC);
// 	// close(fd);
// 	// fd = open("Makefile", O_RDONLY);
// 	printf("%d\n", fd);
// 	write(fd, "ab", 2);
// }

// int main()
// {
// 	char *str = "barev >> sdgsdgsdg\n";
// 	int		i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '>')
// 		{
// 			printf("false\n");
// 			i++;
// 		}
// 		else if (str[i] == '>' && str[i + 1] == '>')
// 		{
// 			printf("true\n");
// 			i += 2;
// 		}
// 		i++;
// 	}
// 	// printf("%d\n", ft_isalpha('>'));
// }