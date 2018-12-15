#pragma once

#include <QWidget>
#include <QPushButton.h>

class QGameBoardCell : public QPushButton
{
	Q_OBJECT

public:
	QGameBoardCell(QWidget *parent = nullptr);
	~QGameBoardCell();
};
