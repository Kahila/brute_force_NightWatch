/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:28:51 by akalombo          #+#    #+#             */
/*   Updated: 2020/04/01 10:40:15 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
	int     fd;
	char    *line;
	int     x = 1;
    int     i = 0;
	int		time = 101;
	if (argc > 1)
	{
        printf("module.exports = {\n\t");
        printf("'test case 1'(browser){\n\t\t");
        printf("const mainQueryInputSelector = 'input[name = \"%s\"]';\n\t\t", argv[3]);
        printf("const userTest = \"%s\";\n\t\t", argv[2]);
        printf("browser\n\t\t\t");
        printf(".url('%s')\n\n\t\t\t", argv[1]);
	    fd = open(argv[6], O_RDONLY);
		while (x == 1)
		{
			x = get_next_line(fd, &line);
			if (x > 0)
			{
		//		printf("%s\n", line);
            if (i > 5000)
            {
                printf(".waitForElementVisible('.panel-heading')\n\t\t\t");
                printf(".setValue(mainQueryInputSelector, userTest)\n\t\t\t");
                printf(".setValue('input[name = \"%s\"]', \"%s\")\n\t\t\t", argv[4], line);
                printf(".click('%s')\n\n\t\t\t", argv[5]);
                if ((i % 1000) == 0)
                   printf("browser\n\t\t\t");
                if (i == 10000)
                    break;
            }
            i++;
				if (*line)
					free(line);
			}
	    }
		free(line);
		close(fd);
	}printf("\n\t}\n}\n");
	return (0);
}
