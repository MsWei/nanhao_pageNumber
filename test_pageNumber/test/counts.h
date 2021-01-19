#pragma once

#include <QWidget>
//#include "count_thread.h"

namespace Ui { class counts; };

class counts : public QWidget
{
	Q_OBJECT

public:
	counts(QWidget *parent = Q_NULLPTR);
	~counts();

public:
	Ui::counts *ui;
	//Thread *thread_counts;

public slots:
	void recSignal(int _num);

};
