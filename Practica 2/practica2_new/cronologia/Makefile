SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


all: $(BIN)/pruebacronologia
# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile

# *********** Generación de ficheros objeto ******************

$(OBJ)/EventoHistorico.o: $(SRC)/EventoHistorico.cpp $(INC)/EventoHistorico.h

	$(CXX) $(SRC)/EventoHistorico.cpp $(CPPFLAGS) $(OBJ)/EventoHistorico.o

$(OBJ)/Cronologia.o: $(SRC)/Cronologia.cpp $(INC)/Cronologia.h $(INC)/EventoHistorico.h

	$(CXX) $(SRC)/Cronologia.cpp $(CPPFLAGS) $(OBJ)/Cronologia.o

$(OBJ)/pruebacronologia.o: $(SRC)/pruebacronologia.cpp $(INC)/Cronologia.h

	$(CXX) $(SRC)/pruebacronologia.cpp $(CPPFLAGS) $(OBJ)/pruebacronologia.o

# ************ Compilación de módulos ************
$(BIN)/pruebacronologia: $(OBJ)/pruebacronologia.o $(OBJ)/Cronologia.o $(OBJ)/EventoHistorico.o

	$(CXX) $(SRC)/pruebacronologia.cpp -o $(BIN)/pruebacronologia 

# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*
