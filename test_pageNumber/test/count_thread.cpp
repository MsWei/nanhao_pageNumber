
#include <iostream>
#include <qdebug.h>
#include <Windows.h>
#include <qapplication.h>
#include "count_thread.h"

Thread::Thread()
{
	stopped = false;
	label = new QLabel;
}

void Thread::setMessage(const int message)
{
	messageStr = message;
}

void Thread::run()
{
	while (!stopped)
	{
		Sleep(100);
		label->setNum(messageStr);
		//label->setNum(tas->getPageNum());
	}
	stopped = false;
}

void Thread::stop()
{
	stopped = true;
}

