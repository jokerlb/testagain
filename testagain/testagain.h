#ifndef TESTAGAIN_H
#define TESTAGAIN_H

#include <QtGui/QMainWindow>
#include "ui_testagain.h"

class testagain : public QMainWindow
{
	Q_OBJECT

public:
	testagain(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testagain();
	float bengxiakalaka;
private:
	Ui::testagainClass ui;
};

#endif // TESTAGAIN_H
