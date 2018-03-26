//
//  main.m
//  SortExercise
//
//  Created by Howard on 2018/3/19.
//

#include <stdio.h>
#include "gulugulu.h"
#include "selectSort.h"
#include "quickSort.h"

int main(int argc, const char * argv[]) {
   
    // insert code here...
    int a[100];
    int i=0;
    int lenth=0;
    char s=0;
    for(i=0;i<100&&s!='\n';i++)
    {
        scanf("%d",a+i);
        s=getchar();
        lenth++;
    }
//    guluguluSort(a,lenth,1);
//    selectSort(a,lenth,0);
  	quickSort(a,0,lenth);
    
    for(i=0;i<lenth;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
