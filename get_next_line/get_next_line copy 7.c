#include "get_next_line.h"

static t_data * ft_lstnew_fd(int fd)
{
	t_data *list;

	if (!(list = (t_data*)malloc(sizeof(t_data))))
		return(NULL);
	list->fd = fd;
    if (!(list->buff_all = ft_strnew(BUFF_SIZE)))
        return (NULL);
    list->next = NULL;
	return (list);
}

static t_data *ft_list_plus (t_data *list,int fd)
{
    t_data *temp;
    
	if (!list)
    {
        temp = list;
		if (!(list = ft_lstnew_fd(fd)))
			return (NULL);
    }
	else
	{
		while (fd != list->fd && list->next)
			list = list->next;
		if (!(list->next) && list->fd != fd)
		{
            temp = list;
			if(!(list->next = ft_lstnew_fd(fd)))
				return (NULL);
			return(list->next);
		}
	}
	return(list);
}

static int part_1_2 (char **line, t_data *data,int flag)
{
    char *tmp;
    char buff_all[BUFF_SIZE+1];
    char *tmp_2;
    
	ft_bzero (buff_all, BUFF_SIZE+1);
	if (!flag)
	{
        tmp = *line;
		if (!(*line = ft_strjoin(*line,ft_strncpy(buff_all,data->buff_all,data->count))))
            return (-1);
        ft_memmove(&data->buff_all[0],&data->buff_all[data->count+1],ft_strlen(data->buff_all)-data->count-1);
		ft_bzero(&data->buff_all[ft_strlen(data->buff_all)-data->count-1],data->count+1);
		return(1);
	}
	else
	{
        tmp = *line;
    	if (!(*line = ft_strjoin(*line,data->buff_all)))
                return (-1);
        ft_bzero(data->buff_all, ft_strlen(data->buff_all));
		if (!(data->ret = read (data->fd, buff_all, BUFF_SIZE)))
		{
			if (!(**line))
				return (0);
			else
				return(1);
		}
		if (data->ret < 0)
				return (-1);
	}
    buff_all[data->ret] = '\0';
    tmp_2 = data->buff_all;
    data->buff_all = ft_strdup(buff_all);
	return (2);	
}

int get_next_line(const int fd, char **line)
{
	static t_data	*head;
	t_data 			*data;
    char            verif[1];
	
    if (fd < 0 || !line || read (fd, verif, 0) == -1)
        return(-1);
    
    if (!(head))
        if(!(head = ft_lstnew_fd(fd)))
            return (-1);
    data = head;
	if (!(data = ft_list_plus (data,fd)))
		return (-1);
	data->retur = 2;
	*line = NULL;
	while (fd > -1) 
	{
		data->count = ft_strchr(data->buff_all,'\n') - data->buff_all;
		if (data->count < BUFF_SIZE +1 && data->count >= 0)
			if ((data->retur = part_1_2(line,data,0)) < 2)
				return(data->retur);
		if (!(data->count < BUFF_SIZE +1 && data->count >= 0)) 
			if ((data->retur = part_1_2(line,data,1)) < 2)
				return(data->retur);    // под каждый ретерн функция отчистки памяти
	}
	return (-1);
}


		
	
	
