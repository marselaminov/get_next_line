#include "get_next_line.h"
#include <fcntl.h>
#include "printf.h"

int	main()
{
	int	fd = open("file", O_RDONLY);
	char	*line;
	int		i;
	while ((i = get_next_line(fd, &line)))
	{
		printf("i = %d %s\n", i, line);
		free(line);
	}
	printf("i = %d %s\n", i, line);
		free(line);
	while(1);
	return (0);
}
