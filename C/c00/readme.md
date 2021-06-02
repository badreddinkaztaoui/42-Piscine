## C00 problems :

---

[Click here to see the Subject](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/c00.pdf)

---

| C00 | Problems                 | Solutions                                                                                                                                     | Commented version                                                                                             |
|---  |---                       |---                                                                                                                                            |---                                                                                                            |
|ex00 |ft_putchar                |[ft_putchar](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/ex00(ft_putchar)/ft_putchar.c)                                             |[fullcode00](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/ex00(ft_putchar)/fullcode.c)               |
|ex01 |ft_print_alphabet         |[ft_print_alphabet](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/ex01(ft_print_alphabet)/ft_print_alphabet.c)                        |[fullcode01](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/ex01(ft_print_alphabet)/fullcode.c)        |
|ex02 |ft_print_reverse_alphabet |[ft_print_reverse_alphabet](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/ex02(ft_print_reverse_alphabet)/ft_print_reverse_alphabet.c)|[fullcode02](https://github.com/alaamimi/42-Piscine/blob/main/C/c00/ex02(ft_print_reverse_alphabet)/fullcode.c)|
|ex03 |ft_print_numbers          |[ft_print_numbers]()|[fullcode03]()|
|ex04 |ft_is_negative            |[ft_is_negative]()|[fullcode04]()|
|ex05 |ft_print_comb             |[ft_print_comb]()|[fullcode05]()|
|ex06 |ft_print_comb2            |[ft_print_comb2]()|[fullcode06]()|
|ex07 |ft_putnbr                 |[ft_putnbr]()|[fullcode07]()|
|ex08 |ft_print_combn            |[ft_print_combn]()|[fullcode08]()|

---

## LET'S GOOOOOOOOOOOO !

---

</p>
<p align="center">
<img src="https://i1.wp.com/twofoottalk.com/wp-content/uploads/2020/02/giphy-7.gif?resize=480%2C270&ssl=1" width=1200>
<p/>

---

### --------------------------------------[THE FULLCODE VERSION IS COMMENTED]---------------------------------------

## :information_source: ex00/

---

### :dart: Task :

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/00.jpg" width=1200>
<p/>

---

#### :hammer: Function prototype:
```c

#include <unistd.h>

void	ft_print_alphabet(void) /* Define a function that will print alphabets */
{
	char	ltr; /* Declaration of a variable that will store an ascii value*/

	ltr = 'a'; /* initialize my variable with character 'a' */
	while (ltr <= 'z') /* We want to print a through z, abcde...z so we use while loop to repeat steps
						first character is 'a' and the last is 'z', so technically reaching z is the stop condition
						*/
	{
		write(1, &ltr, 1); /*write character by character*/
		ltr++; /* Iteration by 1 step at a time */
	}
}
```
---

### :wrench: :beetle: Test and debug:


```c
int	main(void) /* Entry point of a program written in C */
{
	printf("-----\n"); /* Forbiden function!! */
		printf("First output is : \n"); /* Message */
	ft_putchar('@'); /* Print a character */
	printf("\n-----\n");
		printf("Second output is : \n");
	ft_putchar('A');
	printf("\n-----\n");
		printf("Third output is : \n");
	ft_putchar('0');
		printf("\n-----\n");
	return EXIT_SUCCESS; /* Return 0 instead*/
}
```

---

## :information_source: ex01/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/01.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

void	ft_print_alphabet(void) /* Define a function that will print alphabets */
{
	char	ltr; /* Declaration of a variable that will store an ascii value*/

	ltr = 'a'; /* initialize my variable with character 'a' */
	while (ltr <= 'z') /* We want to print a through z, abcde...z so we use while loop to repeat steps, the
	first character is 'a' and the last is 'z', so technically reaching z is the stop condition */
	{
		write(1, &ltr, 1); /* Write character by character */
		ltr++; /* Iteration by 1 step at a time */
	}
}

```
---

### :wrench: :beetle: Test and debug:


```c


int	main(void) /* Entry point */
{
	printf("--------------------------------------------\n");
	printf("Printing alphabets in the standard output: \n\n");
	ft_print_alphabet(); /* Function call */
	printf("\n\n--------------------------------------------\n");
	return (EXIT_SUCCESS); /* Terminate instructions and return 0 */
}

```

---

## :information_source: ex02/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/02.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

void	ft_print_reverse_alphabet(void) /* Define a function that will reverse alphabets */
{
	char	ltr; /* Declaration of a variable that will contain a character */

	ltr = 'z'; /* Initialize my variable with z */
	while (ltr >= 'a') /* Loop through ascii values till the stop condition */
	{
		write(1, &ltr, 1); /* Write evert character passed as parameter after checking the condition */
		ltr--; /* Decrement till the condition is satisfied */
	}
}


```
---

### :wrench: :beetle: Test and debug:


```c

int	main(void)
{
	printf("----------------------------------\n");
	printf("Print reversed aphabets in the standard output : \n\n");
	ft_print_reverse_alphabet();
	printf("\n\n----------------------------------\n");
	return (EXIT_SUCCESS);
}

```

---
## :information_source: ex03/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/03.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>


```
---

### :wrench: :beetle: Test and debug:


```c

```

---
## :information_source: ex04/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/04.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

```
---

### :wrench: :beetle: Test and debug:


```c

```

---
## :information_source: ex05/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/05.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

```
---

### :wrench: :beetle: Test and debug:


```c

```

---
## :information_source: ex06/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/06.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

```
---

### :wrench: :beetle: Test and debug:


```c

```

---
## :information_source: ex07/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/07.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

```
---

### :wrench: :beetle: Test and debug:


```c

```

---
## :information_source: ex08/

---

### :dart: Task:

</p>
<p align="center">
<img src="https://github.com/alaamimi/42-Piscine/blob/main/C/c00/Ressources/08.jpg" width="1200">
<p/>

---
#### :hammer: Function prototype:
```c

#include <unistd.h>

```
---

### :wrench: :beetle: Test and debug:


```c

```

---