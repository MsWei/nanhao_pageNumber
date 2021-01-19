#include "test.h"
#include <QtWidgets/QApplication>
#include "qfile.h"
#include <qtextstream.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    test w;
	w.show();
	return a.exec();
}
