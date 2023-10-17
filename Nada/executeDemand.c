#include "shell.h"
/**
*executeDemand-function to execute the processes
*demand:command input
*Return:Nothing
*/
void executeDemand(const char* demand)
{
    //using fork() to create child processes
     //pid_t is a data type essential for tracking processes
     pid_t chpid_ID = fork();
     //if there is error
      if (chpid_ID  == -1)
      {
      //print error function
       perror ("fork");
       exit(EXIT_FAILURE); 
      }
      //all is okay
      else if (chpid_ID == 0)
      {
      char d_path[300];
     //used to print formatted —>Data to Buffer
     //need to check→if it is in alx manual func or not 
      snprintf(d_path, sizeof(d_path),"/bin/%s",demand);
      char *argv[] = {demand, NULL};
      execve(d_path,argv,NULL);
      perror ("execve");
      exit(EXIT_FAILURE);
     }
     else 
    {
     wait(NULL);
    }
}
