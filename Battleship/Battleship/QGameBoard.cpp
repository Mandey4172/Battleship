#include "QGameBoard.h"
#include <QResizeEvent>

QGameBoard::QGameBoard(QWidget *parent)
	: QWidget(parent)
{
	GridLayout = new QGridLayout();
	setLayout(GridLayout);

	for (int i = 0 ; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			GridLayout->addWidget(&Cells[i][j],i,j);
		}
	}
	GridLayout->setSpacing(2);
}

QGameBoard::~QGameBoard()
{
}

void QGameBoard::resizeEvent(QResizeEvent * e)
{
	if (e->size().height() != e->size().width())
	{
		int width = e->size().width(),
			height = e->size().height();

		if (width < height) height = width;
		else				width = height;
		resize(width, height);
	}
}
