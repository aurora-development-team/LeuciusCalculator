make:
PROJ_NAME=LC
 
# .c files
CPP_SOURCE=$(wildcard *.cpp)
 
# .h files
H_SOURCE=$(wildcard *.h)
 
# Object files
OBJ=$(C_SOURCE:.cpp=.o)
 
# Compiler
CC=g++
 
# Flags for compiler
#CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic
 
#
# Compilation and linking
#
all: $(PROJ_NAME)
 
$(PROJ_NAME): $(OBJ)
 $(CC) -o $@ $^
 
%.o: %.cpp %.h
 
 $(CC) -o $@ $< $(CC_FLAGS)
 
main.o: main.cpp $(H_SOURCE)
 $(CC) -o $@ $< $(CC_FLAGS)
 
clean:
 rm -rf *.o $(PROJ_NAME) *~