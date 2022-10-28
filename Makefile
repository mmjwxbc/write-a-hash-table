all:hash
hash:main.o hash_table.o prime.o
	gcc $^ -o $@ -lm

clean:
	rm -rf *.o hash