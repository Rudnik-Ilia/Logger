# Logger
The Logger is a multi-level, thread-safe logging utility with concurrent support. It incorporates the Singleton design pattern for a thread-safe, single instance implementation.




The Logger is a versatile tool to monitor various events in your program. It offers customizable notification levels from a choice of eight levels. You can add messages, and the logger will timestamp and record them in a log file called "log.txt" by default. You have the flexibility to change the log file's name and location by modifying the PATH_TO_LOG variable in LogTask.c. If the file doesn't exist, the logger will create a new one; otherwise, it will append log entries to the existing file.

The Logger includes my implementation of the Singleton design pattern as a template. In this case, it ensures the creation of a single instance of the Logger in different threads. However, you can utilize it to control the number of instances for any classes you desire, providing a flexible and efficient way to manage object creation.

TO COMPILE:
	run existing makefile by "make" command
	
	
Created and tested in Linux enviroment.
