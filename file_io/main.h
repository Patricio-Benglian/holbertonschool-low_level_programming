#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
#endif
