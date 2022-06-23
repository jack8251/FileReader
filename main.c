#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FileLib.h"

int main(void) {
char my_file[] = "text.txt";
long int myfilesize = FileSize(my_file);
printf("%i\n",myfilesize);
return 0;
}
