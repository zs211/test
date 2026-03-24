#include "mainwindow.h"
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(550, 450);
    this->setWindowTitle("专业美化工具");
    this->setWindowIcon(QIcon::fromTheme("app"));

    initUI();
    setStyle();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initUI()
{
    QWidget *center = new QWidget(this);
    this->setCentralWidget(center);

    QVBoxLayout *layout = new QVBoxLayout(center);
    layout->setSpacing(20);
    layout->setContentsMargins(50, 40, 50, 50);
    layout->setAlignment(Qt::AlignTop);

    // 标题
    QLabel *title = new QLabel(" 美化工具");
    QFont f = title->font();
    f.setPointSize(24);
    f.setBold(true);
    title->setFont(f);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("color: #2d3436;");

    // 输入框
    input = new QLineEdit();
    input->setPlaceholderText("请输入内容...");

    // 按钮
    QPushButton *btn1 = new QPushButton("确认");
    QPushButton *btn2 = new QPushButton("成功");
    QPushButton *btn3 = new QPushButton("提示");

    // 绑定点击
    connect(btn1, &QPushButton::clicked, this, &MainWindow::onMainBtnClicked);
    connect(btn2, &QPushButton::clicked, this, &MainWindow::onSuccessBtnClicked);
    connect(btn3, &QPushButton::clicked, this, &MainWindow::onWarningBtnClicked);

    // 添加布局
    layout->addWidget(title);
    layout->addSpacing(10);
    layout->addWidget(input);
    layout->addSpacing(15);
    layout->addWidget(btn1);
    layout->addWidget(btn2);
    layout->addWidget(btn3);
    layout->addStretch();
}

// ===================== 终极美化 =====================
void MainWindow::setStyle()
{
    this->setStyleSheet(R"(
        QMainWindow {
            background-color: #f1f2f6;
        }

        QLineEdit {
            font-size: 15px;
            padding: 12px 16px;
            border: 1px solid #dfe4ea;
            border-radius: 10px;
            background-color: white;
            color: #ee0606;
        }
        QLineEdit:focus {
            border: 1px solid #74b9ff;
        }

        QPushButton {
            font-size: 15px;
            padding: 12px;
            border-radius: 10px;
            color: white;
            border: none;
        }

        QPushButton:hover {
            opacity: 0.9;
        }

        QPushButton:pressed {
            padding: 13px 11px 11px 13px;
        }

        QPushButton:nth-child(3) {
            background-color: #010e1b;
        }

        QPushButton:nth-child(4) {
            background-color: #04e2b6;
        }

        QPushButton:nth-child(5) {
            background-color: #644b07;
            color: #2d3436;
        }
    )");
}

void MainWindow::onMainBtnClicked() {
    QString t = input->text();
    if(t.isEmpty()) QMessageBox::warning(this,"警告","输入不能为空");
    else QMessageBox::information(this,"内容","你输入了：\n"+t);
}
void MainWindow::onSuccessBtnClicked() {
    QMessageBox::information(this,"成功","操作成功！");
}
void MainWindow::onWarningBtnClicked() {
    QMessageBox::information(this,"提示","按钮点击正常！");
}