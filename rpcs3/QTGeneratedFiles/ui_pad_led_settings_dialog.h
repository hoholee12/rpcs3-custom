/********************************************************************************
** Form generated from reading UI file 'pad_led_settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAD_LED_SETTINGS_DIALOG_H
#define UI_PAD_LED_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pad_led_settings_dialog
{
public:
    QVBoxLayout *pad_led_settings_dialog_layout;
    QGroupBox *gb_led_color;
    QVBoxLayout *gb_led_color_layout;
    QLabel *w_color_sample;
    QPushButton *b_colorpicker;
    QGroupBox *gb_battery_status;
    QVBoxLayout *gb_battery_status_layout;
    QCheckBox *cb_led_blink;
    QCheckBox *cb_led_indicate;
    QGroupBox *gb_indicator_brightness;
    QHBoxLayout *gb_indicator_brightness_layout;
    QLabel *l_indicator_brightness;
    QSpacerItem *horizontalSpacer;
    QSlider *hs_indicator_brightness;
    QDialogButtonBox *bb_dialog_buttons;

    void setupUi(QWidget *pad_led_settings_dialog)
    {
        if (pad_led_settings_dialog->objectName().isEmpty())
            pad_led_settings_dialog->setObjectName(QString::fromUtf8("pad_led_settings_dialog"));
        pad_led_settings_dialog->resize(287, 287);
        pad_led_settings_dialog_layout = new QVBoxLayout(pad_led_settings_dialog);
        pad_led_settings_dialog_layout->setSpacing(6);
        pad_led_settings_dialog_layout->setContentsMargins(11, 11, 11, 11);
        pad_led_settings_dialog_layout->setObjectName(QString::fromUtf8("pad_led_settings_dialog_layout"));
        gb_led_color = new QGroupBox(pad_led_settings_dialog);
        gb_led_color->setObjectName(QString::fromUtf8("gb_led_color"));
        gb_led_color->setMinimumSize(QSize(0, 100));
        gb_led_color_layout = new QVBoxLayout(gb_led_color);
        gb_led_color_layout->setSpacing(6);
        gb_led_color_layout->setContentsMargins(11, 11, 11, 11);
        gb_led_color_layout->setObjectName(QString::fromUtf8("gb_led_color_layout"));
        w_color_sample = new QLabel(gb_led_color);
        w_color_sample->setObjectName(QString::fromUtf8("w_color_sample"));

        gb_led_color_layout->addWidget(w_color_sample);

        b_colorpicker = new QPushButton(gb_led_color);
        b_colorpicker->setObjectName(QString::fromUtf8("b_colorpicker"));

        gb_led_color_layout->addWidget(b_colorpicker);


        pad_led_settings_dialog_layout->addWidget(gb_led_color);

        gb_battery_status = new QGroupBox(pad_led_settings_dialog);
        gb_battery_status->setObjectName(QString::fromUtf8("gb_battery_status"));
        gb_battery_status_layout = new QVBoxLayout(gb_battery_status);
        gb_battery_status_layout->setSpacing(6);
        gb_battery_status_layout->setContentsMargins(11, 11, 11, 11);
        gb_battery_status_layout->setObjectName(QString::fromUtf8("gb_battery_status_layout"));
        cb_led_blink = new QCheckBox(gb_battery_status);
        cb_led_blink->setObjectName(QString::fromUtf8("cb_led_blink"));

        gb_battery_status_layout->addWidget(cb_led_blink);

        cb_led_indicate = new QCheckBox(gb_battery_status);
        cb_led_indicate->setObjectName(QString::fromUtf8("cb_led_indicate"));

        gb_battery_status_layout->addWidget(cb_led_indicate);


        pad_led_settings_dialog_layout->addWidget(gb_battery_status);

        gb_indicator_brightness = new QGroupBox(pad_led_settings_dialog);
        gb_indicator_brightness->setObjectName(QString::fromUtf8("gb_indicator_brightness"));
        gb_indicator_brightness_layout = new QHBoxLayout(gb_indicator_brightness);
        gb_indicator_brightness_layout->setSpacing(6);
        gb_indicator_brightness_layout->setContentsMargins(11, 11, 11, 11);
        gb_indicator_brightness_layout->setObjectName(QString::fromUtf8("gb_indicator_brightness_layout"));
        l_indicator_brightness = new QLabel(gb_indicator_brightness);
        l_indicator_brightness->setObjectName(QString::fromUtf8("l_indicator_brightness"));

        gb_indicator_brightness_layout->addWidget(l_indicator_brightness);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gb_indicator_brightness_layout->addItem(horizontalSpacer);

        hs_indicator_brightness = new QSlider(gb_indicator_brightness);
        hs_indicator_brightness->setObjectName(QString::fromUtf8("hs_indicator_brightness"));
        hs_indicator_brightness->setMaximum(100);
        hs_indicator_brightness->setOrientation(Qt::Horizontal);

        gb_indicator_brightness_layout->addWidget(hs_indicator_brightness);

        gb_indicator_brightness_layout->setStretch(0, 2);
        gb_indicator_brightness_layout->setStretch(1, 1);
        gb_indicator_brightness_layout->setStretch(2, 13);

        pad_led_settings_dialog_layout->addWidget(gb_indicator_brightness);

        bb_dialog_buttons = new QDialogButtonBox(pad_led_settings_dialog);
        bb_dialog_buttons->setObjectName(QString::fromUtf8("bb_dialog_buttons"));
        bb_dialog_buttons->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        pad_led_settings_dialog_layout->addWidget(bb_dialog_buttons);


        retranslateUi(pad_led_settings_dialog);

        QMetaObject::connectSlotsByName(pad_led_settings_dialog);
    } // setupUi

    void retranslateUi(QWidget *pad_led_settings_dialog)
    {
        pad_led_settings_dialog->setWindowTitle(QCoreApplication::translate("pad_led_settings_dialog", "LED Settings", nullptr));
        gb_led_color->setTitle(QCoreApplication::translate("pad_led_settings_dialog", "LED Color", nullptr));
        w_color_sample->setText(QString());
        b_colorpicker->setText(QCoreApplication::translate("pad_led_settings_dialog", "Select color", nullptr));
        gb_battery_status->setTitle(QCoreApplication::translate("pad_led_settings_dialog", "In-game battery status", nullptr));
        cb_led_blink->setText(QCoreApplication::translate("pad_led_settings_dialog", "Blink LED when battery is low", nullptr));
        cb_led_indicate->setText(QCoreApplication::translate("pad_led_settings_dialog", "Use LED as a battery indicator", nullptr));
        gb_indicator_brightness->setTitle(QCoreApplication::translate("pad_led_settings_dialog", "LED battery indicator brightness", nullptr));
        l_indicator_brightness->setText(QCoreApplication::translate("pad_led_settings_dialog", "100%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pad_led_settings_dialog: public Ui_pad_led_settings_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAD_LED_SETTINGS_DIALOG_H
