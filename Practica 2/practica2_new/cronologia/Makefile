SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -std=c++11 -Wall -g  -I$(INC) -c


all: $(BIN)/pruebacronologia
# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile

# *********** Generación de ficheros objeto ******************

$(OBJ)/EventoHistorico.o: $(SRC)/EventoHistorico.cpp $(INC)/EventoHistorico.h

	$(CXX) $(CPPFLAGS) -o $(OBJ)/EventoHistorico.o $(SRC)/EventoHistorico.cpp

$(OBJ)/Cronologia.o: $(SRC)/Cronologia.cpp $(INC)/Cronologia.h $(INC)/EventoHistorico.h 

	$(CXX) $(CPPFLAGS) -o $(OBJ)/Cronologia.o $(SRC)/Cronologia.cpp  

$(OBJ)/pruebacronologia.o: $(SRC)/pruebacronologia.cpp $(INC)/Cronologia.h

	$(CXX) $(CPPFLAGS) -o $(OBJ)/pruebacronologia.o  $(SRC)/pruebacronologia.cpp 

# ************ Compilación de módulos ************
$(BIN)/pruebacronologia: $(OBJ)/pruebacronologia.o $(OBJ)/Cronologia.o $(OBJ)/EventoHistorico.o

	$(CXX) -o $(BIN)/pruebacronologia $(OBJ)/pruebacronologia.o $(OBJ)/Cronologia.o $(OBJ)/EventoHistorico.o

# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*
