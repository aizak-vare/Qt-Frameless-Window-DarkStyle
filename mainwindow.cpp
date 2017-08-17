/*
###############################################################################
#                                                                             #
# GNU LESSER GENERAL PUBLIC LICENSE                                           #
# Version 3, 29 June 2007                                                     #
#                                                                             #
# Copyright (C) 2017 by Juergen Skrotzky (JorgenVikingGod@gmail.com)          #
# Sources: https://github.com/Jorgen-VikingGod/Qt-Frameless-Window-DarkStyle  #
#                                                                             #
###############################################################################
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent/*, Qt::FramelessWindowHint*/), ui(new Ui::MainWindow) {
  ui->setupUi(this);

}

MainWindow::~MainWindow() {
  delete ui;
}
