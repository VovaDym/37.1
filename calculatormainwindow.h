#ifndef INC_37_1222_CALCULATORMAINWINDOW_H
#define INC_37_1222_CALCULATORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <string>

class CalculatorMainWindow : public  QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* resultShow = nullptr;
    CalculatorMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}

    void numberToString (double number)
    {
        newLabel = QString::number(number, 'g',15);
        resultShow->setText(newLabel);
    }

public slots:
    void slotNumbers()
    {
        QPushButton* buttonNumbers = dynamic_cast<QPushButton*>(sender());
        allNumbers = (resultShow->text() + buttonNumbers->text()).toDouble();
        numberToString(allNumbers);
    };

    void slotOperators()
    {
        QPushButton* buttonOperators = dynamic_cast<QPushButton*>(sender());
        numberFirst = allNumbers;
        resultShow->setText("");
        opr = buttonOperators->text();
    };

    void slotEqually()
    {
        if(opr == "+")
        {
            numberSecond = allNumbers;
            numberToString(numberFirst + numberSecond);
        }
        else if(opr == "-")
        {
            numberSecond = allNumbers;
            numberToString(numberFirst - numberSecond);
        }
        else if(opr == "*")
        {
            numberSecond = allNumbers;
            numberToString(numberFirst * numberSecond);
        }
        else if(opr == "/")
        {
            numberSecond = allNumbers;
            if(numberSecond == 0)
            {
                resultShow->setText("ERROR!");
            }
            else
            {
                numberToString(numberFirst / numberSecond);
            }
        }
    };

    void slotClear()
    {
        resultShow->setText("");
    };

    void slotDot()
    {
        if(!(resultShow->text().contains('.')))
        {
            resultShow->setText(resultShow->text() + ".");
        }
        else
        {
            resultShow->setText("ERROR!");
        }
    };

private:
    double allNumbers, numberFirst, numberSecond;
    QString newLabel, opr;
};

#endif //INC_37_1222_CALCULATORMAINWINDOW_H
