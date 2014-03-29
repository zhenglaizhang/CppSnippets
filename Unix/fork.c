#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
	int counter = 0;
	pid_t pid;
	if ((pid = fork()) == 0) {
		printf("I am the child process, my pid is %d\n", getpid());
		counter ++;
	} else if (pid < 0) {
		printf("error in fork\n");
	} else {
		printf("I am parent, my pid is %d\n", getpid());
		counter ++;
	}
	printf("counter = %d\n", counter);
}