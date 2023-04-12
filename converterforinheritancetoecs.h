#ifndef CONVERTERFORINHERITANCETOECS_H
#define CONVERTERFORINHERITANCETOECS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ConverterForInheritanceToECS; }
QT_END_NAMESPACE

class ConverterForInheritanceToECS : public QMainWindow
{
    Q_OBJECT

public:
    ConverterForInheritanceToECS(QWidget *parent = nullptr);
    ~ConverterForInheritanceToECS();

private:
    Ui::ConverterForInheritanceToECS *ui;
};
#endif // CONVERTERFORINHERITANCETOECS_H
