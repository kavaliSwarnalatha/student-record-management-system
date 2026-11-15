#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

typedef struct student
{
        int rollno;
        char name[20];
        float percentage;
        struct student *next;
}SLL;

void std_add(SLL **);
void std_del(SLL **);
void std_show(SLL *); 
void std_mod(SLL *); 
void std_save(SLL *); 
void std_sort(SLL *); 
void std_delall(SLL **);
void std_rev(SLL *); 
int countNode(SLL *); 

