

#include "get_next_line.h"

static t_data * ft_lstnew_fd(int fd)
{
	t_data *list;

	if (!(list = (t_data*)malloc(sizeof(t_data))))
		return(NULL);
	list->fd = fd;
	ft_bzero(list->buff, BUFF_SIZE);
	list->line = NULL;
	list->next = NULL;
	return (list);
}

static t_data *ft_list_plus (t_data *temp,int fd)
{
	if (!temp)
	{
		if (!(temp = ft_lstnew_fd(fd)))
			return (NULL);
	}
	else
	{
		while (fd != temp->fd && temp->next)
			temp = temp->next;
		if (!(temp->next) && temp->fd != fd)
		{
			if(!(temp->next = ft_lstnew_fd(fd)))
				return (NULL);
			return(temp->next);
		}
	}
	return(temp);
}

static int part_1_2 (char **line, t_data *data,int flag)
{
	if (!flag)
	{
		*line = ft_strjoin(*line,ft_strncpy(data->buff,data->line,data->temp));
		ft_bzero(data->buff,BUFF_SIZE);
		data->line = ft_strchr(data->line,'\n');
		data->line++;
		if (!data->temp)
			ft_bzero (data->line, ft_strlen(data->line));
		return(1);
	}
	else
	{
		*line = ft_strjoin(*line,data->line);
		ft_bzero (data->line, ft_strlen(data->line));
		if (!(data->eof = read (data->fd, data->line, BUFF_SIZE)))
		{
			if (!(**line))
				return (0);
			else
				return(1);
		}
		if (data->eof < 0)
				return (-1);
	}
	return (2);	
}

int get_next_line(const int fd, char **line)
{
	static t_data	*head;
	t_data 			*data;
    int             f_return;
	
	if (fd < 0 || fd == 1 || fd == 2)
		return(-1);
	if (!(head))
				if(!(head = ft_lstnew_fd(fd)))
						return (-1);
	data = head;
	if (!(data = ft_list_plus (data,fd)))
		return (-1);
	f_return = 2;
	if(!(*line = ft_strnew(BUFF_SIZE)))
		return (-1);
	while (fd > -1) 
	{
		if (!data->line)
			if (!(data->line = ft_strnew(BUFF_SIZE)))
				return (-1);
		data->temp = ft_strchr(data->line,'\n') - data->line;
		if (data->temp < BUFF_SIZE +1 && data->temp >= 0)
			if ((f_return = part_1_2(line,data,0)) < 2)
				return(f_return);
		if (!(data->temp < BUFF_SIZE +1 && data->temp >= 0)) 
			if ((f_return = part_1_2(line,data,1)) < 2)
				return(f_return);    // под каждый ретерн функция отчистки памяти
	}
	return (-1);
}


		
	
	
