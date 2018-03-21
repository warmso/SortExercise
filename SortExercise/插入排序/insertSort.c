//
//  insertSort.c
//  SortExercise
//
//  Created by Howard on 2018/3/19.
//

#include "insertSort.h"

void sortInsert(int array[],int lenth,int isMoreBigger)
{
    int i;
    int j;
    int temp;
    
    if(!array||!lenth)
        return ;
    
    if(isMoreBigger==0)
    {
        for(i=0;i<lenth;i++)
            for(j=i;j>0;j--)
            {
                if(array[j]<array[j-1])
                {
                    temp=array[j];
                    array[j]=array[j-1];
                    array[j-1]=temp;
                }
            }
    }
    else
    {
        for(i=0;i<lenth;i++)
            for(j=i;j>0;j--)
            {
                if(array[j]>array[j-1])
                {
                    temp=array[j];
                    array[j]=array[j-1];
                    array[j-1]=temp;
                }
            }
    }
}

int main()
{
    int array[100];
    char s;
    int i;
    int lenth=0;
    for(i=0;i<100&&s!='\n';i++)
    {
        scanf("%d",array+i);
        s=getchar();
        lenth++;
    }
    
    sortInsert(array,lenth,1);
    
    for(i=0;i<lenth;i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}

