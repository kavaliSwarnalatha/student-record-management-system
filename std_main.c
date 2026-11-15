#include"student.h"
int main()
{
        SLL *headptr=0;
        char ch;
        while(1){
                printf("enter your choice:\n");
                printf("'a'/'A':add new record\n");
                printf("'d'/'D':delete a record\n");
                printf("'s'/'S':show the list\n");
                printf("'m'/'M':modify a record\n");
                printf("'v'/'V':save records\n");
                printf("'t'/'T':sort the list\n");
                printf("'l'/'L':delete all the records\n");
                printf("'r'/'R':reverse the list\n");
                printf("'e'/'E':exit\n");
                scanf(" %c",&ch);
                switch(ch)
                {
                        case 'a':
                        case 'A':std_add(&headptr);break;
                        case 'd':
                        case 'D':std_del(&headptr);break;
                        case 's':
                        case 'S':std_show(headptr);break;
                        case 'm':
                        case 'M':std_mod(headptr);break;
                        case 'v':
                        case 'V':std_save(headptr);break;
                        case 't':
                        case 'T':std_sort(headptr);break;
                        case 'l':
                        case 'L':std_delall(&headptr);break;
                        case 'r':
                        case 'R':std_rev(headptr);break;
                        case 'e':
                        case 'E':
                                 {
                                         char ch1;
                                         printf("enter your choice\n");
                                         printf("'s'/'S':save and exit\n");
                                         printf("'e'/'E':exit without saving\n");
                                         scanf(" %c",&ch1);
                                         switch(ch1)
                                         {
                                                 case 's':
                                                 case 'S':{
                                                                  std_save(headptr);
                                                                  return 0;

                                                          }
                                                          break;
                                                 case 'e':
                                                 case 'E':
                                                          {
                                                                  printf("exit without saving\n");
                                                                  return 0;
                                                          }
                                                          break;
                                                 default:printf("unknown choice\n");
                                        }
                                 }
                }
        }
}

