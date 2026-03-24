#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onMainBtnClicked();
    void onSuccessBtnClicked();
    void onWarningBtnClicked();

private:
    void initUI();
    void setStyle();
    QLineEdit *input;
};

#endif // MAINWINDOW_H