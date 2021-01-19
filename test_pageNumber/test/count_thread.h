#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <qlabel.h>

class Thread : public QThread
{
	Q_OBJECT

public:
	QLabel *label;

	Thread();
	void setMessage(const int message);
	void stop();

protected:
	void run();

private:
	int messageStr = 0;
	volatile bool stopped;
};

#endif
