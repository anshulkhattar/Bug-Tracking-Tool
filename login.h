#include<string.h>
#include <termios.h>
#include <stdio.h>
#include<stdlib.h>

static struct termios old, new;

void initTermios(int echo) {
    tcgetattr(0, &old);
    new = old;
    new.c_lflag &= ~ICANON;
    new.c_lflag &= echo ? ECHO : ~ECHO;
    tcsetattr(0, TCSANOW, &new);
}

void resetTermios(void) {
    tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo) {
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}

char getch(void) {
    return getch_(0);
}
char login()
{
char id[20],pass[6],pas[7],login[40];
int m=0,l=0;

printf("Enter username: ");
scanf("%s",id);
fflush(stdin);
printf("Enter password of length 6: ");

	while(l<7)
	{
	 
	pass[l]=getch();	
	
	
	
	
	l++;
	}
	pass[0]=' ';
	//printf("%s",pass);
	

strcpy(login,id);
strcat(login,"-");
strcat(login,pass);
strcat(login,"\n");
//printf("%s",login);
char filename[] = "idpass.txt";
  FILE *file = fopen ( filename, "r" );

  if (file != NULL) {
    char line [1000];
    while(fgets(line,sizeof line,file)!= NULL) {
	if(strcmp(login,line)==0)
	{	
		fclose(file);		
		return 's';}
	else
		{	
		fclose(file);		
		return 'f';}
	
   
} 
  }
  else {
    perror(filename);
  }
}
