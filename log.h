#ifndef _LOG_H_
#define _LOG_H_

#include <iostream>
#include <memory>

namespace yqs
{
    enum E_logLevel
    {
        LOG_LEVEL_FATAL = 0
        LOG_LEVEL_ERROR,
        LOG_LEVEL_WARN,
        LOG_LEVEL_INFO,
        LOG_LEVEL_DEBUG
    };

    class logManager
    {
    typedef shared_ptr<logManager> logManagerPtr;
    private:
        /* data */
    public:
        logManager(/* args */);
        ~logManager();
    };
    
    logManager::logManager(/* args */)
    {
    }
    
    logManager::~logManager()
    {
    }
    

}
#endif