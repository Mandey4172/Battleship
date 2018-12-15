#include "QGameBoardCell.h"

QGameBoardCell::QGameBoardCell(QWidget *parent)
	: QPushButton(parent)
{
	setMinimumSize(20,20);
	resize(30,30);
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

QGameBoardCell::~QGameBoardCell()
{
}

