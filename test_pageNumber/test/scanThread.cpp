#include "scanThread.h"
#include <qdebug.h>

scanThread::scanThread()
{
	n_scan = new QAxWidget;
	couDlg = new counts;
	n_scan->setControl(QStringLiteral("{a57b5680-36ca-11d2-bd7f-00c0d1572a7b}"));
	connect(n_scan, SIGNAL(FeederEmpty(int, bool&)), this, SLOT(FeederEmptyScanxpress1(int, bool&)));
	connect(n_scan, SIGNAL(AfterScan(int)), this, SLOT(AfterScanScanxpress1(int)));
	connect(this, SIGNAL(sentSignal(int)), couDlg, SLOT(recSignal(int)));

}
void scanThread::FeederEmptyScanxpress1(int PageNumber, bool& StopScan)
{
	qDebug() << "已经扫描完成" << PageNumber << "张，是否继续？" << endl;
}

void scanThread::AfterScanScanxpress1(int PageNumber)
{
	emit sentSignal(PageNumber);
	qDebug() << PageNumber << endl;
}

void scanThread::run()
{
	n_scan->dynamicCall("SetScanName()");
	n_scan->dynamicCall("SettingsDialog(QVariant, QVariant)");
	n_scan->dynamicCall("SetScanFileName(QString)", "test");
	n_scan->dynamicCall("SetScanFileSchema(QString)", "$###");
	n_scan->dynamicCall("SetScanFileName(QString)", "test.tif");
	n_scan->dynamicCall("ScanBatch()");
	stopped = false;
}

void scanThread::stop()
{
	stopped = true;
}