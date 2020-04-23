#ifndef LOGINBOT_H
#define LOGINBOT_H

#include <string>
#include "corelink.h"
#include "csvio.h"

class LoginBot
{
public:
    LoginBot(Workflow *w);
    int onLogin(std::string, std::string);
    CSVio getDefaultCSV();

private:
    int passwordWrongTimes;
    Workflow *workflow;
    CSVio csv;
};

#endif // LOGINBOT_H
