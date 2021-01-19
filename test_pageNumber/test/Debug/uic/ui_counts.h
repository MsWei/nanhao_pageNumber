/********************************************************************************
** Form generated from reading UI file 'counts.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTS_H
#define UI_COUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_counts
{
public:
    QLabel *label;

    void setupUi(QWidget *counts)
    {
        if (counts->objectName().isEmpty())
            counts->setObjectName(QStringLiteral("counts"));
        counts->resize(638, 528);
        label = new QLabel(counts);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 561, 391));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(150);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(counts);

        QMetaObject::connectSlotsByName(counts);
    } // setupUi

    void retranslateUi(QWidget *counts)
    {
        counts->setWindowTitle(QApplication::translate("counts", "counts", Q_NULLPTR));
        label->setText(QApplication::translate("counts", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class counts: public Ui_counts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTS_H
