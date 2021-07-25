all: main.out

main.out: state.o rogue_state.o berserker_state.o unit.o soldier.o rogue.o berserker.o
	g++ main.cpp *.o -o main.out

state.o:
	g++ -c state/State.cpp

rogue_state.o:
	g++ -c state/RogueState.cpp

berserker_state.o:
	g++ -c state/BerserkerState.cpp

unit.o:
	g++ -c unit/Unit.cpp

soldier.o:
	g++ -c unit/Soldier.cpp

rogue.o:
	g++ -c unit/Rogue.cpp

berserker.o:
	g++ -c unit/Berserker.cpp

clean:
	rm -f *.o