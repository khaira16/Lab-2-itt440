#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void  childTask(){
	char userName[100];
	printf("Enter your name:");
	scanf("%s",userName);
	printf("Your name is %s\n", userName);
}
void parentTask(){
	printf("Job is done\n");
}

int main(void){
        for(int i= 1; i < 5; i++)
 {
                pid_t pid = fork();

                if(pid ==0) {
                        childTask();
			return EXIT_SUCCESS;
                }
		else{
                        wait(NULL);
		}
}
	parentTask();
	return EXIT_SUCCESS;
}
