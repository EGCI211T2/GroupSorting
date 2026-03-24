
compile: main.cpp
	 g++ main.cpp -o sort

run: sort
	 ./sort

clean: sort
	 rm sort
