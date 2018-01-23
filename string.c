#include<stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main()
{
    int i,j=0,k=0,count=0;
    char str[200], key[20];
    char str1[100][100];
 
    printf("enter sentence (less than 200 words):");
    scanf("%[^\n]s",str);
 
   
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    str1[k][j]= '\0';
    printf("enter the word to be removed: ");
    scanf("%s", key);
 
 
    for (i=0;i<k+1;i++)
    {
        if (strcmp(str1[i], key) == 0)
        {
            for (j=i;j<k+1;j++)
            strcpy(str1[j], str1[j + 1]);
            k--;
        }
 
    }
    for (i=0;i<k+1;i++)
    {
        printf("%s ", str1[i]);
    }

return 0;
}
