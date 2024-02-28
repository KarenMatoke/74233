#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NILPTR NULL
int main() {
char *percentPtr = NILPTR;
char ipAddrString[5] = "abcd";
percentPtr = strchr(ipAddrString, '%');
if (percentPtr != NILPTR)
{
*percentPtr = 0;
} else {
printf("Null Pointer");
}
return 0;
}
