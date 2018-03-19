//
//  gulugulu.c
//  SortExercise
//
//  Created by Howard on 2018/3/19.
//

#include "gulugulu.h"

void guluguluSort(int array[],int lenth,int isMoreBigger)
{
    int i,j,tmp,flag=1;
    if(isMoreBigger==0)
    {
        for(i=0;i<lenth&&flag;i++)
        {
            flag=0;
            for(j=0;j<lenth-1;j++)
            {
                if(array[j]>array[j+1])
                {
                    tmp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=tmp;
                    flag=1;
                }
            }
        }
    }
    else
    {
        for(i=0;i<lenth&&flag;i++)
        {
            flag=0;
            for(j=0;j<lenth-1;j++)
            {
                if(array[j]<array[j+1])
                {
                    tmp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=tmp;
                    flag=1;
                }
            }
        }
    }
}
