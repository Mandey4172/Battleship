#include <QGridLayout.h>
#include "Battleship.h"

Battleship::Battleship(QWidget *parent)
	: QMainWindow(parent)
{
	Board = new QGameBoard();

	GridLayout = new QGridLayout();
	GridLayout->addWidget(Board);

	QWidget *mainWidget = new QWidget();
	mainWidget->setLayout(GridLayout);
	setCentralWidget(mainWidget);
	
	//layout()->addWidget(Board);
}
