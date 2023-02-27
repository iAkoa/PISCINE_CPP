#include <ctime>
#include <iostream>

void	_displayTimestamp( void )
{
	std::time_t	timestamp = std::time(0);
	tm			*time = localtime(&timestamp);

	std::cout	<< "["
				<< time->tm_year + 1900
				<< time->tm_mon
				<< time->tm_mday
				<< '_'
				<< time->tm_hour
				<< time->tm_min
				<< time->tm_sec
				<< "] ";
}

int main()
{
	_displayTimestamp();
}