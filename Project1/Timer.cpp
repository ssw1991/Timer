#include "Timer.hpp"
#include <string>
#include <iostream>
#include <ctime>


Timer::Timer(std::string name): name (name)
{
	std::cout << "Timer named " << name << std::endl;
}


Timer::~Timer()
{
}

void Timer::start()
{
	std::cout << time(0); 
	Timer::starttime = time(0);
}

void Timer::end()
{
	std::cout << time(0) <<std::endl;
	Timer::prevtime = difftime(time(0) ,Timer::starttime);
	std::cout << Timer::prevtime << std::endl;
}

int main()
{

	Timer t = Timer("My_Timer");
	t.start();
	std::cin.get();
	t.end();
	return 0;
}