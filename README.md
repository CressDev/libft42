## Descripción

**Libft** es una biblioteca de C que reimplementa funciones de la biblioteca estándar de C, además de añadir funciones adicionales útiles. Este proyecto es el primer proyecto de 42 School y establece las bases para todos los proyectos futuros, enseñando la gestión de memoria, manipulación de strings y estructuras de datos.

## Características

- Funciones de libft: Reimplementación de funciones estándar de C
- Gestión de listas enlazadas: Implementación completa con funciones bonus
- Gestión robusta de memoria: Sin memory leaks
- Compatibilidad total: Comportamiento idéntico a las funciones originales
- Optimización de rendimiento: Implementaciones eficientes

--Funciones Implementada

Funciones de caracteres
- ft_isalpha: Verifica si un carácter es alfabético
- ft_isdigit: Verifica si un carácter es un dígito
- ft_isalnum: Verifica si un carácter es alfanumérico
- ft_isascii: Verifica si un carácter está en el conjunto ASCII
- ft_isprint: Verifica si un carácter es imprimible
- ft_toupper: Convierte un carácter a mayúscula
- ft_tolower: Convierte un carácter a minúscula

Funciones de strings
- ft_strlen: Calcula la longitud de una string
- ft_strchr: Busca un carácter en una string
- ft_strrchr: Busca un carácter en una string (desde el final)
- ft_strncmp: Compara dos strings hasta n caracteres
- ft_strnstr: Busca una substring en una string
- ft_strlcpy: Copia una string de forma segura
- ft_strlcat: Concatena strings de forma segura

Funciones de memoria
- ft_memset: Llena un bloque de memoria con un valor
- ft_bzero: Pone a cero un bloque de memoria
- ft_memcpy: Copia un bloque de memoria
- ft_memmove: Mueve un bloque de memoria (solapamiento seguro)
- ft_memchr: Busca un byte en un bloque de memoria
- ft_memcmp: Compara dos bloques de memoria

Funciones de conversión y utilidad
- ft_atoi: Convierte una string a entero
- ft_calloc: Asigna memoria inicializada a cero
- ft_strdup: Duplica una string

Manipulación de strings
- ft_substr: Extrae una substring de una string
- ft_strjoin: Concatena dos strings
- ft_strtrim: Elimina caracteres específicos del inicio y final
- ft_split: Divide una string usando un delimitador
- ft_itoa: Convierte un entero a string
- ft_strmapi: Aplica una función a cada carácter de una string
- ft_striteri: Aplica una función a cada carácter (con índice)

Funciones de salida
- ft_putchar_fd: Imprime un carácter en un file descriptor
- ft_putstr_fd: Imprime una string en un file descriptor
- ft_putendl_fd: Imprime una string con salto de línea
- ft_putnbr_fd: Imprime un número en un file descriptor

Parte Bonus - Listas enlazadas
- ft_lstnew: Crea un nuevo nodo
- ft_lstadd_front: Añade un nodo al principio
- ft_lstadd_back: Añade un nodo al final
- ft_lstsize: Cuenta el número de nodos
- ft_lstlast: Obtiene el último nodo
- ft_lstdelone: Elimina un nodo
- ft_lstclear: Elimina y libera toda la lista
- ft_lstiter: Aplica una función a cada nodo
- ft_lstmap: Crea una nueva lista aplicando una función
