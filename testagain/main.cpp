#include "testagain.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testagain w;
	w.show();
	return a.exec();
}
