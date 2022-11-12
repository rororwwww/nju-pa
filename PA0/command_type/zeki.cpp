#include <iostream>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int opt;

    //分析接收到的参数
    while ((opt = getopt(argc, argv, "v")) != -1)
    {
        switch (opt)
        {
        case 'v':
            std::cout << "zeki_you version 2022.11.11";
            return 0;
        }
    }

    std::cout << "         _    _" << std::endl;
    std::cout << " _______| | _(_)    _   _  ___  _   _" << std::endl;
    std::cout << "|_  / _ \\ |/ / |   | | | |/ _ \\| | | |" << std::endl;
    std::cout << " / /  __/   <| |   | |_| | (_) | |_| |" << std::endl;
    std::cout << "/___\\___|_|\\_\\_|____\\__, |\\___/ \\__,_|" << std::endl;
    std::cout << "              |_____|___/" << std::endl;

    return 0;
}
