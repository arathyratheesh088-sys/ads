#include<stdio.h>
#defin MAX 8
void display(it set[])
{
int i,empty=1;
printf("{");
for(i=0;i<MAX;i++)
{
if(set[i]==1)
{
printf("%",i+1);
empty=0;
}}
if(empty)
printf("Empty");
printf("}\n");
}
void add(int set[],int element)
{
if(element>=1&& element<=MAX

