/********************************************************************************
** Form generated from reading UI file 'camera_settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_SETTINGS_DIALOG_H
#define UI_CAMERA_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_camera_settings_dialog
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *settingsLayout;
    QGroupBox *gbCamera;
    QVBoxLayout *camera_layout;
    QComboBox *combo_camera;
    QGroupBox *gbSettings;
    QVBoxLayout *settings_layout;
    QComboBox *combo_settings;
    QGroupBox *gbPreview;
    QVBoxLayout *preview_layout;
    QCameraViewfinder *viewfinder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *camera_settings_dialog)
    {
        if (camera_settings_dialog->objectName().isEmpty())
            camera_settings_dialog->setObjectName(QString::fromUtf8("camera_settings_dialog"));
        camera_settings_dialog->resize(356, 380);
        mainLayout = new QVBoxLayout(camera_settings_dialog);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        settingsLayout = new QHBoxLayout();
        settingsLayout->setObjectName(QString::fromUtf8("settingsLayout"));
        gbCamera = new QGroupBox(camera_settings_dialog);
        gbCamera->setObjectName(QString::fromUtf8("gbCamera"));
        camera_layout = new QVBoxLayout(gbCamera);
        camera_layout->setObjectName(QString::fromUtf8("camera_layout"));
        combo_camera = new QComboBox(gbCamera);
        combo_camera->setObjectName(QString::fromUtf8("combo_camera"));

        camera_layout->addWidget(combo_camera);


        settingsLayout->addWidget(gbCamera);

        gbSettings = new QGroupBox(camera_settings_dialog);
        gbSettings->setObjectName(QString::fromUtf8("gbSettings"));
        settings_layout = new QVBoxLayout(gbSettings);
        settings_layout->setObjectName(QString::fromUtf8("settings_layout"));
        combo_settings = new QComboBox(gbSettings);
        combo_settings->setObjectName(QString::fromUtf8("combo_settings"));

        settings_layout->addWidget(combo_settings);


        settingsLayout->addWidget(gbSettings);

        settingsLayout->setStretch(0, 1);
        settingsLayout->setStretch(1, 2);

        mainLayout->addLayout(settingsLayout);

        gbPreview = new QGroupBox(camera_settings_dialog);
        gbPreview->setObjectName(QString::fromUtf8("gbPreview"));
        preview_layout = new QVBoxLayout(gbPreview);
        preview_layout->setObjectName(QString::fromUtf8("preview_layout"));
        viewfinder = new QCameraViewfinder(gbPreview);
        viewfinder->setObjectName(QString::fromUtf8("viewfinder"));
        viewfinder->setMinimumSize(QSize(64, 48));
        viewfinder->setAutoFillBackground(true);

        preview_layout->addWidget(viewfinder);


        mainLayout->addWidget(gbPreview);

        buttonBox = new QDialogButtonBox(camera_settings_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        mainLayout->addWidget(buttonBox);

        mainLayout->setStretch(1, 1);

        retranslateUi(camera_settings_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), camera_settings_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), camera_settings_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(camera_settings_dialog);
    } // setupUi

    void retranslateUi(QDialog *camera_settings_dialog)
    {
        camera_settings_dialog->setWindowTitle(QCoreApplication::translate("camera_settings_dialog", "Camera Settings", nullptr));
        gbCamera->setTitle(QCoreApplication::translate("camera_settings_dialog", "Camera", nullptr));
        combo_camera->setPlaceholderText(QCoreApplication::translate("camera_settings_dialog", "No cameras found", nullptr));
        gbSettings->setTitle(QCoreApplication::translate("camera_settings_dialog", "Settings", nullptr));
        combo_settings->setPlaceholderText(QCoreApplication::translate("camera_settings_dialog", "No settings found", nullptr));
        gbPreview->setTitle(QCoreApplication::translate("camera_settings_dialog", "Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camera_settings_dialog: public Ui_camera_settings_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_SETTINGS_DIALOG_H
