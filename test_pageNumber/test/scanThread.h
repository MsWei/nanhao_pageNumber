#pragma once
#ifndef scanThread_H
#define scanThread_H

#include <QThread>
#include <qaxobject.h>
#include <qaxbase.h>
#include <qaxwidget.h>
#include "counts.h"

class scanThread : public QThread
{
	Q_OBJECT

public:
	scanThread();
	int getPageNumber();
	void stop();

protected:
	void run();

private:
	counts *couDlg;
	volatile bool stopped;
	QAxWidget *n_scan;

signals:
	void sentSignal(int num);

private slots:
	void FeederEmptyScanxpress1(int PageNumber, bool& StopScan);
	void AfterScanScanxpress1(int PageNumber);
	/*void StatusScanxpress1(long Percent);
	void BeforeScanScanxpress1(long PageNumber);*/
};
#endif