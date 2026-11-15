#include"student.h"

void std_delall(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("records not found\n");
                return ;
        }
        SLL *del=*ptr;
        int c=1;
        while(del)
        {
                *ptr=del->next;
                printf("node position:%d deleted\n",c++);
                free(del);
                del=*ptr;
        }
        printf("all records deleted\n");

}

