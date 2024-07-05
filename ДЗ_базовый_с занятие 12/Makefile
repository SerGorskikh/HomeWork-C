all: temperature_data

temperature_data: main.o temp_function.o
	gcc -o temperature_data main.o temp_function.o

main.o: main.c temp_function.h
	gcc -c -o main.o main.c

temp_function.o: temp_function.c
	gcc -c -o temp_function.o temp_function.c

clean:
	rm -rf *.o temperature_data
