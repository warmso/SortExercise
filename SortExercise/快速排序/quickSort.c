#include "quickSort.h"

void quickSort(int array[],int left,int right)
{
	int i=left;
	int j=right;
	int key=array[i];
	
	while(i<j)
	{
		while(i<j&&k<=array[j])
			j--;
		a[i]=a[j];
		while(i<j&&k>=array[j])
			i++;
		a[j]=a[i];
	}
	a[i]=key;
	quickSort(array,left,i-1);
	quickSort(array,i+1,right);
	
}
