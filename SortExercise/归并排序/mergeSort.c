//
//  mergeSort.c
//  SortExercise
//
//  Created by Howard on 2018/3/26.
//

#include "mergeSort.h"

void merge(int array[],int array2[],int left,int right)
{

    int i;
    int j,k;
    if(right>left)
    {
        merge(array,array2, left, (right+left)/2);
        merge(array,array2, (right+left)/2+1, right);
    }
    else
        return;

    k=left;
    j=(right+left)/2+1;
    i=left;
    while(i<=(right+left)/2&&j<=right)
    {
        if(array[i]<array[j])
        {
            array2[k]=array[i];
            i++;
        }
        else
        {
            array2[k]=array[j];
            j++;
        }
        k++;
    }
    while(i != (right+left)/2+1)
        array2[k++] = array[i++];
    while(j != right+1)
        array2[k++] = array[j++];
    
    for(i=left; i<=right; i++)
        array[i] = array2[i];
}

void mergeSort(int array[],int left,int right)
{
    int array2[right+1];
    merge(array, array2, left, right);
}

