#include "dialog_pos_graph_config.h"
#include "ui_dialog_pos_graph_config.h"

Dialog_pos_graph_config::Dialog_pos_graph_config(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_pos_graph_config)
{
    ui->setupUi(this);
    setWindowTitle(tr("Configuración: Gráfica de posicionamiento"));
}

Dialog_pos_graph_config::~Dialog_pos_graph_config()
{
    delete ui;
}

void Dialog_pos_graph_config::load_data(QList<float> position0){

    ui->doubleSpinBox_11->setValue(position0[0]);
    ui->doubleSpinBox_12->setValue(position0[1]);
    ui->doubleSpinBox_9->setValue(position0[2]);
    ui->doubleSpinBox_10->setValue(position0[3]);
    ui->doubleSpinBox->setValue(position0[4]);
    ui->doubleSpinBox_2->setValue(position0[5]);
    ui->doubleSpinBox_3->setValue(position0[6]);
    ui->doubleSpinBox_4->setValue(position0[7]);
    ui->doubleSpinBox_5->setValue(position0[8]);
    ui->doubleSpinBox_6->setValue(position0[9]);
    ui->doubleSpinBox_7->setValue(position0[10]);
    ui->doubleSpinBox_8->setValue(position0[11]);
}

QList<float> Dialog_pos_graph_config::anchor_data(){

    QList<float> anchors;

    anchors.append(ui->doubleSpinBox->value());
    anchors.append(ui->doubleSpinBox_5->value());
    anchors.append(ui->doubleSpinBox_2->value());
    anchors.append(ui->doubleSpinBox_6->value());
    anchors.append(ui->doubleSpinBox_3->value());
    anchors.append(ui->doubleSpinBox_7->value());
    anchors.append(ui->doubleSpinBox_4->value());
    anchors.append(ui->doubleSpinBox_8->value());

    anchors.append(ui->doubleSpinBox_9->value());
    anchors.append(ui->doubleSpinBox_10->value());
    anchors.append(ui->doubleSpinBox_11->value());
    anchors.append(ui->doubleSpinBox_12->value());

    return anchors;
}

void Dialog_pos_graph_config::on_pushButton_clicked()
{
    passive=1;
}

bool Dialog_pos_graph_config::passive_mode()
{
    return passive;
}

void Dialog_pos_graph_config::on_doubleSpinBox_11_valueChanged(double arg1)
{
    if(arg1 > ui->doubleSpinBox_12->value() or arg1 == ui->doubleSpinBox_12->value()){
        ui->doubleSpinBox_11->setValue(ui->doubleSpinBox_12->value()-0.1);
    }
}


void Dialog_pos_graph_config::on_doubleSpinBox_12_valueChanged(double arg1)
{
    if(arg1 < ui->doubleSpinBox_11->value() or arg1 == ui->doubleSpinBox_11->value()){
        ui->doubleSpinBox_12->setValue(ui->doubleSpinBox_11->value()+0.1);
    }
}


void Dialog_pos_graph_config::on_doubleSpinBox_9_valueChanged(double arg1)
{
    if(arg1 > ui->doubleSpinBox_10->value() or arg1 == ui->doubleSpinBox_10->value()){
        ui->doubleSpinBox_9->setValue(ui->doubleSpinBox_10->value()-0.1);
    }
}


void Dialog_pos_graph_config::on_doubleSpinBox_10_valueChanged(double arg1)
{
    if(arg1 < ui->doubleSpinBox_9->value() or arg1 == ui->doubleSpinBox_9->value()){
        ui->doubleSpinBox_10->setValue(ui->doubleSpinBox_9->value()+0.1);
    }
}