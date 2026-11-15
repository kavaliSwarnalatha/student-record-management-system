#include"student.h"

void std_rev(SLL *ptr)
{
        if(ptr)
        {
                std_rev(ptr->next);
                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
        }
}

