#include <iostream>
#include <unistd.h>
#include <dlfcn.h>

#include "Logger.hpp"
#include "Singleton.hpp"
#include "LogInherited.hpp"

using namespace lg;


// gp11 test_logger.cpp ../src/LogInherited.cpp ../src/LogMessage.cpp  ../src/LogTask.cpp ../src/Logger.cpp ../src/ThreadPool.cpp ../src/WorkerThread.cpp ../src/ThreadMap.cpp  -I ../include -lpthread
int main()
{   

	/* You can use it as line.....Builder pattern*/
	
    Singleton<Logger>::GetInstance()->Log(TraceLog("trace")).Log(DebugLog("debug")).Log(InfoLog("Info")).Log(WarnLog("warn")).Log(ErrorLog("error")).Log(FatalLog("fatal"));
    
    Singleton<Logger>::GetInstance()->Log(TraceLog("something happend")).SetLevel(DEBUG).Log(DebugLog("Set level debug")).Log(InfoLog("Info about smt")).Log(WarnLog("your message can be here")).Log(ErrorLog("error")).Log(FatalLog("fatal"));
    
    
    /* or as regular approach*/
    
    Singleton<Logger>::GetInstance()->Log(TraceLog("trace"));
    Singleton<Logger>::GetInstance()->Log(DebugLog("d"));
    Singleton<Logger>::GetInstance()->SetLevel(WARN);

    
  
    


    sleep(1);

    return 0;
}
