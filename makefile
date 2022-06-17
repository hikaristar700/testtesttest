Target = Country.cpp Game.cpp Jail.cpp Land.cpp Map.cpp Player.cpp
Header = Country.h Jail.h Land.h Map.h Player.h Game.h
all: $(Target) $(Header)
	g++ $(Target) main.cpp -o main