#include<conio.h>
#include<stdio.h>
#define MAX 20 
int main() 
{ 
int arr[MAX],i,j,k,n; 
//clrscr(); 
printf ("\nEnter the number of elements : "); 
scanf ("%d",&n); 
for (i = 0; i < n; i++) 
{ 
printf ("\nEnter element %d : ",i+1); 
scanf ("%d", &arr[i]); 
} 
printf ("\nUnsorted list is :\n"); 
for (i = 0; i < n; i++) 
printf ("%d ", arr[i]); 
printf ("\n"); 
/*Insertion sort*/ 
for(j=1;j < n;j++) 
{ 
k=arr[j]; /*k is to be inserted at proper place*/ 
for(i=j-1;i>=0 && k<arr[i];i--) 
arr[i+1]=arr[i]; 
arr[i+1]=k; 
printf ("\nPass %d, Element inserted in proper place: %d\n",j,k); 
for (i = 0; i < n; i++) 
printf ("%d ", arr[i]); 
printf ("\n"); 
} 
printf ("\nSorted list is :\n");
printf ("%d ", arr[i]);  
return 0;
}
