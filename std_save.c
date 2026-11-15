#include"student.h"
void std_save(SLL *ptr)
 {
         if(ptr==0)
         {
                 printf("no records found\n");
                 return ;
        }
         FILE *fs;
         fs=fopen("DATA","w");
         while(ptr)
         {
                 fprintf(fs,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                 ptr=ptr->next;
         }
        printf("data saved successfully\n");
         fclose(fs);
 }

