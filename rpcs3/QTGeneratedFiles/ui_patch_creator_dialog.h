/********************************************************************************
** Form generated from reading UI file 'patch_creator_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCH_CREATOR_DIALOG_H
#define UI_PATCH_CREATOR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patch_creator_dialog
{
public:
    QVBoxLayout *dialogLayout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *leftLayout;
    QTableWidget *instructionTable;
    QHBoxLayout *addPatchLayout;
    QComboBox *addPatchTypeComboBox;
    QLineEdit *addPatchOffsetEdit;
    QLineEdit *addPatchValueEdit;
    QLineEdit *addPatchCommentEdit;
    QPushButton *addPatchButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *rightLayout;
    QGridLayout *gridLayout;
    QLineEdit *hashEdit;
    QHBoxLayout *versionLayout;
    QLabel *label;
    QSpinBox *versionMajorSpinBox;
    QSpinBox *versionMinorSpinBox;
    QLineEdit *notesEdit;
    QLineEdit *authorEdit;
    QLineEdit *groupEdit;
    QLineEdit *patchNameEdit;
    QLineEdit *gameEdit;
    QLineEdit *serialEdit;
    QLineEdit *gameVersionEdit;
    QLabel *validLabel;
    QTextEdit *patchEdit;

    void setupUi(QDialog *patch_creator_dialog)
    {
        if (patch_creator_dialog->objectName().isEmpty())
            patch_creator_dialog->setObjectName(QString::fromUtf8("patch_creator_dialog"));
        patch_creator_dialog->resize(1005, 804);
        dialogLayout = new QVBoxLayout(patch_creator_dialog);
        dialogLayout->setObjectName(QString::fromUtf8("dialogLayout"));
        splitter = new QSplitter(patch_creator_dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        leftLayout = new QVBoxLayout(verticalLayoutWidget);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setContentsMargins(0, 0, 0, 0);
        instructionTable = new QTableWidget(verticalLayoutWidget);
        if (instructionTable->columnCount() < 4)
            instructionTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        instructionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        instructionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        instructionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        instructionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        instructionTable->setObjectName(QString::fromUtf8("instructionTable"));
        instructionTable->setContextMenuPolicy(Qt::CustomContextMenu);
        instructionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        instructionTable->horizontalHeader()->setStretchLastSection(true);

        leftLayout->addWidget(instructionTable);

        addPatchLayout = new QHBoxLayout();
        addPatchLayout->setObjectName(QString::fromUtf8("addPatchLayout"));
        addPatchTypeComboBox = new QComboBox(verticalLayoutWidget);
        addPatchTypeComboBox->setObjectName(QString::fromUtf8("addPatchTypeComboBox"));

        addPatchLayout->addWidget(addPatchTypeComboBox);

        addPatchOffsetEdit = new QLineEdit(verticalLayoutWidget);
        addPatchOffsetEdit->setObjectName(QString::fromUtf8("addPatchOffsetEdit"));

        addPatchLayout->addWidget(addPatchOffsetEdit);

        addPatchValueEdit = new QLineEdit(verticalLayoutWidget);
        addPatchValueEdit->setObjectName(QString::fromUtf8("addPatchValueEdit"));

        addPatchLayout->addWidget(addPatchValueEdit);

        addPatchCommentEdit = new QLineEdit(verticalLayoutWidget);
        addPatchCommentEdit->setObjectName(QString::fromUtf8("addPatchCommentEdit"));

        addPatchLayout->addWidget(addPatchCommentEdit);

        addPatchButton = new QPushButton(verticalLayoutWidget);
        addPatchButton->setObjectName(QString::fromUtf8("addPatchButton"));
        addPatchButton->setAutoDefault(false);

        addPatchLayout->addWidget(addPatchButton);

        addPatchLayout->setStretch(0, 1);
        addPatchLayout->setStretch(1, 1);
        addPatchLayout->setStretch(2, 1);
        addPatchLayout->setStretch(3, 1);

        leftLayout->addLayout(addPatchLayout);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        rightLayout = new QVBoxLayout(verticalLayoutWidget_2);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hashEdit = new QLineEdit(verticalLayoutWidget_2);
        hashEdit->setObjectName(QString::fromUtf8("hashEdit"));

        gridLayout->addWidget(hashEdit, 0, 0, 1, 1);

        versionLayout = new QHBoxLayout();
        versionLayout->setObjectName(QString::fromUtf8("versionLayout"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        versionLayout->addWidget(label);

        versionMajorSpinBox = new QSpinBox(verticalLayoutWidget_2);
        versionMajorSpinBox->setObjectName(QString::fromUtf8("versionMajorSpinBox"));

        versionLayout->addWidget(versionMajorSpinBox);

        versionMinorSpinBox = new QSpinBox(verticalLayoutWidget_2);
        versionMinorSpinBox->setObjectName(QString::fromUtf8("versionMinorSpinBox"));

        versionLayout->addWidget(versionMinorSpinBox);


        gridLayout->addLayout(versionLayout, 5, 1, 1, 1);

        notesEdit = new QLineEdit(verticalLayoutWidget_2);
        notesEdit->setObjectName(QString::fromUtf8("notesEdit"));

        gridLayout->addWidget(notesEdit, 4, 1, 1, 1);

        authorEdit = new QLineEdit(verticalLayoutWidget_2);
        authorEdit->setObjectName(QString::fromUtf8("authorEdit"));

        gridLayout->addWidget(authorEdit, 3, 1, 1, 1);

        groupEdit = new QLineEdit(verticalLayoutWidget_2);
        groupEdit->setObjectName(QString::fromUtf8("groupEdit"));

        gridLayout->addWidget(groupEdit, 1, 1, 1, 1);

        patchNameEdit = new QLineEdit(verticalLayoutWidget_2);
        patchNameEdit->setObjectName(QString::fromUtf8("patchNameEdit"));

        gridLayout->addWidget(patchNameEdit, 0, 1, 1, 1);

        gameEdit = new QLineEdit(verticalLayoutWidget_2);
        gameEdit->setObjectName(QString::fromUtf8("gameEdit"));

        gridLayout->addWidget(gameEdit, 1, 0, 1, 1);

        serialEdit = new QLineEdit(verticalLayoutWidget_2);
        serialEdit->setObjectName(QString::fromUtf8("serialEdit"));

        gridLayout->addWidget(serialEdit, 3, 0, 1, 1);

        gameVersionEdit = new QLineEdit(verticalLayoutWidget_2);
        gameVersionEdit->setObjectName(QString::fromUtf8("gameVersionEdit"));

        gridLayout->addWidget(gameVersionEdit, 4, 0, 1, 1);

        validLabel = new QLabel(verticalLayoutWidget_2);
        validLabel->setObjectName(QString::fromUtf8("validLabel"));
        validLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(validLabel, 5, 0, 1, 1);


        rightLayout->addLayout(gridLayout);

        patchEdit = new QTextEdit(verticalLayoutWidget_2);
        patchEdit->setObjectName(QString::fromUtf8("patchEdit"));
        patchEdit->setReadOnly(true);

        rightLayout->addWidget(patchEdit);

        splitter->addWidget(verticalLayoutWidget_2);

        dialogLayout->addWidget(splitter);


        retranslateUi(patch_creator_dialog);

        QMetaObject::connectSlotsByName(patch_creator_dialog);
    } // setupUi

    void retranslateUi(QDialog *patch_creator_dialog)
    {
        patch_creator_dialog->setWindowTitle(QCoreApplication::translate("patch_creator_dialog", "Patch Creator", nullptr));
        QTableWidgetItem *___qtablewidgetitem = instructionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("patch_creator_dialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = instructionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("patch_creator_dialog", "Offset", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = instructionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("patch_creator_dialog", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = instructionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("patch_creator_dialog", "Comment", nullptr));
        addPatchOffsetEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Offset", nullptr));
        addPatchValueEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Value", nullptr));
        addPatchCommentEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Comment", nullptr));
        addPatchButton->setText(QCoreApplication::translate("patch_creator_dialog", "Add", nullptr));
        hashEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Hash", nullptr));
        label->setText(QCoreApplication::translate("patch_creator_dialog", "Patch Version", nullptr));
        notesEdit->setText(QString());
        notesEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Notes", nullptr));
        authorEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Author", nullptr));
        groupEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Group", nullptr));
        patchNameEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Patch Name", nullptr));
        gameEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Game", nullptr));
        serialEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Title ID", nullptr));
        gameVersionEdit->setPlaceholderText(QCoreApplication::translate("patch_creator_dialog", "Game Versions", nullptr));
        validLabel->setText(QCoreApplication::translate("patch_creator_dialog", "Valid Patch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patch_creator_dialog: public Ui_patch_creator_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCH_CREATOR_DIALOG_H
