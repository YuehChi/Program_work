#include<windows.h>
#include<stdio.h>
void slowprint(char* string, int sleeptime) {
    int i = 0;
    while(string[i] != '\0'){ // while the string not terminate  
		printf("%c", string[i]);//print the word
        Sleep(sleeptime); //let the system sleep before print the next word
    	i++;// move to the next word
    }
}
