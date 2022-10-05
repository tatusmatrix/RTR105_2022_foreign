//https://cplusplus.com/reference/cstdio/printf/
// ...

/* printf example */
#include <stdio.h>

int main()
{
   printf ("Characters (as symbols): %c %c \n", 'a', 65);
   printf ("Characters (as dec numbers): %d %d \n", 'a', 65);
   printf ("Characters (as oct numbers): %o %o \n", 'a', 65);
   printf ("Characters (as oct numbers with special notation): %#o %#o \n", 'a', 65);
   printf ("Characters (as hex numbers): %x %x \n", 'a', 65);
   printf ("Characters (as hex numbers with special notation): %#x %#x \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.3f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}

