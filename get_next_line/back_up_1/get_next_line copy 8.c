#include "get_next_line.h"

static t_data * ft_lstnew_fd(int fd)
{
	t_data *list;

	if (!(list = (t_data*)malloc(sizeof(t_data))))
		return(NULL);
	list->fd = fd;
    list->buff_all = NULL;
    list->next = NULL;
	return (list);
}

static t_data  *ft_list_swipe(t_data *list, int fd)
{
    if (list)
    {
        while (fd != list->fd && list->next)
            list = list->next;
        if (!(list->next) && list->fd != fd)
        {
            if(!(list->next = ft_lstnew_fd(fd)))
                return (NULL);
            return (list->next);
        }
    }
	if (!list)
		if (!(list = ft_lstnew_fd(fd)))
			return (NULL);
	return (list);
}
static int part_1_2 (char **line, t_data *data,int flag)
{
    char buff_all[BUFF_SIZE+1];
    char *tmp;
    // t_data *temp;
    // t_data *temp_2;
    
	ft_bzero (buff_all, BUFF_SIZE+1);
	if (!flag)
	{
		if (!(tmp = ft_strsub (data->buff_all, 0, data->count)))
            return (-1);
        *line = tmp;
        ft_memmove(&data->buff_all[0],&data->buff_all[data->count+1],ft_strlen(data->buff_all)-data->count-1);
		ft_bzero(&data->buff_all[ft_strlen(data->buff_all)-data->count-1],data->count+1);
		return(1);
	}
    // temp = data;  // data is head
    // if (temp->fd == fd)
    // {
    //     temp_2 = temp->next;
    //     temp = temp_2;
    // }
    // else
    // {
    //     while (temp->next->fd != fd)
    //         temp = temp->next;
    //     temp_2 = temp->next;
    //     temp->next = temp_2->next;
    // }
    return(0);       
}

static int part_1_1 (char **line, t_data *data)
{
    char buff_all[BUFF_SIZE+1];
    char *tmp;
    
    if (!(data->ret = read (data->fd, buff_all, BUFF_SIZE)))
    {
        if (!(**line))
            return (0); // sent head
        else
            return(1);
    }
    if (data->ret < 0)
        return (-1);
    buff_all[data->ret] = '\0';
    if (!(tmp = ft_strjoin(data->buff_all, buff_all)))
        return(-1);
    free (data->buff_all);
    data->buff_all = tmp;
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
	if (!(data = ft_list_swipe (data,fd)))
		return (-1);
	data->retur = 2;
	while (fd > -1) 
	{
		data->count = ft_strichr(data->buff_all,'\n');
		if (data->count >= 0)
			if ((data->retur = part_1_2(line,data,0)) < 2)
				return(data->retur);
		if (data->count < 0) 
			if ((data->retur = part_1_1(line,data)) < 2)
				return(data->retur);
	}
	return (-1);
}


		
	
	
