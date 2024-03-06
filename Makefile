build:
	gcc -Wall ./src/*.c -o inventory-mngmt
run:
	./inventory-mngmt
clean:
	rm inventory-mngmt

