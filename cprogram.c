//This is a C program which will send and intercept the SIGQUIT signal
//The intercepted signal will cause a printed statement to the terminal
//Code starts here:

#include <signal.h>
#include <stdio.h>
#include <strings.h>

//Singal handler for SIGQUIT
void sigquit_handler(int signal) {
  if (signal == SIGQUIT) {
    printf("\nIntercepted SIGQUIT!\n");
  }
}

void set_signal_action(void) {
  struct sigaction      act;  //Declaring sigaction structure

  //Set all of the structure's bits to 0
  bzero(&act, sizeof(act));
  //Setting the handler as the default action
  act.sa_handler = &sigquit_handler;
  //Apply the action in the structure to the SIGQUIT signal
  sigaction(SIGQUIT, &actm NULL);
}

int main(void) {
  //Change SIGQUIT action
  set_signal_action();
  //infinte loop to keep the program running as long as needed
  while(1) {
    continue;
  }
  return (0);
}
