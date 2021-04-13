all:
	gcc -I inc src/line_parameters.c main_file.c -o out.exe
run: all
	out.exe

test:
	gcc -I unity -I inc unity/unity.c test_file/test_parameters.c src/line_parameters.c -o t.exe


do: test
	t.exe
