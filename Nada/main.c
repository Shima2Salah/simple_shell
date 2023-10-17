#include "shell.h"
int main(void)
{
char demand[100];
char length[130];

while (1)
{
displayPrompt();
userin(demand,sizeof(demand));
executeDemand(demand);
}
return 0;
}
