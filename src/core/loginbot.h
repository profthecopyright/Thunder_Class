#ifndef LOGINBOT_H
#define LOGINBOT_H

#include <string>

class Workflow;
class CSVio;
class LoginBot
{
public:
    LoginBot(Workflow *w);
    ~LoginBot();
    int onLogin(std::string, std::string);
    CSVio *getDefaultCSV();

private:
    int passwordWrongTimes;
    Workflow *workflow;
    CSVio *csv;
};

#endif // LOGINBOT_H
