#ifndef _HELPERS_H
#define _HELPERS_H 1

#include <stdio.h>
#include <stdlib.h>

/*
 * Macro de verificare a erorilor
 * Exemplu:
 *     int fd = open(file_name, O_RDONLY);
 *     DIE(fd == -1, "open failed");
 */

#define DIE(assertion, call_description)	\
	do {									\
		if (assertion) {					\
			fprintf(stderr, "(%s, %d): ",	\
					__FILE__, __LINE__);	\
			perror(call_description);		\
			exit(EXIT_FAILURE);				\
		}									\
	} while(0)

#define INPUT_ERR "Wrong input! Usage: (un)subscribe <topic> <SF>"
#define SF_ERR "Please use a SF equal to 0 or 1!"
#define BUFLEN		1553	// dimensiunea maxima a calupului de date
#define MAX_CLIENTS	500		// numarul maxim de clienti in asteptare
#define STRINGLEN   1500    // dimensiunea maxima a unui string

#endif
