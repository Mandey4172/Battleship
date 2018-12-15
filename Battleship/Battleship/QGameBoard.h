#pragma once

#include <QWidget>
#include <QGridLayout.h>
#include "QGameBoardCell.h"

class QGameBoard : public QWidget
{
	Q_OBJECT

public:
	QGameBoard(QWidget *parent = Q_NULLPTR);
	~QGameBoard();

protected:
	QGameBoardCell Cells[10][10];

	void resizeEvent(QResizeEvent *e);
private:
	QGridLayout* GridLayout;
};
