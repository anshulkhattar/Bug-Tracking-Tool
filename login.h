#include<string.h>
char login()
{
char id[20],pass[20],login[40];
printf("Enter username: ");
scanf("%s",id);
char c=' ';
int l=0;
printf("\n Enter the password [max length 10] : ");
while (l<=9){
    pass[l]=getch();
    c=pass[l];
    if(c==13) break;
    else printf("*");
    l++;
}
pass[l]='\0';
l=0;

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
