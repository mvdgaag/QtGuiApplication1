#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Matter.h"

class Matter : public QMainWindow
{
	Q_OBJECT

public:
	Matter(QWidget *parent = Q_NULLPTR);

private:
	Ui::MatterClass ui;
};
