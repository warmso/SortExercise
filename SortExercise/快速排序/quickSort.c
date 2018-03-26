#include "quickSort.h"

void quickSort(int array[],int left,int right)
{
    if(left>=right)
        return;
    
    int i=left;
	int j=right;
	int key=array[left];
	
    
    
	while(i<j)
	{
		while(i<j&&key<=array[j])
			j--;
		array[i]=array[j];
		while(i<j&&key>=array[i])
			i++;
		array[j]=array[i];
	}
	array[i]=key;
    
	quickSort(array,left,i-1);
	quickSort(array,i+1,right);
}
