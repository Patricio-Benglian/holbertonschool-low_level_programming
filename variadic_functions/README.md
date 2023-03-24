EVERY TIME va_arg is called, it iterates to the next argument. therefore, comparisons such as 
if (va_arg != NULL)
	printf("%s", va_arg(list, type)
breaks the system because va_arg will go to the next argument in the IF and then again in the printf, therefore jumping two spaces instead of one.
