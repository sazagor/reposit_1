

#include "get_next_line.h"
#include <stdio.h>

static t_data * ft_lstnew_fd(int fd)
{
	t_data *list;

	if (!(list = (t_data*)malloc(sizeof(t_data))))
		return(NULL);
	list->fd = fd;
	ft_bzero(list->buff, BUFF_SIZE+1);
    if (!(list->line = ft_strnew(BUFF_SIZE)))
        return (NULL);
    if (!(list->tmp = ft_strnew(BUFF_SIZE)))
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
        //printf("\n buff = [%s]\n",data->buff);
        printf("\n #2 len = %ld PERED CAT-En   data->line = [%s]\n",ft_strlen(data->line),data->line);
        //tmp = *line;
		if (!(*line = ft_strjoin(*line,ft_strncpy(data->buff,data->line,data->count))))
            return (-1);
        //free (tmp);
		ft_bzero(data->buff,BUFF_SIZE+1);
		data->line = ft_strchr(data->line,'\n');
		data->line++;
        printf("\n #3 len = %ld OSTATOK BUFERA data->line = [%s]\n",ft_strlen(data->line),data->line);
        printf("\n LINE =                         [%s]\n",*line);
		//if (!data->temp)
			//ft_bzero (data->line, ft_strlen(data->line));
		return(1);
	}
	else
	{
        printf("\n #4 len = %ld PERED CAT-read data->line = [%s]\n",ft_strlen(data->line),data->line);
		if (!(*line = ft_strjoin(*line,data->line)))
            return (-1);
		ft_bzero (data->line, BUFF_SIZE);
        printf("\n #5 len = %ld PERED READ-read data->line = [%s]\n",ft_strlen(data->line),data->line);
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
        printf("\n #1 len = %ld READ           data->line = [%s]\n",ft_strlen(data->line),data->line);
	return (2);	
}

int get_next_line(const int fd, char **line)
{
	static t_data	*head;
	t_data 			*data;
    int             f_return;
	
	if (fd < 0 || !line || read (fd, head->buff, 0) == -1)
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
    printf("\n N E W     T U R N LINE = [%s] \n",*line);
	while (fd > -1) 
	{
		//if (!data->line)
			//if (!(data->line = ft_strnew(BUFF_SIZE)))
				//return (-1);
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


		
	
	
