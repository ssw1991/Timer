#pragma once
#include <string>


class Timer
{
private:
	time_t starttime;
	float prevtime;
	std::string name;



public:
	Timer(std::string name);
	~Timer();

	void start();
	void end();
};

