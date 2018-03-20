//
//  insertSort.c
//  SortExercise
//
//  Created by Howard on 2018/3/19.
//

#include "insertSort.h"
void insertSort(int array[],int lenth,int isMoreBigger)
{
    int i,j,temp;
    for(i=lenth;i>0;i--)
    {
        for(j=i-1;j>0;j--)
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
    }
}
