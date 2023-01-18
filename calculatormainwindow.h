#ifndef INC_37_1222_CALCULATORMAINWINDOW_H
#define INC_37_1222_CALCULATORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CalculatorMainWindow : public  QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* enterShow = nullptr;
    QLineEdit* resultShow = nullptr;
    CalculatorMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}

    void numberToString (double number)
    {
        newLabel = QString::number(number, 'g',15);
        resultShow->setText(newLabel);
    }

public slots:
    void slot0()
    {
        enterShow->setText(enterShow->text() + "0");
        allNumbers = (resultShow->text() + "0").toDouble();
        numberToString(allNumbers);
    };

    void slot1()
    {
        enterShow->setText(enterShow->text() + "1");
        allNumbers = (resultShow->text() + "1").toDouble();
        numberToString(allNumbers);
    };

    void slot2()
    {
        enterShow->setText(enterShow->text() + "2");
        allNumbers = (resultShow->text() + "2").toDouble();
        numberToString(allNumbers);
    };

    void slot3()
    {
        enterShow->setText(enterShow->text() + "3");
        allNumbers = (resultShow->text() + "3").toDouble();
        numberToString(allNumbers);
    };

    void slot4()
    {
        enterShow->setText(enterShow->text() + "4");
        allNumbers = (resultShow->text() + "4").toDouble();
        numberToString(allNumbers);
    };

    void slot5()
    {
        enterShow->setText(enterShow->text() + "5");
        allNumbers = (resultShow->text() + "5").toDouble();
        numberToString(allNumbers);
    };

    void slot6()
    {
        enterShow->setText(enterShow->text() + "6");
        allNumbers = (resultShow->text() + "6").toDouble();
        numberToString(allNumbers);
    };

    void slot7()
    {
        enterShow->setText(enterShow->text() + "7");
        allNumbers = (resultShow->text() + "7").toDouble();
        numberToString(allNumbers);
    };

    void slot8(){
        enterShow->setText(enterShow->text() + "8");
        allNumbers = (resultShow->text() + "8").toDouble();
        numberToString(allNumbers);
    };

    void slot9(){
        enterShow->setText(enterShow->text() + "9");
        allNumbers = (resultShow->text() + "9").toDouble();
        numberToString(allNumbers);
    };

    void slotMinus()
    {
        enterShow->setText(enterShow->text() + "-");
        numberFirst = allNumbers;
        resultShow->setText("");
    };

    void slotPlus()
    {
        enterShow->setText(enterShow->text() + "+");
        numberFirst = allNumbers;
        resultShow->setText("");
    };

    void slotMultiply()
    {
        enterShow->setText(enterShow->text() + "*");
        numberFirst = allNumbers;
        resultShow->setText("");
    };

    void slotDivider()
    {
        enterShow->setText(enterShow->text() + "/");
        numberFirst = allNumbers;
        resultShow->setText("");
    };

    void slotEqually()
    {
        enterShow->setText(enterShow->text() + "=");
        if(enterShow->text().contains('+'))
        {
            numberSecond = allNumbers;
            numberToString(numberFirst + numberSecond);
            enterShow->setText("");
        }
        else if(enterShow->text().contains('-'))
        {
            numberSecond = allNumbers;
            numberToString(numberFirst - numberSecond);
            enterShow->setText("");
        }
        else if(enterShow->text().contains('*'))
        {
            numberSecond = allNumbers;
            numberToString(numberFirst * numberSecond);
            enterShow->setText("");
        }
        else if(enterShow->text().contains('/'))
        {
            numberSecond = allNumbers;
            if(numberSecond == 0)
            {
                enterShow->setText("");
                resultShow->setText("ERROR!");
            }
            else
            {
                numberToString(numberFirst / numberSecond);
                enterShow->setText("");
            }
        }
    };

    void slotClear()
    {
        enterShow->setText("");
        resultShow->setText("");
    };

    void slotDot()
    {
        if(!(resultShow->text().contains('.')))
        {
            enterShow->setText(enterShow->text() + ".");
            resultShow->setText(resultShow->text() + ".");
        }
        else
        {
            enterShow->setText("");
            resultShow->setText("ERROR!");
        }
    };

private:
    double allNumbers, numberFirst, numberSecond;
    QString newLabel;
};

#endif //INC_37_1222_CALCULATORMAINWINDOW_H
