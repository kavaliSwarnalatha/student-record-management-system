#include"student.h" 
void std_del(SLL **ptr)
{
        if(ptr==0)
        {
                printf("no records found\n");
                return ;
        }
        int name1[20],num;
        char ch; 
        SLL *del=*ptr,*prev;
        printf("enter ypur choice:\n");
        printf("R/r:enter roll number to delete\n");
        printf("N/n:enter name to delete\n");
        scanf(" %c",&ch);
        if(ch=='r' || ch=='R')
        {
                printf("enter num:\n");
                scanf("%d",&num);
                del=*ptr;
                while(del)
                {
                        if(num==del->rollno)
                        {
                                if((*ptr)==del)
                                        *ptr=del->next;
                                else
                                        prev->next=del->next;
                                free(del);
                                return ;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("rollno not found\n");
        }

        else if(ch=='n' || ch=='N')
        {
                printf("enter name:\n");
                scanf(" %[^\n]",name1);
                del=*ptr;
                while(del)
                {

                        if(strcmp(name1,del->name)==0)
                        {
                                if((*ptr)==del)
                                        *ptr=del->next;
                                else
                                        prev->next=del->next;
                                free(del);
                                return ;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("name not found\n");
        }
}

