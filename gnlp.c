
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:44:24 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/10/26 15:44:30 by pgarcia-         ###   ########.fr       */
/*                                                                            */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int main(argv, argc)
{

ESTE MAIN SOLO ES PARA JUGAR CON ARGV Y ARGC SALIDA STDIN

}

int	main(argc, argv)
{
	int argc;
	char *argv[];

	if(argc!=2)
	{
		printf("Ha olvidado su nombre.\n");
		exit(1);
	}
	printf("Hola %s", argv[1]);
}
*/

/*

VAMOS A PROBAR FGETS

int main()
{
 	FILE *archivo;
 	
 	char caracteres[10];
	int cnt;

	cnt = 0;
 	archivo = fopen("archivo1.txt","r");
 	
 	if (archivo == NULL)
        exit(1);
 	else
    {
 	    printf("\nEl contenido del archivo de prueba es: \n\n");
 	    while (feof(archivo) == 0)
 	    {
 	        printf("%s",caracteres);
 	        fgets(caracteres, 10, archivo);

				Depende del numero de caracteres que queramos almacenar realizara el bucle x veces
			 	es decir, si yo pongo 10 y mi archivo tiene 20 caracteres + el salto de linea, tendremos 
				un total de 3 vueltas.
				Es decir, 1 vuelta por cada salto de linea o por cada vez que llegamos al Max de caracteres
				que le damos a nuestro Buff.
		
			cnt++;
 	    }
        printf("\n%i\n", cnt);
        system("PAUSE");
    }
    
    fclose(archivo);
	return 0;
}
*/

/* MI GET_N_L */

char *get_next_line(int fd)
{
	/* Trabajaremos con variables estaticas "static" para almacenar el valor de lo que vamos 
	leyendo hasta llegar al salto de linea, una vez llegados a ese punto gnl debe volver a ejecutarse
	(esto sera fuera de la función) hasta encontrar el fin del archivo
	y es en ese punto donde debe devolver todo, incluyendo el \n del final */

	static *char buff;
	size_t size;
	ssize_t = cnt;
	
	buff = (char *)malloc(sizeof(char));
	if (buff == 0)
		return(0);
	cnt = read(fd, buff, size);

	

}i