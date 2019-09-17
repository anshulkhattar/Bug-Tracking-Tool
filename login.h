#include<string.h>
char login()
{
char id[20],pass[20],login[40];
printf("Enter username: ");
scanf("%s",id);
printf("Enter password: ");
scanf("%s",pass);
strcpy(login,id);
strcat(login,"-");
strcat(login,pass);
strcat(login,"\n");

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
