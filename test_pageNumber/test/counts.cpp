#include "counts.h"
#include "ui_counts.h"

counts::counts(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::counts();
	ui->setupUi(this);
	this->show();
	/*thread_counts = new Thread;
	thread_counts->label = ui->label;
	thread_counts->start();*/
}

counts::~counts()
{
	delete ui;
}

void counts::recSignal(int _num)
{
	ui->label->setNum(_num);
}