
bf.elf: main.o
	g++ main.o -o $@ $(LDFLAGS) 

main.o: main.cpp
	g++ -MMD -MP -fno-rtti -O3 -std=c++2a -Wall -c $< -o $@