#include"student.h"
void std_sort(SLL *ptr)
{
        if(ptr==0)
        {
                printf("no records found\n");
                return ;
        }
        int i,j,c;
        char ch; 
        SLL *p1=ptr,*p2,t;
        printf("enter your choice\n");
        printf("n/N:sort with name\n");
        printf("p/P:sort with percentage\n");
        scanf(" %c",&ch);
        if(ch=='n' || ch=='N')
        {
                for(i=0;i<c-1;i++)
                {
                        p2=p1->next;
                        for(j=0;j<c-1-i;j++)
                        {
                                if(strcmp(p1->name,p2->name)>0)
                                {
                                        t.rollno=p1->rollno;
                                        strcpy(t.name,p1->name);
                                        t.percentage=p1->percentage;

                                        p1->rollno=p2->rollno;
                                        strcpy(p1->name,p2->name);
                                        p1->percentage=p2->percentage;

                                        p2->rollno=t.rollno;
                                        strcpy(p2->name,t.name);
                                        p2->percentage=t.percentage;
                                }
                                p2=p2->next;
                        }
                        p2=p1->next;
                }
    
        }

        else if(ch=='p' || ch=='P')
        {
    
                for(i=0;i<c-1;i++)
                {
                        p2=p1->next;
                        for(j=0;j<c-1-i;j++)
                        {
                                if(p1->percentage<p2->percentage)
                                {
                                        t.rollno=p1->rollno;
                                        strcpy(t.name,p1->name);
                                        t.percentage=p1->percentage;

                                        p1->rollno=p2->rollno;
                                        strcpy(p1->name,p2->name);
                                        p1->percentage=p2->percentage;

                                        p2->rollno=t.rollno;
                                        strcpy(p2->name,t.name);
                                        p2->percentage=t.percentage;
                                }
                                p2=p2->next;
                        }
                        p2=p1->next;
                }
    


        }

}

