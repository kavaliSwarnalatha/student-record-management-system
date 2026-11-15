#include"student.h"
void std_show(SLL *ptr)
  {
          if(ptr==0)
          {
                 printf("no records found\n");
                 return ;
          }
          while(ptr)
          {
                  printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                  ptr=ptr->next;
          }
  }

