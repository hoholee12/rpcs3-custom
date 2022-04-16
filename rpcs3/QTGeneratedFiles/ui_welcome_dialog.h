/********************************************************************************
** Form generated from reading UI file 'welcome_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_DIALOG_H
#define UI_WELCOME_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome_dialog
{
public:
    QVBoxLayout *welcome_dialog_layout;
    QWidget *header_section;
    QVBoxLayout *header_section_layout;
    QHBoxLayout *header_section_content_layout;
    QWidget *icon_widget;
    QVBoxLayout *icon_widget_layout;
    QSvgWidget *icon_label;
    QSpacerItem *icon_spacer;
    QVBoxLayout *header_section_text_layout;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *layout_bottom;
    QLabel *label_info;
    QLabel *label_piracy;
    QHBoxLayout *button_layout;
    QPushButton *okay;
    QSpacerItem *button_layout_left;
    QCheckBox *i_have_read;
    QSpacerItem *button_layout_right;
    QCheckBox *do_not_show;

    void setupUi(QDialog *welcome_dialog)
    {
        if (welcome_dialog->objectName().isEmpty())
            welcome_dialog->setObjectName(QString::fromUtf8("welcome_dialog"));
        welcome_dialog->resize(611, 272);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(welcome_dialog->sizePolicy().hasHeightForWidth());
        welcome_dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        welcome_dialog->setWindowIcon(icon);
        welcome_dialog_layout = new QVBoxLayout(welcome_dialog);
        welcome_dialog_layout->setObjectName(QString::fromUtf8("welcome_dialog_layout"));
        welcome_dialog_layout->setContentsMargins(0, 0, 0, 0);
        header_section = new QWidget(welcome_dialog);
        header_section->setObjectName(QString::fromUtf8("header_section"));
        header_section_layout = new QVBoxLayout(header_section);
        header_section_layout->setObjectName(QString::fromUtf8("header_section_layout"));
        header_section_content_layout = new QHBoxLayout();
        header_section_content_layout->setObjectName(QString::fromUtf8("header_section_content_layout"));
        icon_widget = new QWidget(header_section);
        icon_widget->setObjectName(QString::fromUtf8("icon_widget"));
        icon_widget_layout = new QVBoxLayout(icon_widget);
        icon_widget_layout->setObjectName(QString::fromUtf8("icon_widget_layout"));
        icon_widget_layout->setContentsMargins(0, 0, 0, 0);
        icon_label = new QSvgWidget(icon_widget);
        icon_label->setObjectName(QString::fromUtf8("icon_label"));
        icon_label->setMaximumSize(QSize(50, 50));

        icon_widget_layout->addWidget(icon_label);

        icon_spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        icon_widget_layout->addItem(icon_spacer);


        header_section_content_layout->addWidget(icon_widget);

        header_section_text_layout = new QVBoxLayout();
        header_section_text_layout->setObjectName(QString::fromUtf8("header_section_text_layout"));
        label = new QLabel(header_section);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        header_section_text_layout->addWidget(label);

        label_3 = new QLabel(header_section);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setKerning(true);
        label_3->setFont(font1);
        label_3->setTextFormat(Qt::RichText);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(false);
        label_3->setOpenExternalLinks(true);

        header_section_text_layout->addWidget(label_3);


        header_section_content_layout->addLayout(header_section_text_layout);


        header_section_layout->addLayout(header_section_content_layout);


        welcome_dialog_layout->addWidget(header_section);

        layout_bottom = new QVBoxLayout();
        layout_bottom->setObjectName(QString::fromUtf8("layout_bottom"));
        layout_bottom->setContentsMargins(11, 11, 11, 11);
        label_info = new QLabel(welcome_dialog);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        QFont font2;
        font2.setKerning(true);
        label_info->setFont(font2);
        label_info->setTextFormat(Qt::RichText);
        label_info->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_info->setWordWrap(true);
        label_info->setOpenExternalLinks(true);

        layout_bottom->addWidget(label_info);

        label_piracy = new QLabel(welcome_dialog);
        label_piracy->setObjectName(QString::fromUtf8("label_piracy"));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_piracy->setFont(font3);
        label_piracy->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        layout_bottom->addWidget(label_piracy, 0, Qt::AlignHCenter);

        button_layout = new QHBoxLayout();
        button_layout->setObjectName(QString::fromUtf8("button_layout"));
        button_layout->setContentsMargins(0, 0, 0, 0);
        okay = new QPushButton(welcome_dialog);
        okay->setObjectName(QString::fromUtf8("okay"));
        okay->setAutoDefault(true);

        button_layout->addWidget(okay, 0, Qt::AlignLeft);

        button_layout_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        button_layout->addItem(button_layout_left);

        i_have_read = new QCheckBox(welcome_dialog);
        i_have_read->setObjectName(QString::fromUtf8("i_have_read"));

        button_layout->addWidget(i_have_read, 0, Qt::AlignLeft);

        button_layout_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        button_layout->addItem(button_layout_right);

        do_not_show = new QCheckBox(welcome_dialog);
        do_not_show->setObjectName(QString::fromUtf8("do_not_show"));

        button_layout->addWidget(do_not_show, 0, Qt::AlignLeft);


        layout_bottom->addLayout(button_layout);


        welcome_dialog_layout->addLayout(layout_bottom);


        retranslateUi(welcome_dialog);

        QMetaObject::connectSlotsByName(welcome_dialog);
    } // setupUi

    void retranslateUi(QDialog *welcome_dialog)
    {
        welcome_dialog->setWindowTitle(QCoreApplication::translate("welcome_dialog", "Welcome to RPCS3", nullptr));
        label->setText(QCoreApplication::translate("welcome_dialog", "RPCS3 PlayStation 3 Emulator", nullptr));
        label_3->setText(QCoreApplication::translate("welcome_dialog", "<html><head/><body><p>RPCS3 is an open-source Sony PlayStation 3 emulator and debugger.<br/>It is written in C++ for Windows and Linux and funded with <a href=\"https://www.patreon.com/Nekotekina\"><span style=\" text-decoration: underline; color:#0000ff;\">Patreon</span></a>.<br/>Our developers and contributors are always working hard to ensure this project can be the best that it can be.<br/>There are still plenty of implementations to be made and optimizations to be done.</p></body></html>", nullptr));
        label_info->setText(QCoreApplication::translate("welcome_dialog", "<html><head/><body><p>To get started, you must first install the <span style=\" font-weight:600;\">PlayStation 3 firmware</span>.<br/>Please refer to the <a href=\"https://rpcs3.net/quickstart\"><span style=\" text-decoration: underline; color:#0000ff;\">Quickstart</span></a> guide found on the official website for further information.<br/>If you have any further questions, please refer to the <a href=\"https://rpcs3.net/faq\"><span style=\" text-decoration: underline; color:#0000ff;\">FAQ</span></a>.<br/>Otherwise, further discussion and support can be found on the <a href=\"https://forums.rpcs3.net\"><span style=\" text-decoration: underline; color:#0000ff;\">Forums</span></a> or on our <a href=\"https://discord.me/RPCS3\"><span style=\" text-decoration: underline; color:#0000ff;\">Discord</span></a> server.</p></body></html>", nullptr));
        label_piracy->setText(QCoreApplication::translate("welcome_dialog", "<html><head/><body><p><br/><span style=\" font-weight:600; color:#ff0000;\">RPCS3 does not condone piracy. You must dump your own games.</span><br/></p></body></html>", nullptr));
        okay->setText(QCoreApplication::translate("welcome_dialog", "Continue", nullptr));
        i_have_read->setText(QCoreApplication::translate("welcome_dialog", "I have read the Quickstart guide", nullptr));
        do_not_show->setText(QCoreApplication::translate("welcome_dialog", "Do not show again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome_dialog: public Ui_welcome_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_DIALOG_H
