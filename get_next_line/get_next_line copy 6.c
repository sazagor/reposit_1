

#include "get_next_line.h"

static t_data * ft_lstnew_fd(int fd)
{
	t_data *list;

	if (!(list = (t_data*)malloc(sizeof(t_data))))
		return(NULL);
	list->fd = fd;
	ft_bzero(list->buff, BUFF_SIZE+1);
    if (!(list->line = ft_strnew(BUFF_SIZE)))
        return (NULL);
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
        data->tmp = *line;
		if (!(*line = ft_strjoin(*line,ft_strncpy(data->buff,data->line,data->count))))
            return (-1);
        free (data->tmp);
		ft_bzero(data->buff,BUFF_SIZE+1);
        //data->tmp = data->line;
      	//data->tmp_2 = ft_strchr(data->line,'\n');
        //data->tmp_2++;
        //data->line = ft_strdup(data->tmp_2);
        //free (data->tmp);
        data->line = ft_strchr(data->line,'\n');
        if (ft_strlen(data->line))
            data->line++;
		return(1);
	}
	else
	{
        data->tmp = *line;
		if (!(*line = ft_strjoin(*line,data->line)))
            return (-1);
        free (data->tmp);
		ft_bzero (data->line, BUFF_SIZE);
		if (!(data->ret = read (data->fd, data->line, BUFF_SIZE)))
		{
			if (!(**line))
				return (0);
			else
				return(1);
		}
		if (data->ret < 0)
				return (-1);
	}
    data->line[data->ret] = '\0';
	return (2);	
}

int get_next_line(const int fd, char **line)
{
	static t_data	*head;
	t_data 			*data;
    int             f_return;
    char            verif[1];
    char            *tmp;
	
    if (fd < 0 || !line || read (fd, verif, 0) == -1)
        return(-1);
    if (!(head))
        if(!(head = ft_lstnew_fd(fd)))
            return (-1);
	data = head;
	if (!(data = ft_list_plus (data,fd)))
		return (-1);
	f_return = 2;
    //tmp = *line;
	//if(!(*line = ft_strnew(BUFF_SIZE)))
		//return (-1);
   // free (tmp);
	while (fd > -1) 
	{
		data->count = ft_strchr(data->line,'\n') - data->line;
		if (data->count < BUFF_SIZE +1 && data->count >= 0)
			if ((f_return = part_1_2(line,data,0)) < 2)
				return(f_return);
		if (!(data->count < BUFF_SIZE +1 && data->count >= 0)) 
			if ((f_return = part_1_2(line,data,1)) < 2)
				return(f_return);    // под каждый ретерн функция отчистки памяти
	}
	return (-1);
}


		
	
	
