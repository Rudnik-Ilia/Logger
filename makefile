CC = g++ 
CFLAGS = -std=c++11 -pedantic-errors -Wall -Wextra -lpthread 
CPPFLAGS = -I 
FOLDER = -I include 

SOURSES = test/test_logger.cpp src/LogInherited.cpp src/LogMessage.cpp  src/LogTask.cpp src/Logger.cpp src/ThreadPool.cpp src/WorkerThread.cpp src/ThreadMap.cpp  


EXECUTABLE = logger_test


.PHONY : all, debug, release, clean

all:$(EXECUTABLE)

debug: CFLAGS += -g
debug: $(EXECUTABLE)

release: CFLAGS += -DNDEBUG -O3
release: $(EXECUTABLE)

$(EXECUTABLE): $(SOURSES)
	$(CC)  $(SOURSES)  $(FOLDER) $(CFLAGS) -o logger_test
		
clean:
	rm *.out
	
