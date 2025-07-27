CXX = g++
CXXFLAGS = -Wall -std=c++17

all: main testes

main: main.cpp lista.cpp lista.hpp
	$(CXX) $(CXXFLAGS) -o main.exe main.cpp lista.cpp

testes: testes.cpp lista.cpp lista.hpp
	$(CXX) $(CXXFLAGS) -o testes.exe testes.cpp lista.cpp

# Gera testes.txt com a saída do programa de testes
gerar-testes: testes
	./testes.exe > testes.txt

# Limpa apenas os executáveis (mantém testes.txt)
clean:
	rm -f main.exe testes.exe
