CC = g++
CFLAGS = -Wall -std=c++17 -g  # Добавлен флаг -g для отладки
LDFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
SOURCES = main.cpp block.cpp colors.cpp grid.cpp position.cpp blocks.cpp game.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = tetris

all: $(EXECUTABLE)
	@echo "Компиляция завершена. Запустите программу с помощью ./$(EXECUTABLE)"
	@rm -f *.o  # Автоматическое удаление .o файлов после компиляции

$(EXECUTABLE): $(OBJECTS)
	@$(CC) $(OBJECTS) -o $(EXECUTABLE) $(LDFLAGS)  # @ подавляет вывод команды

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@  # @ подавляет вывод команды

clean:
	@rm -f $(OBJECTS) $(EXECUTABLE)  # @ подавляет вывод команды
	@echo "Очистка завершена."
