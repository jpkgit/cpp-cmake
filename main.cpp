//#include <cstdlib>
#include <iostream>
#include <vector>  
#include <ctime>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include "version.h"
#include "market/market.h"

using namespace std;

std::vector<std::string> list;

int func1(int count)
{
    for (int index = 1; index < count + 1; index++)
    {
        std:string value = "test" + std::to_string(index);
        list.push_back(value);    
    }  
    
    return list.size();
}

int func2(int count)
{    
    if (count < 0)
        return -1;

    void* pIntArr = calloc(count, sizeof(pIntArr));
    
    int index = count;

    // while (index > 0)
    // {
    //     pIntArr[index] = 1;
    //     index--;
    // }

    return 0;
}

int main(int argc, char* argv[])
{

    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    console_sink->set_level(spdlog::level::info);  // Console log level

    // Create a file sink
    auto file_sink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("logs.txt", true);  // 'true' appends to the file
    file_sink->set_level(spdlog::level::info);  // File log level

    // Create a logger with both sinks
    std::vector<spdlog::sink_ptr> sinks { console_sink, file_sink };
    auto logger = std::make_shared<spdlog::logger>("multi_sink_logger", sinks.begin(), sinks.end());

    logger->info("This message is logged to both the console and the file.");
    logger->warn("This is a warning logged to both the console and the file.");

    logger->info("{} Version {}.{}.{}", 
        argv[0], cpp_VERSION_MAJOR, cpp_VERSION_MINOR, cpp_VERSION_PATCH);

    if (argc != 2)    
    {
        logger->info("Usage: {} <number>", argv[0]);        
        return -1;
    }
    
    const int inputValue = std::stoi(argv[1]);

    clock_t clock_start = clock();   
    int result = func1(inputValue);
    clock_t clock_stop = clock();


    logger->info("Clocks: {}", clock_stop - clock_start);

    clock_start = clock();   
    
    for (int index = 0; index < result; index++)
    {
        //cout << list.at(index) << " clock(): " << clock() << endl;        
    }

    clock_stop = clock();
    //std::cout << "Clocks: " << clock_stop - clock_start << " clocker per sec: " << CLOCKS_PER_SEC << std::endl;

    market marketObj;     

    logger->flush();

    return 0;
}
