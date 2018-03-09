###############################################################################
# Plantilla de Makefile para C++ con funciones avanzadas
# Probado con Cygwin en Windows 10 64-Bit
#
# Copyright (C) 2015 por Joel Bodenmann <joel@embedded.pro>
# https://blog.embedded.pro/de1-soc-a-better-makefile/
# Modificado el 9 de Marzo de 2018 por Byron Quezada <github.com/byque>
#
# Se puede usar este Makefile libremente pero sin garantías y bajo el riesgo
# del usuario.
###############################################################################

# Éste es el nombre del binario que será generado
TARGET  = demo-clase

# Aquí añadimos todos los archivos *.cc que se quieren compilar
CPPSRCS = main.cc

# Aquí añadimos las rutas a los directorios include
IDIR    = ../include

# Aquí añadimos las librerías estándar que se van a usar
LIBS    = -lm

# Configuración del compilador
CPPC      = g++
CPPFLAGS  = -g -std=c++11 -Wall
LDFLAGS   = -g -Wall

###############################################################################
# No cambiar nada después de esta línea
###############################################################################

BINDIR   = ./bin
BUILDDIR = ./build
OBJDIR   = $(BUILDDIR)/obj

# Generar el nombre de los archivos objeto
OBJS = $(addprefix $(OBJDIR)/,$(addsuffix .o,$(basename $(CPPSRCS:%.c=%.o))))

# Añadir las rutas
CPPFLAGS += $(IDIR:%=-I %)
LDFLAGS  += $(IDIR:%=-I %)

# Añadir las librerías estándar
LDFLAGS  += $(LIBS)

# Aquí se definen los archivos generados por defecto cuando el usuario llama
# solamente 'make'
all: build size

# Crear todos los archivos y el binario
build: builddirs $(BINDIR)/$(TARGET)

# Crear los directorios requeridos (si no existen previamente)
builddirs:
	@echo
	@echo "Creando directorios..."
	@mkdir -p $(BINDIR)
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(OBJDIR)

# Enlazar todo junto
$(BINDIR)/$(TARGET): $(OBJS)
	@echo
	@echo Enlazando $@
	@$(CPPC) $(LDFLAGS) -o $(BINDIR)/$(TARGET) $(OBJS)

# Compilar los archivos en C++
$(OBJDIR)/%.o: %.cc
	@mkdir -p $(dir $@)
	@echo
	@echo Compilando $^
	@$(CPPC) $(CPPFLAGS) -c -o $@ $^

# Imprimir la información del tamaño
size: $(BINDIR)/$(TARGET)
	@echo
	size $^

# Limpiar código
clean:
	@echo
	@echo "Limpiando..."
	@rm -rf $(BINDIR) $(BUILDDIR) $(OBJS) $(TARGET) $(TARGET).* *.a *.o *~
	@echo
	@echo "Limpieza terminada!"

# Clean debe ser phony tal que make nunca salga de ejecución como un archivo
.PHONY: clean
