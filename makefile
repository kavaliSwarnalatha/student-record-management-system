exe:std_main.o std_add.o std_mod.o std_del.o std_save.o std_show.o std_sort.o std_delall.o std_rev.o  
	cc std_main.o std_add.o std_mod.o std_del.o std_save.o std_show.o std_sort.o std_delall.o std_rev.o -o exe
std_main.o:std_main.c
	cc -c std_main.c
std_add.o:std_add.c
	cc -c std_add.c
std_mod.o:std_mod.c
	cc -c std_mod.c
std_del.o:std_del.c
	cc -c std_del.c
std_save.o:std_save.c
	cc -c std_save.c
std_show.o:std_show.c
	cc -c std_show.c
std_sort.o:std_sort.c
	cc -c std_sort.c
std_delall.o:std_delall.c
	cc -c std_delall.c
std_rev.o:std_rev.c
	cc -c std_rev.c
clear:
	@echo "cleaning up ......."
	@rm -r *.o

