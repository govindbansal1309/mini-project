PROJECT_NAME = all
SRC = main.c\
src/additem.c\
src/deleteitem.c\
src/edititem.c\
src/gotoxy.c\
src/menu.c\
src/readitem.c\
src/searchitem.c

INC = inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o all.out

run: $(PROJECT_NAME)
	$(PROJECT_NAME)

clean:
	rm *.out
