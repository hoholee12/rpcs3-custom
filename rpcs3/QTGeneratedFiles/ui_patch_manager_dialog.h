/********************************************************************************
** Form generated from reading UI file 'patch_manager_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCH_MANAGER_DIALOG_H
#define UI_PATCH_MANAGER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patch_manager_dialog
{
public:
    QVBoxLayout *dialog_layout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *patch_tree_layout;
    QHBoxLayout *patch_filter_layout;
    QLineEdit *patch_filter;
    QCheckBox *cb_owned_games_only;
    QTreeWidget *patch_tree;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollAreaWidgetContentsLayout;
    QGroupBox *gb_patch_info;
    QVBoxLayout *patch_info_gb_layout;
    QGroupBox *gb_title;
    QVBoxLayout *title_layout;
    QLabel *label_title;
    QGroupBox *gb_serial;
    QVBoxLayout *serial_layout;
    QLabel *label_serial;
    QGroupBox *gb_app_version;
    QVBoxLayout *layout_app_version;
    QLabel *label_app_version;
    QGroupBox *gb_hash;
    QVBoxLayout *hash_layout;
    QLabel *label_hash;
    QGroupBox *gb_description;
    QVBoxLayout *description_layout;
    QLabel *label_description;
    QGroupBox *gb_patch_version;
    QVBoxLayout *patch_version_layout;
    QLabel *label_patch_version;
    QGroupBox *gb_author;
    QVBoxLayout *author_layout;
    QLabel *label_author;
    QGroupBox *gb_notes;
    QVBoxLayout *notes_layout;
    QLabel *label_notes;
    QSpacerItem *verticalSpacerPatchInfo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *patch_manager_dialog)
    {
        if (patch_manager_dialog->objectName().isEmpty())
            patch_manager_dialog->setObjectName(QString::fromUtf8("patch_manager_dialog"));
        patch_manager_dialog->resize(855, 644);
        patch_manager_dialog->setAcceptDrops(true);
        dialog_layout = new QVBoxLayout(patch_manager_dialog);
        dialog_layout->setObjectName(QString::fromUtf8("dialog_layout"));
        splitter = new QSplitter(patch_manager_dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        patch_tree_layout = new QVBoxLayout(verticalLayoutWidget);
        patch_tree_layout->setObjectName(QString::fromUtf8("patch_tree_layout"));
        patch_tree_layout->setContentsMargins(0, 0, 0, 0);
        patch_filter_layout = new QHBoxLayout();
        patch_filter_layout->setObjectName(QString::fromUtf8("patch_filter_layout"));
        patch_filter = new QLineEdit(verticalLayoutWidget);
        patch_filter->setObjectName(QString::fromUtf8("patch_filter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(patch_filter->sizePolicy().hasHeightForWidth());
        patch_filter->setSizePolicy(sizePolicy);

        patch_filter_layout->addWidget(patch_filter);

        cb_owned_games_only = new QCheckBox(verticalLayoutWidget);
        cb_owned_games_only->setObjectName(QString::fromUtf8("cb_owned_games_only"));

        patch_filter_layout->addWidget(cb_owned_games_only);


        patch_tree_layout->addLayout(patch_filter_layout);

        patch_tree = new QTreeWidget(verticalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        patch_tree->setHeaderItem(__qtreewidgetitem);
        patch_tree->setObjectName(QString::fromUtf8("patch_tree"));
        patch_tree->setContextMenuPolicy(Qt::CustomContextMenu);
        patch_tree->setIndentation(20);
        patch_tree->setHeaderHidden(true);

        patch_tree_layout->addWidget(patch_tree);

        splitter->addWidget(verticalLayoutWidget);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 106, 580));
        scrollAreaWidgetContentsLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaWidgetContentsLayout->setObjectName(QString::fromUtf8("scrollAreaWidgetContentsLayout"));
        scrollAreaWidgetContentsLayout->setContentsMargins(0, 0, 0, 0);
        gb_patch_info = new QGroupBox(scrollAreaWidgetContents);
        gb_patch_info->setObjectName(QString::fromUtf8("gb_patch_info"));
        patch_info_gb_layout = new QVBoxLayout(gb_patch_info);
        patch_info_gb_layout->setObjectName(QString::fromUtf8("patch_info_gb_layout"));
        gb_title = new QGroupBox(gb_patch_info);
        gb_title->setObjectName(QString::fromUtf8("gb_title"));
        title_layout = new QVBoxLayout(gb_title);
        title_layout->setObjectName(QString::fromUtf8("title_layout"));
        label_title = new QLabel(gb_title);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setWordWrap(true);

        title_layout->addWidget(label_title);


        patch_info_gb_layout->addWidget(gb_title);

        gb_serial = new QGroupBox(gb_patch_info);
        gb_serial->setObjectName(QString::fromUtf8("gb_serial"));
        serial_layout = new QVBoxLayout(gb_serial);
        serial_layout->setObjectName(QString::fromUtf8("serial_layout"));
        label_serial = new QLabel(gb_serial);
        label_serial->setObjectName(QString::fromUtf8("label_serial"));
        label_serial->setWordWrap(true);

        serial_layout->addWidget(label_serial);


        patch_info_gb_layout->addWidget(gb_serial);

        gb_app_version = new QGroupBox(gb_patch_info);
        gb_app_version->setObjectName(QString::fromUtf8("gb_app_version"));
        layout_app_version = new QVBoxLayout(gb_app_version);
        layout_app_version->setObjectName(QString::fromUtf8("layout_app_version"));
        label_app_version = new QLabel(gb_app_version);
        label_app_version->setObjectName(QString::fromUtf8("label_app_version"));

        layout_app_version->addWidget(label_app_version);


        patch_info_gb_layout->addWidget(gb_app_version);

        gb_hash = new QGroupBox(gb_patch_info);
        gb_hash->setObjectName(QString::fromUtf8("gb_hash"));
        hash_layout = new QVBoxLayout(gb_hash);
        hash_layout->setObjectName(QString::fromUtf8("hash_layout"));
        label_hash = new QLabel(gb_hash);
        label_hash->setObjectName(QString::fromUtf8("label_hash"));
        label_hash->setWordWrap(true);

        hash_layout->addWidget(label_hash);


        patch_info_gb_layout->addWidget(gb_hash);

        gb_description = new QGroupBox(gb_patch_info);
        gb_description->setObjectName(QString::fromUtf8("gb_description"));
        description_layout = new QVBoxLayout(gb_description);
        description_layout->setObjectName(QString::fromUtf8("description_layout"));
        label_description = new QLabel(gb_description);
        label_description->setObjectName(QString::fromUtf8("label_description"));
        label_description->setWordWrap(true);

        description_layout->addWidget(label_description);


        patch_info_gb_layout->addWidget(gb_description);

        gb_patch_version = new QGroupBox(gb_patch_info);
        gb_patch_version->setObjectName(QString::fromUtf8("gb_patch_version"));
        patch_version_layout = new QVBoxLayout(gb_patch_version);
        patch_version_layout->setObjectName(QString::fromUtf8("patch_version_layout"));
        label_patch_version = new QLabel(gb_patch_version);
        label_patch_version->setObjectName(QString::fromUtf8("label_patch_version"));
        label_patch_version->setWordWrap(true);

        patch_version_layout->addWidget(label_patch_version);


        patch_info_gb_layout->addWidget(gb_patch_version);

        gb_author = new QGroupBox(gb_patch_info);
        gb_author->setObjectName(QString::fromUtf8("gb_author"));
        author_layout = new QVBoxLayout(gb_author);
        author_layout->setObjectName(QString::fromUtf8("author_layout"));
        label_author = new QLabel(gb_author);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setWordWrap(true);

        author_layout->addWidget(label_author);


        patch_info_gb_layout->addWidget(gb_author);

        gb_notes = new QGroupBox(gb_patch_info);
        gb_notes->setObjectName(QString::fromUtf8("gb_notes"));
        notes_layout = new QVBoxLayout(gb_notes);
        notes_layout->setObjectName(QString::fromUtf8("notes_layout"));
        label_notes = new QLabel(gb_notes);
        label_notes->setObjectName(QString::fromUtf8("label_notes"));
        label_notes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_notes->setWordWrap(true);

        notes_layout->addWidget(label_notes);


        patch_info_gb_layout->addWidget(gb_notes);

        verticalSpacerPatchInfo = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        patch_info_gb_layout->addItem(verticalSpacerPatchInfo);

        patch_info_gb_layout->setStretch(7, 1);

        scrollAreaWidgetContentsLayout->addWidget(gb_patch_info);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);

        dialog_layout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(patch_manager_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        dialog_layout->addWidget(buttonBox);


        retranslateUi(patch_manager_dialog);

        QMetaObject::connectSlotsByName(patch_manager_dialog);
    } // setupUi

    void retranslateUi(QDialog *patch_manager_dialog)
    {
        patch_manager_dialog->setWindowTitle(QCoreApplication::translate("patch_manager_dialog", "Patch Manager", nullptr));
        patch_filter->setPlaceholderText(QCoreApplication::translate("patch_manager_dialog", "Filter patches", nullptr));
        cb_owned_games_only->setText(QCoreApplication::translate("patch_manager_dialog", "Only show owned games", nullptr));
        gb_patch_info->setTitle(QCoreApplication::translate("patch_manager_dialog", "Patch Information", nullptr));
        gb_title->setTitle(QCoreApplication::translate("patch_manager_dialog", "Game Title", nullptr));
        label_title->setText(QString());
        gb_serial->setTitle(QCoreApplication::translate("patch_manager_dialog", "Serial", nullptr));
        label_serial->setText(QString());
        gb_app_version->setTitle(QCoreApplication::translate("patch_manager_dialog", "Game Version", nullptr));
        label_app_version->setText(QString());
        gb_hash->setTitle(QCoreApplication::translate("patch_manager_dialog", "Hash", nullptr));
        label_hash->setText(QString());
        gb_description->setTitle(QCoreApplication::translate("patch_manager_dialog", "Description", nullptr));
        label_description->setText(QString());
        gb_patch_version->setTitle(QCoreApplication::translate("patch_manager_dialog", "Patch Version", nullptr));
        label_patch_version->setText(QString());
        gb_author->setTitle(QCoreApplication::translate("patch_manager_dialog", "Author", nullptr));
        label_author->setText(QString());
        gb_notes->setTitle(QCoreApplication::translate("patch_manager_dialog", "Notes", nullptr));
        label_notes->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class patch_manager_dialog: public Ui_patch_manager_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCH_MANAGER_DIALOG_H
