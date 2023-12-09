# Variables
CC = clang++
CFLAGS = -std=c++11 -Iinclude
LDFLAGS = -lm

# Archivos fuente y objetos
SRCDIR = src
INCDIR = include
TESTDIR = test
BUILDDIR = build
TARGET = programa

# Lista de archivos fuente
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
TESTS := $(wildcard $(TESTDIR)/test_*.cpp)

# Generar nombres de archivos objeto
OBJECTS := $(SOURCES:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)
TEST_OBJECTS := $(TESTS:$(TESTDIR)/%.cpp=$(BUILDDIR)/%.o)

# Regla principal
all: $(TARGET)

# Regla para compilar el programa principal
$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

# Regla para compilar los archivos fuente
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CC) -c $< -o $@ $(CFLAGS)

# Regla para compilar los archivos de prueba
$(BUILDDIR)/test_%.o: $(TESTDIR)/test_%.cpp
	@mkdir -p $(BUILDDIR)
	$(CC) -c $< -o $@ $(CFLAGS)

# Regla para compilar y ejecutar los tests
tests: $(TEST_OBJECTS) $(OBJECTS)
	$(CC) $(TEST_OBJECTS) $(filter-out $(BUILDDIR)/main.o, $(OBJECTS)) -o run_tests $(LDFLAGS)
	./run_tests

# Limpieza de archivos generados
clean:
	rm -rf $(BUILDDIR) $(TARGET) run_tests

# No borrar archivos intermedios
.PHONY: clean tests
