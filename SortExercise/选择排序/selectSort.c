//
//  selectSort.c
//  SortExercise
//
//  Created by Howard on 2018/3/19.
//

#include "selectSort.h"

void selectSort(int array[],int lenth,int isMoreBigger)
{
    int i=0;
    int j=0;
    int tmp;
    int tag=0;
    
    if(lenth==1)
        return ;
    
    if (isMoreBigger==1) {
        
        for(i=0;i<lenth-1;i++)
        {
            tag=i;
            for(j=i+1;j<lenth;j++)
                if(array[tag]<array[j])
                    tag=j;
        
            tmp = array[tag];
            array[tag] = array[i];
            array[i] = tmp;
        
        }
    }
    else
        for(i=0;i<lenth-1;i++)
        {
            tag=i;
            for(j=i+1;j<lenth;j++)
                if(array[tag]>array[j])
                    tag=j;
            
            tmp = array[tag];
            array[tag] = array[i];
            array[i] = tmp;
            
        }
        
}
