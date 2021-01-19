#include "test.h"
#include <iostream>
using namespace std;

test::test(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	_scanThread = new scanThread;
}

void test:: scan()
{
	_scanThread->start();
	_scanThread->stop();
}