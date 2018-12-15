#pragma once

#include <QtWidgets/QMainWindow>
#include <QGridLayout.h>
#include "QGameBoard.h"

class Battleship : public QMainWindow
{
	Q_OBJECT

public:
	Battleship(QWidget *parent = Q_NULLPTR);
private:
	QGameBoard* Board;
	QGridLayout* GridLayout;
};
