all:
	g++ -I include -o bin/main.exe src/main.cpp -L lib -lmingw32 -lSDL2main -lSDL2