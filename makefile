all:
	gcc donut.c -o donut -lm
	gcc donutindonut.c -o donutindonut -lm

donut:
	gcc donut.c -o donut -lm

donutindonut:
	gcc donutindonut.c -o donutindonut -lm