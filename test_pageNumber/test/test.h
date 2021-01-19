#pragma once

#include <QtWidgets/QMainWindow>
#ifndef TEST_H
#define TEST_H

#include "ui_test.h"
#include "scanThread.h"

class test : public QMainWindow
{
    Q_OBJECT

public:
    test(QWidget *parent = Q_NULLPTR);

private:
    Ui::testClass ui;
	scanThread *_scanThread;

private slots:
	void scan();
	
};
#endif
