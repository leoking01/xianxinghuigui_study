run:
	g++ -c *.cpp
	g++ -o cmain *.o
	./cmain

clean:
	-rm *.o cmain

