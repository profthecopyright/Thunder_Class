#include "loginbot.h"
#include "workflow.h"
#include "csvio.h"

LoginBot::LoginBot(Workflow *w)
{
    this->workflow = w;
    this->passwordWrongTimes = 0;
    this->csv = new CSVio();
    this->csv->read("adminList.csv");
}

LoginBot::~LoginBot()
{
    delete this->csv;
}

CSVio *LoginBot::getDefaultCSV()
{
    return this->csv;
}

int LoginBot::onLogin(std::string name, std::string password)
{
    if(name.compare("Admin") == 0 && password.compare("Admin") == 0)
    {
        this->workflow->closeLoginWindow();
        this->workflow->showAdminWindow();
        return 0;
    }
    else
    {
        this->passwordWrongTimes++;
        if(this->passwordWrongTimes>=3)
        {
            this->workflow->quitApplication();
        }
    }

    return -1;
}
