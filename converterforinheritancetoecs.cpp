#include "converterforinheritancetoecs.h"
#include "ui_converterforinheritancetoecs.h"

ConverterForInheritanceToECS::ConverterForInheritanceToECS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ConverterForInheritanceToECS)
{
    ui->setupUi(this);
}

ConverterForInheritanceToECS::~ConverterForInheritanceToECS()
{
    delete ui;
}

