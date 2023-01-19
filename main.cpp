#include <QApplication>
#include "calculatormainwindow.h"
#include "./ui_calculator.h"



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalculatorMainWindow window(nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.resultShow = calculator.resultShow;
//    window.button = calculator.pushButton_0;
//    window.button = calculator.pushButton_1;
//    window.button = calculator.pushButton_3;
    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
