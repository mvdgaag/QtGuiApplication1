#include "Matter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Matter w;
	w.show();
	return a.exec();
}
