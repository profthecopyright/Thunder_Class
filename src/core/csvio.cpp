#include "csvio.h"

CSVio::CSVio()
{

}

std::vector<std::vector<std::string>> CSVio::getTable()
{
    if(!this->table_load)
    {
        std::cout<<"警告：试图在没有读取文件的情况下取出ReadCSV::table";
    }
    return this->table;
}

bool CSVio::read(std::string dir)
{
    std::ifstream ifs;
    std::string buf;
    std::vector<std::string> line;
    std::string::size_type flag1 = 0, flag2 = 0;

    if(this->table_load == true)
    {
        this->table.clear();
    }

    ifs.open(dir, std::ios::in);
    if(!ifs.is_open())
    {
        std::cout<<"打开文件失败"<<std::endl;
        return false;
    }

    //try {

        while(getline(ifs,buf))
        {
            //std::cout<<"读取行："<<buf<<std::endl;
            while(std::string::npos != (flag2 = buf.find(',',flag1)))
            {
                line.push_back(buf.substr(flag1, flag2-flag1));
                //std::cout<<"读到元素："<<buf.substr(flag1, flag2-flag1)<<std::endl;
                flag1 = flag2 + 1;
            }
            line.push_back(buf.substr(flag1));
            //std::cout<<"读到元素："<<buf.substr(flag1)<<std::endl;

            this->table.push_back(line);
            line.clear();
            flag1 = flag2 = 0;
        }

        this->table_load = true;

    //} catch (std::out_of_range &exc) {
    //    std::cout<<"out_of_range:" << exc.what() <<  std::endl;
    //}

    ifs.close();
    return true;
}
