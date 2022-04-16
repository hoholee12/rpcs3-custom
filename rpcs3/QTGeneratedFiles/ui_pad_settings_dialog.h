/********************************************************************************
** Form generated from reading UI file 'pad_settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAD_SETTINGS_DIALOG_H
#define UI_PAD_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pad_settings_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *mainLayout;
    QHBoxLayout *topLayout;
    QGroupBox *gb_handlers;
    QHBoxLayout *gb_handlers_layout;
    QComboBox *chooseHandler;
    QPushButton *b_refresh;
    QGroupBox *gb_devices;
    QHBoxLayout *gb_devices_layout;
    QComboBox *chooseDevice;
    QGroupBox *gb_profiles;
    QHBoxLayout *gb_profiles_layout;
    QComboBox *chooseProfile;
    QPushButton *b_addProfile;
    QHBoxLayout *bottomLayout;
    QVBoxLayout *verticalLayout_left;
    QGroupBox *gb_dpad;
    QVBoxLayout *gb_dpad_layout;
    QWidget *dpad_up;
    QHBoxLayout *dpad_up_layout;
    QSpacerItem *dpad_up_spacer_left;
    QGroupBox *gb_dpad_up;
    QVBoxLayout *gb_dpad_up_layout;
    QPushButton *b_up;
    QSpacerItem *dpad_up_spacer_right;
    QHBoxLayout *layout_dpad_left_right;
    QGroupBox *gb_dpad_left;
    QVBoxLayout *gb_dpad_left_layout;
    QPushButton *b_left;
    QGroupBox *gb_dpad_right;
    QVBoxLayout *gb_dpad_right_layout;
    QPushButton *b_right;
    QWidget *dpad_down;
    QHBoxLayout *dpad_down_layout;
    QSpacerItem *dpad_down_spacer_left;
    QGroupBox *gb_dpad_down;
    QVBoxLayout *gb_dpad_down_layout;
    QPushButton *b_down;
    QSpacerItem *dpad_down_spacer_right;
    QGroupBox *gb_left_stick;
    QVBoxLayout *gb_left_stick_layout;
    QWidget *left_stick_up;
    QHBoxLayout *left_stick_up_layout;
    QSpacerItem *left_stick_up_spacer_left;
    QGroupBox *gb_left_stick_up;
    QVBoxLayout *gb_left_stick_up_layout;
    QPushButton *b_lstick_up;
    QSpacerItem *left_stick_up_spacer_right;
    QHBoxLayout *layout_left_stick_left_right;
    QGroupBox *gb_left_stick_left;
    QVBoxLayout *gb_left_stick_left_layout;
    QPushButton *b_lstick_left;
    QGroupBox *gb_left_stick_right;
    QVBoxLayout *gb_left_stick_right_layout;
    QPushButton *b_lstick_right;
    QWidget *left_stick_down;
    QHBoxLayout *left_stick_down_layout;
    QSpacerItem *left_stick_down_spacer_left;
    QGroupBox *gb_left_stick_down;
    QVBoxLayout *gb_left_stick_down_layout;
    QPushButton *b_lstick_down;
    QSpacerItem *left_stick_down_spacer_right;
    QGroupBox *gb_pressure_intensity;
    QHBoxLayout *pressure_intensity_layout;
    QPushButton *b_pressure_intensity;
    QSpinBox *sb_pressure_intensity;
    QStackedWidget *left_stack;
    QWidget *pad_page;
    QVBoxLayout *pad_page_layout;
    QGroupBox *gb_triggers;
    QHBoxLayout *gb_triggers_layout;
    QVBoxLayout *gb_trigger_left;
    QSlider *slider_trigger_left;
    QSlider *preview_trigger_left;
    QVBoxLayout *gb_trigger_right;
    QSlider *slider_trigger_right;
    QSlider *preview_trigger_right;
    QGroupBox *gb_vibration;
    QHBoxLayout *gb_vibration_layout;
    QCheckBox *chb_vibration_large;
    QCheckBox *chb_vibration_small;
    QCheckBox *chb_vibration_switch;
    QGroupBox *gb_stick_preview;
    QVBoxLayout *gb_stick_preview_layout;
    QCheckBox *chb_show_emulated_values;
    QSpacerItem *pad_page_spacer;
    QWidget *mouse_page;
    QVBoxLayout *mouse_page_layout;
    QGroupBox *gb_mouse_accel;
    QHBoxLayout *gb_mouse_accel_layout;
    QLabel *mouse_accel_x_label;
    QDoubleSpinBox *mouse_accel_x;
    QSpacerItem *mouse_accel_x_spacer;
    QLabel *mouse_accel_y_label;
    QDoubleSpinBox *mouse_accel_y;
    QSpacerItem *mouse_accel_y_spacer;
    QGroupBox *gb_mouse_dz;
    QHBoxLayout *gb_mouse_dz_layout;
    QLabel *mouse_dz_x_label;
    QSpinBox *mouse_dz_x;
    QSpacerItem *mouse_dz_x_spacer;
    QLabel *mouse_dz_y_label;
    QSpinBox *mouse_dz_y;
    QSpacerItem *mouse_dz_y_spacer;
    QSpacerItem *mouse_page_spacer;
    QSpacerItem *verticalSpacer_left;
    QVBoxLayout *verticalLayout_middle;
    QHBoxLayout *layout_middle_top;
    QVBoxLayout *layout_l1_l2;
    QGroupBox *gb_l1;
    QVBoxLayout *gb_l1_layout;
    QPushButton *b_shift_l1;
    QGroupBox *gb_l2;
    QVBoxLayout *gb_l2_layout;
    QPushButton *b_shift_l2;
    QVBoxLayout *layout_system_buttons;
    QHBoxLayout *layout_select_start;
    QSpacerItem *spacer_select_start_left;
    QGroupBox *gb_select;
    QVBoxLayout *gb_select_layout;
    QPushButton *b_select;
    QGroupBox *gb_start;
    QVBoxLayout *gb_start_layout;
    QPushButton *b_start;
    QSpacerItem *spacer_select_start_right;
    QWidget *widget_ps_button;
    QHBoxLayout *widget_ps_button_layout;
    QSpacerItem *spacer_ps_button_left;
    QGroupBox *gb_ps_button;
    QVBoxLayout *gb_ps_button_layout;
    QPushButton *b_ps;
    QSpacerItem *spacer_ps_button_right;
    QVBoxLayout *layout_r1_r2;
    QGroupBox *gb_r1;
    QVBoxLayout *gb_r1_layout;
    QPushButton *b_shift_r1;
    QGroupBox *gb_r2;
    QVBoxLayout *gb_r2_layout;
    QPushButton *b_shift_r2;
    QWidget *widget_controller;
    QHBoxLayout *widget_controller_layout;
    QLabel *l_controller;
    QHBoxLayout *layout_middle_bottom;
    QSpacerItem *spacer_middle_bottom_left;
    QGroupBox *gb_l3;
    QVBoxLayout *gb_l3_layout;
    QPushButton *b_shift_l3;
    QGroupBox *gb_r3;
    QVBoxLayout *gb_r3_layout;
    QPushButton *b_shift_r3;
    QSpacerItem *spacer_middle_bottom_right;
    QHBoxLayout *layout_choose_class;
    QGroupBox *gb_choose_class;
    QHBoxLayout *horizontalLayout;
    QComboBox *chooseClass;
    QComboBox *chooseProduct;
    QGroupBox *gb_battery;
    QHBoxLayout *gb_battery_layout;
    QProgressBar *pb_battery;
    QPushButton *b_led_settings;
    QSpacerItem *verticalSpacer_middle;
    QGroupBox *gb_description;
    QVBoxLayout *gb_description_layout;
    QLabel *l_description;
    QVBoxLayout *verticalLayout_right;
    QGroupBox *gb_face_buttons;
    QVBoxLayout *gb_face_buttons_layout;
    QWidget *widget_triangle;
    QHBoxLayout *widget_triangle_layout;
    QSpacerItem *spacer_triangle_left;
    QGroupBox *gb_triangle;
    QVBoxLayout *gb_triangle_layout;
    QPushButton *b_triangle;
    QSpacerItem *spacer_triangle_right;
    QHBoxLayout *layout_square_circle;
    QGroupBox *gb_square;
    QVBoxLayout *gb_square_layout;
    QPushButton *b_square;
    QGroupBox *gb_circle;
    QVBoxLayout *gb_circle_layout;
    QPushButton *b_circle;
    QWidget *widget_cross;
    QHBoxLayout *widget_cross_layout;
    QSpacerItem *spacer_cross_left;
    QGroupBox *gb_cross;
    QVBoxLayout *gb_cross_layout;
    QPushButton *b_cross;
    QSpacerItem *spacer_cross_right;
    QGroupBox *gb_right_stick;
    QVBoxLayout *gb_right_stick_layout;
    QWidget *widget_right_stick_up;
    QHBoxLayout *widget_right_stick_up_layout;
    QSpacerItem *spacer_right_stick_up_left;
    QGroupBox *gb_right_stick_up;
    QVBoxLayout *gb_right_stick_up_layout;
    QPushButton *b_rstick_up;
    QSpacerItem *spacer_right_stick_up_right;
    QHBoxLayout *layout_right_stick_left_right;
    QGroupBox *gb_right_stick_left;
    QVBoxLayout *gb_right_stick_left_layout;
    QPushButton *b_rstick_left;
    QGroupBox *gb_right_stick_right;
    QVBoxLayout *gb_right_stick_right_layout;
    QPushButton *b_rstick_right;
    QWidget *widget_right_stick_down;
    QHBoxLayout *widget_right_stick_down_layout;
    QSpacerItem *spacer_right_stick_down_left;
    QGroupBox *gb_right_stick_down;
    QVBoxLayout *gb_right_stick_down_layout;
    QPushButton *b_rstick_down;
    QSpacerItem *spacer_right_stick_down_right;
    QStackedWidget *right_stack;
    QWidget *stick_page;
    QVBoxLayout *stick_page_layout;
    QGroupBox *gb_stick_multi;
    QHBoxLayout *gb_stick_multi_layout;
    QLabel *label_stick_multi_left;
    QDoubleSpinBox *stick_multi_left;
    QSpacerItem *spacer_stick_multi_left;
    QLabel *label_stick_multi_right;
    QDoubleSpinBox *stick_multi_right;
    QSpacerItem *spacer_stick_multi_right;
    QGroupBox *gb_squircle;
    QHBoxLayout *layout_squircle;
    QLabel *label_squircle_left;
    QSpinBox *squircle_left;
    QSpacerItem *spacer_squircle_left;
    QLabel *label_squircle_right;
    QSpinBox *squircle_right;
    QSpacerItem *spacer_squircle_right;
    QGroupBox *gb_sticks;
    QHBoxLayout *gb_sticks_layout;
    QVBoxLayout *gb_stick_left;
    QSlider *slider_stick_left;
    QLabel *preview_stick_left;
    QVBoxLayout *gb_stick_right;
    QSlider *slider_stick_right;
    QLabel *preview_stick_right;
    QWidget *keyboard_page;
    QVBoxLayout *keyboard_page_layout;
    QGroupBox *gb_kb_stick_multi;
    QHBoxLayout *gb_kb_stick_multi_layout;
    QLabel *label_kb_stick_multi_left;
    QDoubleSpinBox *kb_stick_multi_left;
    QSpacerItem *spacer_kb_stick_multi_left;
    QLabel *label_kb_stick_multi_right;
    QDoubleSpinBox *kb_stick_multi_right;
    QSpacerItem *spacer_kb_stick_multi_right;
    QGroupBox *gb_stick_lerp;
    QHBoxLayout *gb_stick_lerp_layout;
    QLabel *left_stick_lerp_label;
    QDoubleSpinBox *left_stick_lerp;
    QSpacerItem *horizontalSpacer_27;
    QLabel *right_stick_lerp_label;
    QDoubleSpinBox *right_stick_lerp;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *keyboard_page_spacer;
    QSpacerItem *verticalSpacer_right;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pad_settings_dialog)
    {
        if (pad_settings_dialog->objectName().isEmpty())
            pad_settings_dialog->setObjectName(QString::fromUtf8("pad_settings_dialog"));
        pad_settings_dialog->setWindowModality(Qt::WindowModal);
        pad_settings_dialog->resize(500, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pad_settings_dialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(pad_settings_dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(pad_settings_dialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        tabWidget = new QTabWidget();
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 858, 715));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        mainLayout = new QVBoxLayout(tab);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(5, 5, 5, 5);
        topLayout = new QHBoxLayout();
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        gb_handlers = new QGroupBox(tab);
        gb_handlers->setObjectName(QString::fromUtf8("gb_handlers"));
        gb_handlers_layout = new QHBoxLayout(gb_handlers);
        gb_handlers_layout->setObjectName(QString::fromUtf8("gb_handlers_layout"));
        gb_handlers_layout->setContentsMargins(5, 5, 5, 5);
        chooseHandler = new QComboBox(gb_handlers);
        chooseHandler->setObjectName(QString::fromUtf8("chooseHandler"));

        gb_handlers_layout->addWidget(chooseHandler);

        b_refresh = new QPushButton(gb_handlers);
        b_refresh->setObjectName(QString::fromUtf8("b_refresh"));
        b_refresh->setAutoDefault(false);

        gb_handlers_layout->addWidget(b_refresh);


        topLayout->addWidget(gb_handlers);

        gb_devices = new QGroupBox(tab);
        gb_devices->setObjectName(QString::fromUtf8("gb_devices"));
        gb_devices_layout = new QHBoxLayout(gb_devices);
        gb_devices_layout->setObjectName(QString::fromUtf8("gb_devices_layout"));
        gb_devices_layout->setContentsMargins(5, 5, 5, 5);
        chooseDevice = new QComboBox(gb_devices);
        chooseDevice->setObjectName(QString::fromUtf8("chooseDevice"));

        gb_devices_layout->addWidget(chooseDevice);


        topLayout->addWidget(gb_devices);

        gb_profiles = new QGroupBox(tab);
        gb_profiles->setObjectName(QString::fromUtf8("gb_profiles"));
        gb_profiles_layout = new QHBoxLayout(gb_profiles);
        gb_profiles_layout->setObjectName(QString::fromUtf8("gb_profiles_layout"));
        gb_profiles_layout->setContentsMargins(5, 5, 5, 5);
        chooseProfile = new QComboBox(gb_profiles);
        chooseProfile->setObjectName(QString::fromUtf8("chooseProfile"));

        gb_profiles_layout->addWidget(chooseProfile);

        b_addProfile = new QPushButton(gb_profiles);
        b_addProfile->setObjectName(QString::fromUtf8("b_addProfile"));
        b_addProfile->setAutoDefault(false);

        gb_profiles_layout->addWidget(b_addProfile);


        topLayout->addWidget(gb_profiles);


        mainLayout->addLayout(topLayout);

        bottomLayout = new QHBoxLayout();
        bottomLayout->setObjectName(QString::fromUtf8("bottomLayout"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setSpacing(5);
        verticalLayout_left->setObjectName(QString::fromUtf8("verticalLayout_left"));
        gb_dpad = new QGroupBox(tab);
        gb_dpad->setObjectName(QString::fromUtf8("gb_dpad"));
        gb_dpad_layout = new QVBoxLayout(gb_dpad);
        gb_dpad_layout->setSpacing(6);
        gb_dpad_layout->setObjectName(QString::fromUtf8("gb_dpad_layout"));
        gb_dpad_layout->setContentsMargins(5, 5, 5, 5);
        dpad_up = new QWidget(gb_dpad);
        dpad_up->setObjectName(QString::fromUtf8("dpad_up"));
        dpad_up_layout = new QHBoxLayout(dpad_up);
        dpad_up_layout->setSpacing(0);
        dpad_up_layout->setObjectName(QString::fromUtf8("dpad_up_layout"));
        dpad_up_layout->setContentsMargins(0, 0, 0, 0);
        dpad_up_spacer_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        dpad_up_layout->addItem(dpad_up_spacer_left);

        gb_dpad_up = new QGroupBox(dpad_up);
        gb_dpad_up->setObjectName(QString::fromUtf8("gb_dpad_up"));
        gb_dpad_up_layout = new QVBoxLayout(gb_dpad_up);
        gb_dpad_up_layout->setObjectName(QString::fromUtf8("gb_dpad_up_layout"));
        gb_dpad_up_layout->setContentsMargins(5, 5, 5, 5);
        b_up = new QPushButton(gb_dpad_up);
        b_up->setObjectName(QString::fromUtf8("b_up"));
        b_up->setAutoDefault(false);

        gb_dpad_up_layout->addWidget(b_up);


        dpad_up_layout->addWidget(gb_dpad_up);

        dpad_up_spacer_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        dpad_up_layout->addItem(dpad_up_spacer_right);


        gb_dpad_layout->addWidget(dpad_up);

        layout_dpad_left_right = new QHBoxLayout();
        layout_dpad_left_right->setObjectName(QString::fromUtf8("layout_dpad_left_right"));
        gb_dpad_left = new QGroupBox(gb_dpad);
        gb_dpad_left->setObjectName(QString::fromUtf8("gb_dpad_left"));
        gb_dpad_left_layout = new QVBoxLayout(gb_dpad_left);
        gb_dpad_left_layout->setObjectName(QString::fromUtf8("gb_dpad_left_layout"));
        gb_dpad_left_layout->setContentsMargins(5, 5, 5, 5);
        b_left = new QPushButton(gb_dpad_left);
        b_left->setObjectName(QString::fromUtf8("b_left"));
        b_left->setAutoDefault(false);

        gb_dpad_left_layout->addWidget(b_left);


        layout_dpad_left_right->addWidget(gb_dpad_left);

        gb_dpad_right = new QGroupBox(gb_dpad);
        gb_dpad_right->setObjectName(QString::fromUtf8("gb_dpad_right"));
        gb_dpad_right_layout = new QVBoxLayout(gb_dpad_right);
        gb_dpad_right_layout->setObjectName(QString::fromUtf8("gb_dpad_right_layout"));
        gb_dpad_right_layout->setContentsMargins(5, 5, 5, 5);
        b_right = new QPushButton(gb_dpad_right);
        b_right->setObjectName(QString::fromUtf8("b_right"));
        b_right->setAutoDefault(false);

        gb_dpad_right_layout->addWidget(b_right);


        layout_dpad_left_right->addWidget(gb_dpad_right);


        gb_dpad_layout->addLayout(layout_dpad_left_right);

        dpad_down = new QWidget(gb_dpad);
        dpad_down->setObjectName(QString::fromUtf8("dpad_down"));
        dpad_down_layout = new QHBoxLayout(dpad_down);
        dpad_down_layout->setObjectName(QString::fromUtf8("dpad_down_layout"));
        dpad_down_layout->setContentsMargins(0, 0, 0, 0);
        dpad_down_spacer_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        dpad_down_layout->addItem(dpad_down_spacer_left);

        gb_dpad_down = new QGroupBox(dpad_down);
        gb_dpad_down->setObjectName(QString::fromUtf8("gb_dpad_down"));
        gb_dpad_down_layout = new QVBoxLayout(gb_dpad_down);
        gb_dpad_down_layout->setObjectName(QString::fromUtf8("gb_dpad_down_layout"));
        gb_dpad_down_layout->setContentsMargins(5, 5, 5, 5);
        b_down = new QPushButton(gb_dpad_down);
        b_down->setObjectName(QString::fromUtf8("b_down"));
        b_down->setAutoDefault(false);

        gb_dpad_down_layout->addWidget(b_down);


        dpad_down_layout->addWidget(gb_dpad_down);

        dpad_down_spacer_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        dpad_down_layout->addItem(dpad_down_spacer_right);


        gb_dpad_layout->addWidget(dpad_down);


        verticalLayout_left->addWidget(gb_dpad);

        gb_left_stick = new QGroupBox(tab);
        gb_left_stick->setObjectName(QString::fromUtf8("gb_left_stick"));
        gb_left_stick_layout = new QVBoxLayout(gb_left_stick);
        gb_left_stick_layout->setObjectName(QString::fromUtf8("gb_left_stick_layout"));
        gb_left_stick_layout->setContentsMargins(5, 5, 5, 5);
        left_stick_up = new QWidget(gb_left_stick);
        left_stick_up->setObjectName(QString::fromUtf8("left_stick_up"));
        left_stick_up_layout = new QHBoxLayout(left_stick_up);
        left_stick_up_layout->setObjectName(QString::fromUtf8("left_stick_up_layout"));
        left_stick_up_layout->setContentsMargins(0, 0, 0, 0);
        left_stick_up_spacer_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        left_stick_up_layout->addItem(left_stick_up_spacer_left);

        gb_left_stick_up = new QGroupBox(left_stick_up);
        gb_left_stick_up->setObjectName(QString::fromUtf8("gb_left_stick_up"));
        gb_left_stick_up_layout = new QVBoxLayout(gb_left_stick_up);
        gb_left_stick_up_layout->setObjectName(QString::fromUtf8("gb_left_stick_up_layout"));
        gb_left_stick_up_layout->setContentsMargins(5, 5, 5, 5);
        b_lstick_up = new QPushButton(gb_left_stick_up);
        b_lstick_up->setObjectName(QString::fromUtf8("b_lstick_up"));
        b_lstick_up->setAutoDefault(false);

        gb_left_stick_up_layout->addWidget(b_lstick_up);


        left_stick_up_layout->addWidget(gb_left_stick_up);

        left_stick_up_spacer_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        left_stick_up_layout->addItem(left_stick_up_spacer_right);


        gb_left_stick_layout->addWidget(left_stick_up);

        layout_left_stick_left_right = new QHBoxLayout();
        layout_left_stick_left_right->setObjectName(QString::fromUtf8("layout_left_stick_left_right"));
        gb_left_stick_left = new QGroupBox(gb_left_stick);
        gb_left_stick_left->setObjectName(QString::fromUtf8("gb_left_stick_left"));
        gb_left_stick_left_layout = new QVBoxLayout(gb_left_stick_left);
        gb_left_stick_left_layout->setObjectName(QString::fromUtf8("gb_left_stick_left_layout"));
        gb_left_stick_left_layout->setContentsMargins(5, 5, 5, 5);
        b_lstick_left = new QPushButton(gb_left_stick_left);
        b_lstick_left->setObjectName(QString::fromUtf8("b_lstick_left"));
        b_lstick_left->setAutoDefault(false);

        gb_left_stick_left_layout->addWidget(b_lstick_left);


        layout_left_stick_left_right->addWidget(gb_left_stick_left);

        gb_left_stick_right = new QGroupBox(gb_left_stick);
        gb_left_stick_right->setObjectName(QString::fromUtf8("gb_left_stick_right"));
        gb_left_stick_right_layout = new QVBoxLayout(gb_left_stick_right);
        gb_left_stick_right_layout->setObjectName(QString::fromUtf8("gb_left_stick_right_layout"));
        gb_left_stick_right_layout->setContentsMargins(5, 5, 5, 5);
        b_lstick_right = new QPushButton(gb_left_stick_right);
        b_lstick_right->setObjectName(QString::fromUtf8("b_lstick_right"));
        b_lstick_right->setAutoDefault(false);

        gb_left_stick_right_layout->addWidget(b_lstick_right);


        layout_left_stick_left_right->addWidget(gb_left_stick_right);


        gb_left_stick_layout->addLayout(layout_left_stick_left_right);

        left_stick_down = new QWidget(gb_left_stick);
        left_stick_down->setObjectName(QString::fromUtf8("left_stick_down"));
        left_stick_down_layout = new QHBoxLayout(left_stick_down);
        left_stick_down_layout->setObjectName(QString::fromUtf8("left_stick_down_layout"));
        left_stick_down_layout->setContentsMargins(0, 0, 0, 0);
        left_stick_down_spacer_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        left_stick_down_layout->addItem(left_stick_down_spacer_left);

        gb_left_stick_down = new QGroupBox(left_stick_down);
        gb_left_stick_down->setObjectName(QString::fromUtf8("gb_left_stick_down"));
        gb_left_stick_down_layout = new QVBoxLayout(gb_left_stick_down);
        gb_left_stick_down_layout->setObjectName(QString::fromUtf8("gb_left_stick_down_layout"));
        gb_left_stick_down_layout->setContentsMargins(5, 5, 5, 5);
        b_lstick_down = new QPushButton(gb_left_stick_down);
        b_lstick_down->setObjectName(QString::fromUtf8("b_lstick_down"));
        b_lstick_down->setAutoDefault(false);

        gb_left_stick_down_layout->addWidget(b_lstick_down);


        left_stick_down_layout->addWidget(gb_left_stick_down);

        left_stick_down_spacer_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        left_stick_down_layout->addItem(left_stick_down_spacer_right);


        gb_left_stick_layout->addWidget(left_stick_down);


        verticalLayout_left->addWidget(gb_left_stick);

        gb_pressure_intensity = new QGroupBox(tab);
        gb_pressure_intensity->setObjectName(QString::fromUtf8("gb_pressure_intensity"));
        pressure_intensity_layout = new QHBoxLayout(gb_pressure_intensity);
        pressure_intensity_layout->setObjectName(QString::fromUtf8("pressure_intensity_layout"));
        pressure_intensity_layout->setContentsMargins(5, 5, 5, 5);
        b_pressure_intensity = new QPushButton(gb_pressure_intensity);
        b_pressure_intensity->setObjectName(QString::fromUtf8("b_pressure_intensity"));

        pressure_intensity_layout->addWidget(b_pressure_intensity);

        sb_pressure_intensity = new QSpinBox(gb_pressure_intensity);
        sb_pressure_intensity->setObjectName(QString::fromUtf8("sb_pressure_intensity"));
        sb_pressure_intensity->setMaximum(100);
        sb_pressure_intensity->setValue(50);

        pressure_intensity_layout->addWidget(sb_pressure_intensity);


        verticalLayout_left->addWidget(gb_pressure_intensity);

        left_stack = new QStackedWidget(tab);
        left_stack->setObjectName(QString::fromUtf8("left_stack"));
        left_stack->setLineWidth(0);
        pad_page = new QWidget();
        pad_page->setObjectName(QString::fromUtf8("pad_page"));
        pad_page_layout = new QVBoxLayout(pad_page);
        pad_page_layout->setObjectName(QString::fromUtf8("pad_page_layout"));
        pad_page_layout->setContentsMargins(0, 0, 0, 0);
        gb_triggers = new QGroupBox(pad_page);
        gb_triggers->setObjectName(QString::fromUtf8("gb_triggers"));
        gb_triggers->setMinimumSize(QSize(0, 80));
        gb_triggers_layout = new QHBoxLayout(gb_triggers);
        gb_triggers_layout->setObjectName(QString::fromUtf8("gb_triggers_layout"));
        gb_triggers_layout->setContentsMargins(5, 5, 5, 5);
        gb_trigger_left = new QVBoxLayout();
        gb_trigger_left->setObjectName(QString::fromUtf8("gb_trigger_left"));
        slider_trigger_left = new QSlider(gb_triggers);
        slider_trigger_left->setObjectName(QString::fromUtf8("slider_trigger_left"));
        slider_trigger_left->setOrientation(Qt::Horizontal);

        gb_trigger_left->addWidget(slider_trigger_left);

        preview_trigger_left = new QSlider(gb_triggers);
        preview_trigger_left->setObjectName(QString::fromUtf8("preview_trigger_left"));
        preview_trigger_left->setOrientation(Qt::Horizontal);

        gb_trigger_left->addWidget(preview_trigger_left);


        gb_triggers_layout->addLayout(gb_trigger_left);

        gb_trigger_right = new QVBoxLayout();
        gb_trigger_right->setObjectName(QString::fromUtf8("gb_trigger_right"));
        slider_trigger_right = new QSlider(gb_triggers);
        slider_trigger_right->setObjectName(QString::fromUtf8("slider_trigger_right"));
        slider_trigger_right->setOrientation(Qt::Horizontal);

        gb_trigger_right->addWidget(slider_trigger_right);

        preview_trigger_right = new QSlider(gb_triggers);
        preview_trigger_right->setObjectName(QString::fromUtf8("preview_trigger_right"));
        preview_trigger_right->setOrientation(Qt::Horizontal);

        gb_trigger_right->addWidget(preview_trigger_right);


        gb_triggers_layout->addLayout(gb_trigger_right);


        pad_page_layout->addWidget(gb_triggers);

        gb_vibration = new QGroupBox(pad_page);
        gb_vibration->setObjectName(QString::fromUtf8("gb_vibration"));
        gb_vibration_layout = new QHBoxLayout(gb_vibration);
        gb_vibration_layout->setObjectName(QString::fromUtf8("gb_vibration_layout"));
        gb_vibration_layout->setContentsMargins(5, 5, 5, 5);
        chb_vibration_large = new QCheckBox(gb_vibration);
        chb_vibration_large->setObjectName(QString::fromUtf8("chb_vibration_large"));
        chb_vibration_large->setChecked(true);

        gb_vibration_layout->addWidget(chb_vibration_large);

        chb_vibration_small = new QCheckBox(gb_vibration);
        chb_vibration_small->setObjectName(QString::fromUtf8("chb_vibration_small"));
        chb_vibration_small->setChecked(true);

        gb_vibration_layout->addWidget(chb_vibration_small);

        chb_vibration_switch = new QCheckBox(gb_vibration);
        chb_vibration_switch->setObjectName(QString::fromUtf8("chb_vibration_switch"));

        gb_vibration_layout->addWidget(chb_vibration_switch);


        pad_page_layout->addWidget(gb_vibration);

        gb_stick_preview = new QGroupBox(pad_page);
        gb_stick_preview->setObjectName(QString::fromUtf8("gb_stick_preview"));
        gb_stick_preview_layout = new QVBoxLayout(gb_stick_preview);
        gb_stick_preview_layout->setObjectName(QString::fromUtf8("gb_stick_preview_layout"));
        gb_stick_preview_layout->setContentsMargins(5, 5, 5, 5);
        chb_show_emulated_values = new QCheckBox(gb_stick_preview);
        chb_show_emulated_values->setObjectName(QString::fromUtf8("chb_show_emulated_values"));

        gb_stick_preview_layout->addWidget(chb_show_emulated_values);


        pad_page_layout->addWidget(gb_stick_preview);

        pad_page_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        pad_page_layout->addItem(pad_page_spacer);

        left_stack->addWidget(pad_page);
        mouse_page = new QWidget();
        mouse_page->setObjectName(QString::fromUtf8("mouse_page"));
        mouse_page_layout = new QVBoxLayout(mouse_page);
        mouse_page_layout->setObjectName(QString::fromUtf8("mouse_page_layout"));
        mouse_page_layout->setContentsMargins(0, 0, 0, 0);
        gb_mouse_accel = new QGroupBox(mouse_page);
        gb_mouse_accel->setObjectName(QString::fromUtf8("gb_mouse_accel"));
        gb_mouse_accel_layout = new QHBoxLayout(gb_mouse_accel);
        gb_mouse_accel_layout->setObjectName(QString::fromUtf8("gb_mouse_accel_layout"));
        gb_mouse_accel_layout->setContentsMargins(5, 5, 5, 5);
        mouse_accel_x_label = new QLabel(gb_mouse_accel);
        mouse_accel_x_label->setObjectName(QString::fromUtf8("mouse_accel_x_label"));

        gb_mouse_accel_layout->addWidget(mouse_accel_x_label);

        mouse_accel_x = new QDoubleSpinBox(gb_mouse_accel);
        mouse_accel_x->setObjectName(QString::fromUtf8("mouse_accel_x"));
        mouse_accel_x->setSingleStep(0.100000000000000);

        gb_mouse_accel_layout->addWidget(mouse_accel_x);

        mouse_accel_x_spacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gb_mouse_accel_layout->addItem(mouse_accel_x_spacer);

        mouse_accel_y_label = new QLabel(gb_mouse_accel);
        mouse_accel_y_label->setObjectName(QString::fromUtf8("mouse_accel_y_label"));

        gb_mouse_accel_layout->addWidget(mouse_accel_y_label);

        mouse_accel_y = new QDoubleSpinBox(gb_mouse_accel);
        mouse_accel_y->setObjectName(QString::fromUtf8("mouse_accel_y"));
        mouse_accel_y->setSingleStep(0.100000000000000);

        gb_mouse_accel_layout->addWidget(mouse_accel_y);

        mouse_accel_y_spacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gb_mouse_accel_layout->addItem(mouse_accel_y_spacer);


        mouse_page_layout->addWidget(gb_mouse_accel);

        gb_mouse_dz = new QGroupBox(mouse_page);
        gb_mouse_dz->setObjectName(QString::fromUtf8("gb_mouse_dz"));
        gb_mouse_dz_layout = new QHBoxLayout(gb_mouse_dz);
        gb_mouse_dz_layout->setObjectName(QString::fromUtf8("gb_mouse_dz_layout"));
        gb_mouse_dz_layout->setContentsMargins(5, 5, 5, 5);
        mouse_dz_x_label = new QLabel(gb_mouse_dz);
        mouse_dz_x_label->setObjectName(QString::fromUtf8("mouse_dz_x_label"));

        gb_mouse_dz_layout->addWidget(mouse_dz_x_label);

        mouse_dz_x = new QSpinBox(gb_mouse_dz);
        mouse_dz_x->setObjectName(QString::fromUtf8("mouse_dz_x"));

        gb_mouse_dz_layout->addWidget(mouse_dz_x);

        mouse_dz_x_spacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gb_mouse_dz_layout->addItem(mouse_dz_x_spacer);

        mouse_dz_y_label = new QLabel(gb_mouse_dz);
        mouse_dz_y_label->setObjectName(QString::fromUtf8("mouse_dz_y_label"));

        gb_mouse_dz_layout->addWidget(mouse_dz_y_label);

        mouse_dz_y = new QSpinBox(gb_mouse_dz);
        mouse_dz_y->setObjectName(QString::fromUtf8("mouse_dz_y"));

        gb_mouse_dz_layout->addWidget(mouse_dz_y);

        mouse_dz_y_spacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gb_mouse_dz_layout->addItem(mouse_dz_y_spacer);


        mouse_page_layout->addWidget(gb_mouse_dz);

        mouse_page_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        mouse_page_layout->addItem(mouse_page_spacer);

        left_stack->addWidget(mouse_page);

        verticalLayout_left->addWidget(left_stack);

        verticalSpacer_left = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_left->addItem(verticalSpacer_left);


        bottomLayout->addLayout(verticalLayout_left);

        verticalLayout_middle = new QVBoxLayout();
        verticalLayout_middle->setSpacing(0);
        verticalLayout_middle->setObjectName(QString::fromUtf8("verticalLayout_middle"));
        layout_middle_top = new QHBoxLayout();
        layout_middle_top->setSpacing(0);
        layout_middle_top->setObjectName(QString::fromUtf8("layout_middle_top"));
        layout_l1_l2 = new QVBoxLayout();
        layout_l1_l2->setObjectName(QString::fromUtf8("layout_l1_l2"));
        gb_l1 = new QGroupBox(tab);
        gb_l1->setObjectName(QString::fromUtf8("gb_l1"));
        gb_l1_layout = new QVBoxLayout(gb_l1);
        gb_l1_layout->setObjectName(QString::fromUtf8("gb_l1_layout"));
        gb_l1_layout->setContentsMargins(5, 5, 5, 5);
        b_shift_l1 = new QPushButton(gb_l1);
        b_shift_l1->setObjectName(QString::fromUtf8("b_shift_l1"));
        b_shift_l1->setAutoDefault(false);

        gb_l1_layout->addWidget(b_shift_l1);


        layout_l1_l2->addWidget(gb_l1);

        gb_l2 = new QGroupBox(tab);
        gb_l2->setObjectName(QString::fromUtf8("gb_l2"));
        gb_l2_layout = new QVBoxLayout(gb_l2);
        gb_l2_layout->setObjectName(QString::fromUtf8("gb_l2_layout"));
        gb_l2_layout->setContentsMargins(5, 5, 5, 5);
        b_shift_l2 = new QPushButton(gb_l2);
        b_shift_l2->setObjectName(QString::fromUtf8("b_shift_l2"));
        b_shift_l2->setAutoDefault(false);

        gb_l2_layout->addWidget(b_shift_l2);


        layout_l1_l2->addWidget(gb_l2);


        layout_middle_top->addLayout(layout_l1_l2);

        layout_system_buttons = new QVBoxLayout();
        layout_system_buttons->setObjectName(QString::fromUtf8("layout_system_buttons"));
        layout_select_start = new QHBoxLayout();
        layout_select_start->setSpacing(10);
        layout_select_start->setObjectName(QString::fromUtf8("layout_select_start"));
        spacer_select_start_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_select_start->addItem(spacer_select_start_left);

        gb_select = new QGroupBox(tab);
        gb_select->setObjectName(QString::fromUtf8("gb_select"));
        gb_select_layout = new QVBoxLayout(gb_select);
        gb_select_layout->setObjectName(QString::fromUtf8("gb_select_layout"));
        gb_select_layout->setContentsMargins(5, 5, 5, 5);
        b_select = new QPushButton(gb_select);
        b_select->setObjectName(QString::fromUtf8("b_select"));
        b_select->setAutoDefault(false);

        gb_select_layout->addWidget(b_select);


        layout_select_start->addWidget(gb_select);

        gb_start = new QGroupBox(tab);
        gb_start->setObjectName(QString::fromUtf8("gb_start"));
        gb_start_layout = new QVBoxLayout(gb_start);
        gb_start_layout->setObjectName(QString::fromUtf8("gb_start_layout"));
        gb_start_layout->setContentsMargins(5, 5, 5, 5);
        b_start = new QPushButton(gb_start);
        b_start->setObjectName(QString::fromUtf8("b_start"));
        b_start->setAutoDefault(false);

        gb_start_layout->addWidget(b_start);


        layout_select_start->addWidget(gb_start);

        spacer_select_start_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_select_start->addItem(spacer_select_start_right);


        layout_system_buttons->addLayout(layout_select_start);

        widget_ps_button = new QWidget(tab);
        widget_ps_button->setObjectName(QString::fromUtf8("widget_ps_button"));
        widget_ps_button_layout = new QHBoxLayout(widget_ps_button);
        widget_ps_button_layout->setSpacing(10);
        widget_ps_button_layout->setObjectName(QString::fromUtf8("widget_ps_button_layout"));
        widget_ps_button_layout->setContentsMargins(0, 0, 0, 0);
        spacer_ps_button_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_ps_button_layout->addItem(spacer_ps_button_left);

        gb_ps_button = new QGroupBox(widget_ps_button);
        gb_ps_button->setObjectName(QString::fromUtf8("gb_ps_button"));
        gb_ps_button_layout = new QVBoxLayout(gb_ps_button);
        gb_ps_button_layout->setObjectName(QString::fromUtf8("gb_ps_button_layout"));
        gb_ps_button_layout->setContentsMargins(5, 5, 5, 5);
        b_ps = new QPushButton(gb_ps_button);
        b_ps->setObjectName(QString::fromUtf8("b_ps"));
        b_ps->setAutoDefault(false);

        gb_ps_button_layout->addWidget(b_ps);


        widget_ps_button_layout->addWidget(gb_ps_button);

        spacer_ps_button_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_ps_button_layout->addItem(spacer_ps_button_right);


        layout_system_buttons->addWidget(widget_ps_button);


        layout_middle_top->addLayout(layout_system_buttons);

        layout_r1_r2 = new QVBoxLayout();
        layout_r1_r2->setObjectName(QString::fromUtf8("layout_r1_r2"));
        gb_r1 = new QGroupBox(tab);
        gb_r1->setObjectName(QString::fromUtf8("gb_r1"));
        gb_r1_layout = new QVBoxLayout(gb_r1);
        gb_r1_layout->setObjectName(QString::fromUtf8("gb_r1_layout"));
        gb_r1_layout->setContentsMargins(5, 5, 5, 5);
        b_shift_r1 = new QPushButton(gb_r1);
        b_shift_r1->setObjectName(QString::fromUtf8("b_shift_r1"));
        b_shift_r1->setAutoDefault(false);

        gb_r1_layout->addWidget(b_shift_r1);


        layout_r1_r2->addWidget(gb_r1);

        gb_r2 = new QGroupBox(tab);
        gb_r2->setObjectName(QString::fromUtf8("gb_r2"));
        gb_r2_layout = new QVBoxLayout(gb_r2);
        gb_r2_layout->setObjectName(QString::fromUtf8("gb_r2_layout"));
        gb_r2_layout->setContentsMargins(5, 5, 5, 5);
        b_shift_r2 = new QPushButton(gb_r2);
        b_shift_r2->setObjectName(QString::fromUtf8("b_shift_r2"));
        b_shift_r2->setAutoDefault(false);

        gb_r2_layout->addWidget(b_shift_r2);


        layout_r1_r2->addWidget(gb_r2);


        layout_middle_top->addLayout(layout_r1_r2);


        verticalLayout_middle->addLayout(layout_middle_top);

        widget_controller = new QWidget(tab);
        widget_controller->setObjectName(QString::fromUtf8("widget_controller"));
        widget_controller->setMinimumSize(QSize(0, 200));
        widget_controller_layout = new QHBoxLayout(widget_controller);
        widget_controller_layout->setObjectName(QString::fromUtf8("widget_controller_layout"));
        widget_controller_layout->setContentsMargins(0, 0, 0, 0);
        l_controller = new QLabel(widget_controller);
        l_controller->setObjectName(QString::fromUtf8("l_controller"));
        l_controller->setMaximumSize(QSize(415, 256));
        l_controller->setPixmap(QPixmap(QString::fromUtf8(":/Icons/DualShock_3.svg")));
        l_controller->setScaledContents(true);
        l_controller->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        widget_controller_layout->addWidget(l_controller);


        verticalLayout_middle->addWidget(widget_controller);

        layout_middle_bottom = new QHBoxLayout();
        layout_middle_bottom->setSpacing(10);
        layout_middle_bottom->setObjectName(QString::fromUtf8("layout_middle_bottom"));
        spacer_middle_bottom_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_middle_bottom->addItem(spacer_middle_bottom_left);

        gb_l3 = new QGroupBox(tab);
        gb_l3->setObjectName(QString::fromUtf8("gb_l3"));
        gb_l3_layout = new QVBoxLayout(gb_l3);
        gb_l3_layout->setObjectName(QString::fromUtf8("gb_l3_layout"));
        gb_l3_layout->setContentsMargins(5, 5, 5, 5);
        b_shift_l3 = new QPushButton(gb_l3);
        b_shift_l3->setObjectName(QString::fromUtf8("b_shift_l3"));
        b_shift_l3->setAutoDefault(false);

        gb_l3_layout->addWidget(b_shift_l3);


        layout_middle_bottom->addWidget(gb_l3);

        gb_r3 = new QGroupBox(tab);
        gb_r3->setObjectName(QString::fromUtf8("gb_r3"));
        gb_r3_layout = new QVBoxLayout(gb_r3);
        gb_r3_layout->setObjectName(QString::fromUtf8("gb_r3_layout"));
        gb_r3_layout->setContentsMargins(5, 5, 5, 5);
        b_shift_r3 = new QPushButton(gb_r3);
        b_shift_r3->setObjectName(QString::fromUtf8("b_shift_r3"));
        b_shift_r3->setAutoDefault(false);

        gb_r3_layout->addWidget(b_shift_r3);


        layout_middle_bottom->addWidget(gb_r3);

        spacer_middle_bottom_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_middle_bottom->addItem(spacer_middle_bottom_right);


        verticalLayout_middle->addLayout(layout_middle_bottom);

        layout_choose_class = new QHBoxLayout();
        layout_choose_class->setSpacing(10);
        layout_choose_class->setObjectName(QString::fromUtf8("layout_choose_class"));
        gb_choose_class = new QGroupBox(tab);
        gb_choose_class->setObjectName(QString::fromUtf8("gb_choose_class"));
        horizontalLayout = new QHBoxLayout(gb_choose_class);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        chooseClass = new QComboBox(gb_choose_class);
        chooseClass->setObjectName(QString::fromUtf8("chooseClass"));

        horizontalLayout->addWidget(chooseClass);

        chooseProduct = new QComboBox(gb_choose_class);
        chooseProduct->setObjectName(QString::fromUtf8("chooseProduct"));

        horizontalLayout->addWidget(chooseProduct);


        layout_choose_class->addWidget(gb_choose_class);

        gb_battery = new QGroupBox(tab);
        gb_battery->setObjectName(QString::fromUtf8("gb_battery"));
        gb_battery->setMinimumSize(QSize(104, 0));
        gb_battery_layout = new QHBoxLayout(gb_battery);
        gb_battery_layout->setObjectName(QString::fromUtf8("gb_battery_layout"));
        gb_battery_layout->setContentsMargins(5, 5, 5, 5);
        pb_battery = new QProgressBar(gb_battery);
        pb_battery->setObjectName(QString::fromUtf8("pb_battery"));
        pb_battery->setMaximumSize(QSize(16777215, 15));
        pb_battery->setValue(0);
        pb_battery->setInvertedAppearance(false);

        gb_battery_layout->addWidget(pb_battery);

        b_led_settings = new QPushButton(gb_battery);
        b_led_settings->setObjectName(QString::fromUtf8("b_led_settings"));
        b_led_settings->setMaximumSize(QSize(16777215, 23));

        gb_battery_layout->addWidget(b_led_settings);

        gb_battery_layout->setStretch(0, 1);
        gb_battery_layout->setStretch(1, 1);

        layout_choose_class->addWidget(gb_battery);

        layout_choose_class->setStretch(0, 1);
        layout_choose_class->setStretch(1, 1);

        verticalLayout_middle->addLayout(layout_choose_class);

        verticalSpacer_middle = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_middle->addItem(verticalSpacer_middle);

        gb_description = new QGroupBox(tab);
        gb_description->setObjectName(QString::fromUtf8("gb_description"));
        gb_description_layout = new QVBoxLayout(gb_description);
        gb_description_layout->setObjectName(QString::fromUtf8("gb_description_layout"));
        l_description = new QLabel(gb_description);
        l_description->setObjectName(QString::fromUtf8("l_description"));
        l_description->setText(QString::fromUtf8("This text should be replaced by an actual description.<br/><br/>"));
        l_description->setTextFormat(Qt::RichText);
        l_description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        l_description->setWordWrap(true);
        l_description->setOpenExternalLinks(true);

        gb_description_layout->addWidget(l_description);


        verticalLayout_middle->addWidget(gb_description);

        verticalLayout_middle->setStretch(5, 1);

        bottomLayout->addLayout(verticalLayout_middle);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setSpacing(5);
        verticalLayout_right->setObjectName(QString::fromUtf8("verticalLayout_right"));
        gb_face_buttons = new QGroupBox(tab);
        gb_face_buttons->setObjectName(QString::fromUtf8("gb_face_buttons"));
        gb_face_buttons_layout = new QVBoxLayout(gb_face_buttons);
        gb_face_buttons_layout->setObjectName(QString::fromUtf8("gb_face_buttons_layout"));
        gb_face_buttons_layout->setContentsMargins(5, 5, 5, 5);
        widget_triangle = new QWidget(gb_face_buttons);
        widget_triangle->setObjectName(QString::fromUtf8("widget_triangle"));
        widget_triangle_layout = new QHBoxLayout(widget_triangle);
        widget_triangle_layout->setObjectName(QString::fromUtf8("widget_triangle_layout"));
        widget_triangle_layout->setContentsMargins(0, 0, 0, 0);
        spacer_triangle_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_triangle_layout->addItem(spacer_triangle_left);

        gb_triangle = new QGroupBox(widget_triangle);
        gb_triangle->setObjectName(QString::fromUtf8("gb_triangle"));
        gb_triangle_layout = new QVBoxLayout(gb_triangle);
        gb_triangle_layout->setObjectName(QString::fromUtf8("gb_triangle_layout"));
        gb_triangle_layout->setContentsMargins(5, 5, 5, 5);
        b_triangle = new QPushButton(gb_triangle);
        b_triangle->setObjectName(QString::fromUtf8("b_triangle"));
        b_triangle->setAutoDefault(false);

        gb_triangle_layout->addWidget(b_triangle);


        widget_triangle_layout->addWidget(gb_triangle);

        spacer_triangle_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_triangle_layout->addItem(spacer_triangle_right);


        gb_face_buttons_layout->addWidget(widget_triangle);

        layout_square_circle = new QHBoxLayout();
        layout_square_circle->setObjectName(QString::fromUtf8("layout_square_circle"));
        gb_square = new QGroupBox(gb_face_buttons);
        gb_square->setObjectName(QString::fromUtf8("gb_square"));
        gb_square_layout = new QVBoxLayout(gb_square);
        gb_square_layout->setObjectName(QString::fromUtf8("gb_square_layout"));
        gb_square_layout->setContentsMargins(5, 5, 5, 5);
        b_square = new QPushButton(gb_square);
        b_square->setObjectName(QString::fromUtf8("b_square"));
        b_square->setAutoDefault(false);

        gb_square_layout->addWidget(b_square);


        layout_square_circle->addWidget(gb_square);

        gb_circle = new QGroupBox(gb_face_buttons);
        gb_circle->setObjectName(QString::fromUtf8("gb_circle"));
        gb_circle_layout = new QVBoxLayout(gb_circle);
        gb_circle_layout->setObjectName(QString::fromUtf8("gb_circle_layout"));
        gb_circle_layout->setContentsMargins(5, 5, 5, 5);
        b_circle = new QPushButton(gb_circle);
        b_circle->setObjectName(QString::fromUtf8("b_circle"));
        b_circle->setAutoDefault(false);

        gb_circle_layout->addWidget(b_circle);


        layout_square_circle->addWidget(gb_circle);


        gb_face_buttons_layout->addLayout(layout_square_circle);

        widget_cross = new QWidget(gb_face_buttons);
        widget_cross->setObjectName(QString::fromUtf8("widget_cross"));
        widget_cross_layout = new QHBoxLayout(widget_cross);
        widget_cross_layout->setObjectName(QString::fromUtf8("widget_cross_layout"));
        widget_cross_layout->setContentsMargins(0, 0, 0, 0);
        spacer_cross_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_cross_layout->addItem(spacer_cross_left);

        gb_cross = new QGroupBox(widget_cross);
        gb_cross->setObjectName(QString::fromUtf8("gb_cross"));
        gb_cross_layout = new QVBoxLayout(gb_cross);
        gb_cross_layout->setObjectName(QString::fromUtf8("gb_cross_layout"));
        gb_cross_layout->setContentsMargins(5, 5, 5, 5);
        b_cross = new QPushButton(gb_cross);
        b_cross->setObjectName(QString::fromUtf8("b_cross"));
        b_cross->setAutoDefault(false);

        gb_cross_layout->addWidget(b_cross);


        widget_cross_layout->addWidget(gb_cross);

        spacer_cross_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_cross_layout->addItem(spacer_cross_right);


        gb_face_buttons_layout->addWidget(widget_cross);


        verticalLayout_right->addWidget(gb_face_buttons);

        gb_right_stick = new QGroupBox(tab);
        gb_right_stick->setObjectName(QString::fromUtf8("gb_right_stick"));
        gb_right_stick_layout = new QVBoxLayout(gb_right_stick);
        gb_right_stick_layout->setObjectName(QString::fromUtf8("gb_right_stick_layout"));
        gb_right_stick_layout->setContentsMargins(5, 5, 5, 5);
        widget_right_stick_up = new QWidget(gb_right_stick);
        widget_right_stick_up->setObjectName(QString::fromUtf8("widget_right_stick_up"));
        widget_right_stick_up_layout = new QHBoxLayout(widget_right_stick_up);
        widget_right_stick_up_layout->setObjectName(QString::fromUtf8("widget_right_stick_up_layout"));
        widget_right_stick_up_layout->setContentsMargins(0, 0, 0, 0);
        spacer_right_stick_up_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_right_stick_up_layout->addItem(spacer_right_stick_up_left);

        gb_right_stick_up = new QGroupBox(widget_right_stick_up);
        gb_right_stick_up->setObjectName(QString::fromUtf8("gb_right_stick_up"));
        gb_right_stick_up_layout = new QVBoxLayout(gb_right_stick_up);
        gb_right_stick_up_layout->setObjectName(QString::fromUtf8("gb_right_stick_up_layout"));
        gb_right_stick_up_layout->setContentsMargins(5, 5, 5, 5);
        b_rstick_up = new QPushButton(gb_right_stick_up);
        b_rstick_up->setObjectName(QString::fromUtf8("b_rstick_up"));
        b_rstick_up->setAutoDefault(false);

        gb_right_stick_up_layout->addWidget(b_rstick_up);


        widget_right_stick_up_layout->addWidget(gb_right_stick_up);

        spacer_right_stick_up_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_right_stick_up_layout->addItem(spacer_right_stick_up_right);


        gb_right_stick_layout->addWidget(widget_right_stick_up);

        layout_right_stick_left_right = new QHBoxLayout();
        layout_right_stick_left_right->setObjectName(QString::fromUtf8("layout_right_stick_left_right"));
        gb_right_stick_left = new QGroupBox(gb_right_stick);
        gb_right_stick_left->setObjectName(QString::fromUtf8("gb_right_stick_left"));
        gb_right_stick_left_layout = new QVBoxLayout(gb_right_stick_left);
        gb_right_stick_left_layout->setObjectName(QString::fromUtf8("gb_right_stick_left_layout"));
        gb_right_stick_left_layout->setContentsMargins(5, 5, 5, 5);
        b_rstick_left = new QPushButton(gb_right_stick_left);
        b_rstick_left->setObjectName(QString::fromUtf8("b_rstick_left"));
        b_rstick_left->setAutoDefault(false);

        gb_right_stick_left_layout->addWidget(b_rstick_left);


        layout_right_stick_left_right->addWidget(gb_right_stick_left);

        gb_right_stick_right = new QGroupBox(gb_right_stick);
        gb_right_stick_right->setObjectName(QString::fromUtf8("gb_right_stick_right"));
        gb_right_stick_right_layout = new QVBoxLayout(gb_right_stick_right);
        gb_right_stick_right_layout->setObjectName(QString::fromUtf8("gb_right_stick_right_layout"));
        gb_right_stick_right_layout->setContentsMargins(5, 5, 5, 5);
        b_rstick_right = new QPushButton(gb_right_stick_right);
        b_rstick_right->setObjectName(QString::fromUtf8("b_rstick_right"));
        b_rstick_right->setAutoDefault(false);

        gb_right_stick_right_layout->addWidget(b_rstick_right);


        layout_right_stick_left_right->addWidget(gb_right_stick_right);


        gb_right_stick_layout->addLayout(layout_right_stick_left_right);

        widget_right_stick_down = new QWidget(gb_right_stick);
        widget_right_stick_down->setObjectName(QString::fromUtf8("widget_right_stick_down"));
        widget_right_stick_down_layout = new QHBoxLayout(widget_right_stick_down);
        widget_right_stick_down_layout->setObjectName(QString::fromUtf8("widget_right_stick_down_layout"));
        widget_right_stick_down_layout->setContentsMargins(0, 0, 0, 0);
        spacer_right_stick_down_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_right_stick_down_layout->addItem(spacer_right_stick_down_left);

        gb_right_stick_down = new QGroupBox(widget_right_stick_down);
        gb_right_stick_down->setObjectName(QString::fromUtf8("gb_right_stick_down"));
        gb_right_stick_down_layout = new QVBoxLayout(gb_right_stick_down);
        gb_right_stick_down_layout->setObjectName(QString::fromUtf8("gb_right_stick_down_layout"));
        gb_right_stick_down_layout->setContentsMargins(5, 5, 5, 5);
        b_rstick_down = new QPushButton(gb_right_stick_down);
        b_rstick_down->setObjectName(QString::fromUtf8("b_rstick_down"));
        b_rstick_down->setAutoDefault(false);

        gb_right_stick_down_layout->addWidget(b_rstick_down);


        widget_right_stick_down_layout->addWidget(gb_right_stick_down);

        spacer_right_stick_down_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        widget_right_stick_down_layout->addItem(spacer_right_stick_down_right);


        gb_right_stick_layout->addWidget(widget_right_stick_down);


        verticalLayout_right->addWidget(gb_right_stick);

        right_stack = new QStackedWidget(tab);
        right_stack->setObjectName(QString::fromUtf8("right_stack"));
        stick_page = new QWidget();
        stick_page->setObjectName(QString::fromUtf8("stick_page"));
        stick_page_layout = new QVBoxLayout(stick_page);
        stick_page_layout->setObjectName(QString::fromUtf8("stick_page_layout"));
        stick_page_layout->setContentsMargins(0, 0, 0, 0);
        gb_stick_multi = new QGroupBox(stick_page);
        gb_stick_multi->setObjectName(QString::fromUtf8("gb_stick_multi"));
        gb_stick_multi_layout = new QHBoxLayout(gb_stick_multi);
        gb_stick_multi_layout->setObjectName(QString::fromUtf8("gb_stick_multi_layout"));
        gb_stick_multi_layout->setContentsMargins(5, 5, 5, 5);
        label_stick_multi_left = new QLabel(gb_stick_multi);
        label_stick_multi_left->setObjectName(QString::fromUtf8("label_stick_multi_left"));

        gb_stick_multi_layout->addWidget(label_stick_multi_left);

        stick_multi_left = new QDoubleSpinBox(gb_stick_multi);
        stick_multi_left->setObjectName(QString::fromUtf8("stick_multi_left"));
        stick_multi_left->setSingleStep(0.100000000000000);

        gb_stick_multi_layout->addWidget(stick_multi_left);

        spacer_stick_multi_left = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gb_stick_multi_layout->addItem(spacer_stick_multi_left);

        label_stick_multi_right = new QLabel(gb_stick_multi);
        label_stick_multi_right->setObjectName(QString::fromUtf8("label_stick_multi_right"));

        gb_stick_multi_layout->addWidget(label_stick_multi_right);

        stick_multi_right = new QDoubleSpinBox(gb_stick_multi);
        stick_multi_right->setObjectName(QString::fromUtf8("stick_multi_right"));
        stick_multi_right->setSingleStep(0.100000000000000);

        gb_stick_multi_layout->addWidget(stick_multi_right);

        spacer_stick_multi_right = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gb_stick_multi_layout->addItem(spacer_stick_multi_right);


        stick_page_layout->addWidget(gb_stick_multi);

        gb_squircle = new QGroupBox(stick_page);
        gb_squircle->setObjectName(QString::fromUtf8("gb_squircle"));
        layout_squircle = new QHBoxLayout(gb_squircle);
        layout_squircle->setObjectName(QString::fromUtf8("layout_squircle"));
        layout_squircle->setContentsMargins(5, 5, 5, 5);
        label_squircle_left = new QLabel(gb_squircle);
        label_squircle_left->setObjectName(QString::fromUtf8("label_squircle_left"));

        layout_squircle->addWidget(label_squircle_left);

        squircle_left = new QSpinBox(gb_squircle);
        squircle_left->setObjectName(QString::fromUtf8("squircle_left"));
        squircle_left->setMaximum(1000000);
        squircle_left->setSingleStep(1000);

        layout_squircle->addWidget(squircle_left);

        spacer_squircle_left = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_squircle->addItem(spacer_squircle_left);

        label_squircle_right = new QLabel(gb_squircle);
        label_squircle_right->setObjectName(QString::fromUtf8("label_squircle_right"));

        layout_squircle->addWidget(label_squircle_right);

        squircle_right = new QSpinBox(gb_squircle);
        squircle_right->setObjectName(QString::fromUtf8("squircle_right"));
        squircle_right->setMaximum(1000000);

        layout_squircle->addWidget(squircle_right);

        spacer_squircle_right = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_squircle->addItem(spacer_squircle_right);


        stick_page_layout->addWidget(gb_squircle);

        gb_sticks = new QGroupBox(stick_page);
        gb_sticks->setObjectName(QString::fromUtf8("gb_sticks"));
        gb_sticks_layout = new QHBoxLayout(gb_sticks);
        gb_sticks_layout->setObjectName(QString::fromUtf8("gb_sticks_layout"));
        gb_sticks_layout->setContentsMargins(5, 5, 5, 5);
        gb_stick_left = new QVBoxLayout();
        gb_stick_left->setObjectName(QString::fromUtf8("gb_stick_left"));
        slider_stick_left = new QSlider(gb_sticks);
        slider_stick_left->setObjectName(QString::fromUtf8("slider_stick_left"));
        slider_stick_left->setOrientation(Qt::Horizontal);

        gb_stick_left->addWidget(slider_stick_left);

        preview_stick_left = new QLabel(gb_sticks);
        preview_stick_left->setObjectName(QString::fromUtf8("preview_stick_left"));

        gb_stick_left->addWidget(preview_stick_left);


        gb_sticks_layout->addLayout(gb_stick_left);

        gb_stick_right = new QVBoxLayout();
        gb_stick_right->setObjectName(QString::fromUtf8("gb_stick_right"));
        slider_stick_right = new QSlider(gb_sticks);
        slider_stick_right->setObjectName(QString::fromUtf8("slider_stick_right"));
        slider_stick_right->setOrientation(Qt::Horizontal);

        gb_stick_right->addWidget(slider_stick_right);

        preview_stick_right = new QLabel(gb_sticks);
        preview_stick_right->setObjectName(QString::fromUtf8("preview_stick_right"));

        gb_stick_right->addWidget(preview_stick_right);


        gb_sticks_layout->addLayout(gb_stick_right);


        stick_page_layout->addWidget(gb_sticks);

        right_stack->addWidget(stick_page);
        keyboard_page = new QWidget();
        keyboard_page->setObjectName(QString::fromUtf8("keyboard_page"));
        keyboard_page_layout = new QVBoxLayout(keyboard_page);
        keyboard_page_layout->setObjectName(QString::fromUtf8("keyboard_page_layout"));
        keyboard_page_layout->setContentsMargins(0, 0, 0, 0);
        gb_kb_stick_multi = new QGroupBox(keyboard_page);
        gb_kb_stick_multi->setObjectName(QString::fromUtf8("gb_kb_stick_multi"));
        gb_kb_stick_multi_layout = new QHBoxLayout(gb_kb_stick_multi);
        gb_kb_stick_multi_layout->setObjectName(QString::fromUtf8("gb_kb_stick_multi_layout"));
        gb_kb_stick_multi_layout->setContentsMargins(5, 5, 5, 5);
        label_kb_stick_multi_left = new QLabel(gb_kb_stick_multi);
        label_kb_stick_multi_left->setObjectName(QString::fromUtf8("label_kb_stick_multi_left"));

        gb_kb_stick_multi_layout->addWidget(label_kb_stick_multi_left);

        kb_stick_multi_left = new QDoubleSpinBox(gb_kb_stick_multi);
        kb_stick_multi_left->setObjectName(QString::fromUtf8("kb_stick_multi_left"));
        kb_stick_multi_left->setSingleStep(0.100000000000000);

        gb_kb_stick_multi_layout->addWidget(kb_stick_multi_left);

        spacer_kb_stick_multi_left = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gb_kb_stick_multi_layout->addItem(spacer_kb_stick_multi_left);

        label_kb_stick_multi_right = new QLabel(gb_kb_stick_multi);
        label_kb_stick_multi_right->setObjectName(QString::fromUtf8("label_kb_stick_multi_right"));

        gb_kb_stick_multi_layout->addWidget(label_kb_stick_multi_right);

        kb_stick_multi_right = new QDoubleSpinBox(gb_kb_stick_multi);
        kb_stick_multi_right->setObjectName(QString::fromUtf8("kb_stick_multi_right"));
        kb_stick_multi_right->setSingleStep(0.100000000000000);

        gb_kb_stick_multi_layout->addWidget(kb_stick_multi_right);

        spacer_kb_stick_multi_right = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gb_kb_stick_multi_layout->addItem(spacer_kb_stick_multi_right);


        keyboard_page_layout->addWidget(gb_kb_stick_multi);

        gb_stick_lerp = new QGroupBox(keyboard_page);
        gb_stick_lerp->setObjectName(QString::fromUtf8("gb_stick_lerp"));
        gb_stick_lerp_layout = new QHBoxLayout(gb_stick_lerp);
        gb_stick_lerp_layout->setObjectName(QString::fromUtf8("gb_stick_lerp_layout"));
        gb_stick_lerp_layout->setContentsMargins(5, 5, 5, 5);
        left_stick_lerp_label = new QLabel(gb_stick_lerp);
        left_stick_lerp_label->setObjectName(QString::fromUtf8("left_stick_lerp_label"));

        gb_stick_lerp_layout->addWidget(left_stick_lerp_label);

        left_stick_lerp = new QDoubleSpinBox(gb_stick_lerp);
        left_stick_lerp->setObjectName(QString::fromUtf8("left_stick_lerp"));
        left_stick_lerp->setSingleStep(0.100000000000000);

        gb_stick_lerp_layout->addWidget(left_stick_lerp);

        horizontalSpacer_27 = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gb_stick_lerp_layout->addItem(horizontalSpacer_27);

        right_stick_lerp_label = new QLabel(gb_stick_lerp);
        right_stick_lerp_label->setObjectName(QString::fromUtf8("right_stick_lerp_label"));

        gb_stick_lerp_layout->addWidget(right_stick_lerp_label);

        right_stick_lerp = new QDoubleSpinBox(gb_stick_lerp);
        right_stick_lerp->setObjectName(QString::fromUtf8("right_stick_lerp"));
        right_stick_lerp->setSingleStep(0.100000000000000);

        gb_stick_lerp_layout->addWidget(right_stick_lerp);

        horizontalSpacer_28 = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gb_stick_lerp_layout->addItem(horizontalSpacer_28);


        keyboard_page_layout->addWidget(gb_stick_lerp);

        keyboard_page_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        keyboard_page_layout->addItem(keyboard_page_spacer);

        right_stack->addWidget(keyboard_page);

        verticalLayout_right->addWidget(right_stack);

        verticalSpacer_right = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_right->addItem(verticalSpacer_right);


        bottomLayout->addLayout(verticalLayout_right);


        mainLayout->addLayout(bottomLayout);

        tabWidget->addTab(tab, QString());
        scrollArea->setWidget(tabWidget);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(pad_settings_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pad_settings_dialog);

        left_stack->setCurrentIndex(0);
        right_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pad_settings_dialog);
    } // setupUi

    void retranslateUi(QDialog *pad_settings_dialog)
    {
        pad_settings_dialog->setWindowTitle(QCoreApplication::translate("pad_settings_dialog", "Configure Keyboard", nullptr));
        gb_handlers->setTitle(QCoreApplication::translate("pad_settings_dialog", "Handlers", nullptr));
        b_refresh->setText(QCoreApplication::translate("pad_settings_dialog", "Refresh", nullptr));
        gb_devices->setTitle(QCoreApplication::translate("pad_settings_dialog", "Devices", nullptr));
        gb_profiles->setTitle(QCoreApplication::translate("pad_settings_dialog", "Profiles", nullptr));
        b_addProfile->setText(QCoreApplication::translate("pad_settings_dialog", "Add Profile", nullptr));
        gb_dpad->setTitle(QCoreApplication::translate("pad_settings_dialog", "D-Pad", nullptr));
        gb_dpad_up->setTitle(QCoreApplication::translate("pad_settings_dialog", "Up", nullptr));
        b_up->setText(QCoreApplication::translate("pad_settings_dialog", "W", nullptr));
        gb_dpad_left->setTitle(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        b_left->setText(QCoreApplication::translate("pad_settings_dialog", "A", nullptr));
        gb_dpad_right->setTitle(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        b_right->setText(QCoreApplication::translate("pad_settings_dialog", "D", nullptr));
        gb_dpad_down->setTitle(QCoreApplication::translate("pad_settings_dialog", "Down", nullptr));
        b_down->setText(QCoreApplication::translate("pad_settings_dialog", "S", nullptr));
        gb_left_stick->setTitle(QCoreApplication::translate("pad_settings_dialog", "Left Stick", nullptr));
        gb_left_stick_up->setTitle(QCoreApplication::translate("pad_settings_dialog", "Up", nullptr));
        b_lstick_up->setText(QCoreApplication::translate("pad_settings_dialog", "Up", nullptr));
        gb_left_stick_left->setTitle(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        b_lstick_left->setText(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        gb_left_stick_right->setTitle(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        b_lstick_right->setText(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        gb_left_stick_down->setTitle(QCoreApplication::translate("pad_settings_dialog", "Down", nullptr));
        b_lstick_down->setText(QCoreApplication::translate("pad_settings_dialog", "Down", nullptr));
        gb_pressure_intensity->setTitle(QCoreApplication::translate("pad_settings_dialog", "Pressure Sensitivity Mode", nullptr));
        b_pressure_intensity->setText(QCoreApplication::translate("pad_settings_dialog", "-", nullptr));
        sb_pressure_intensity->setSuffix(QCoreApplication::translate("pad_settings_dialog", "%", nullptr));
        gb_triggers->setTitle(QCoreApplication::translate("pad_settings_dialog", "Trigger Thresholds", nullptr));
        gb_vibration->setTitle(QCoreApplication::translate("pad_settings_dialog", "Enable Vibration", nullptr));
        chb_vibration_large->setText(QCoreApplication::translate("pad_settings_dialog", "Large", nullptr));
        chb_vibration_small->setText(QCoreApplication::translate("pad_settings_dialog", "Small", nullptr));
        chb_vibration_switch->setText(QCoreApplication::translate("pad_settings_dialog", "Switch", nullptr));
        gb_stick_preview->setTitle(QCoreApplication::translate("pad_settings_dialog", "Stick Preview", nullptr));
        chb_show_emulated_values->setText(QCoreApplication::translate("pad_settings_dialog", "Show Emulated Values", nullptr));
        gb_mouse_accel->setTitle(QCoreApplication::translate("pad_settings_dialog", "Mouse Acceleration", nullptr));
        mouse_accel_x_label->setText(QCoreApplication::translate("pad_settings_dialog", "x", nullptr));
        mouse_accel_y_label->setText(QCoreApplication::translate("pad_settings_dialog", "y", nullptr));
        gb_mouse_dz->setTitle(QCoreApplication::translate("pad_settings_dialog", "Mouse Deadzone", nullptr));
        mouse_dz_x_label->setText(QCoreApplication::translate("pad_settings_dialog", "x", nullptr));
        mouse_dz_y_label->setText(QCoreApplication::translate("pad_settings_dialog", "y", nullptr));
        gb_l1->setTitle(QCoreApplication::translate("pad_settings_dialog", "L1", nullptr));
        b_shift_l1->setText(QCoreApplication::translate("pad_settings_dialog", "Q", nullptr));
        gb_l2->setTitle(QCoreApplication::translate("pad_settings_dialog", "L2", nullptr));
        b_shift_l2->setText(QCoreApplication::translate("pad_settings_dialog", "R", nullptr));
        gb_select->setTitle(QCoreApplication::translate("pad_settings_dialog", "Select", nullptr));
        b_select->setText(QCoreApplication::translate("pad_settings_dialog", "Space", nullptr));
        gb_start->setTitle(QCoreApplication::translate("pad_settings_dialog", "Start", nullptr));
        b_start->setText(QCoreApplication::translate("pad_settings_dialog", "Enter", nullptr));
        gb_ps_button->setTitle(QCoreApplication::translate("pad_settings_dialog", "PS Button", nullptr));
        b_ps->setText(QCoreApplication::translate("pad_settings_dialog", "Backspace", nullptr));
        gb_r1->setTitle(QCoreApplication::translate("pad_settings_dialog", "R1", nullptr));
        b_shift_r1->setText(QCoreApplication::translate("pad_settings_dialog", "E", nullptr));
        gb_r2->setTitle(QCoreApplication::translate("pad_settings_dialog", "R2", nullptr));
        b_shift_r2->setText(QCoreApplication::translate("pad_settings_dialog", "T", nullptr));
        gb_l3->setTitle(QCoreApplication::translate("pad_settings_dialog", "L3", nullptr));
        b_shift_l3->setText(QCoreApplication::translate("pad_settings_dialog", "F", nullptr));
        gb_r3->setTitle(QCoreApplication::translate("pad_settings_dialog", "R3", nullptr));
        b_shift_r3->setText(QCoreApplication::translate("pad_settings_dialog", "G", nullptr));
        gb_choose_class->setTitle(QCoreApplication::translate("pad_settings_dialog", "Device Class", nullptr));
        gb_battery->setTitle(QCoreApplication::translate("pad_settings_dialog", "Battery status and LED", nullptr));
        b_led_settings->setText(QCoreApplication::translate("pad_settings_dialog", "LED Settings", nullptr));
        gb_description->setTitle(QCoreApplication::translate("pad_settings_dialog", "Description", nullptr));
        gb_face_buttons->setTitle(QCoreApplication::translate("pad_settings_dialog", "Face Buttons", nullptr));
        gb_triangle->setTitle(QCoreApplication::translate("pad_settings_dialog", "Triangle", nullptr));
        b_triangle->setText(QCoreApplication::translate("pad_settings_dialog", "V", nullptr));
        gb_square->setTitle(QCoreApplication::translate("pad_settings_dialog", "Square", nullptr));
        b_square->setText(QCoreApplication::translate("pad_settings_dialog", "Z", nullptr));
        gb_circle->setTitle(QCoreApplication::translate("pad_settings_dialog", "Circle", nullptr));
        b_circle->setText(QCoreApplication::translate("pad_settings_dialog", "C", nullptr));
        gb_cross->setTitle(QCoreApplication::translate("pad_settings_dialog", "Cross", nullptr));
        b_cross->setText(QCoreApplication::translate("pad_settings_dialog", "X", nullptr));
        gb_right_stick->setTitle(QCoreApplication::translate("pad_settings_dialog", "Right Stick", nullptr));
        gb_right_stick_up->setTitle(QCoreApplication::translate("pad_settings_dialog", "Up", nullptr));
        b_rstick_up->setText(QCoreApplication::translate("pad_settings_dialog", "PgUp", nullptr));
        gb_right_stick_left->setTitle(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        b_rstick_left->setText(QCoreApplication::translate("pad_settings_dialog", "Home", nullptr));
        gb_right_stick_right->setTitle(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        b_rstick_right->setText(QCoreApplication::translate("pad_settings_dialog", "End", nullptr));
        gb_right_stick_down->setTitle(QCoreApplication::translate("pad_settings_dialog", "Down", nullptr));
        b_rstick_down->setText(QCoreApplication::translate("pad_settings_dialog", "PgDown", nullptr));
        gb_stick_multi->setTitle(QCoreApplication::translate("pad_settings_dialog", "Stick Multipliers", nullptr));
        label_stick_multi_left->setText(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        label_stick_multi_right->setText(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        gb_squircle->setTitle(QCoreApplication::translate("pad_settings_dialog", "Squircle Values", nullptr));
        label_squircle_left->setText(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        label_squircle_right->setText(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        gb_sticks->setTitle(QCoreApplication::translate("pad_settings_dialog", "Analog Stick Deadzones", nullptr));
        preview_stick_left->setText(QString());
        preview_stick_right->setText(QString());
        gb_kb_stick_multi->setTitle(QCoreApplication::translate("pad_settings_dialog", "Stick Multipliers", nullptr));
        label_kb_stick_multi_left->setText(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        label_kb_stick_multi_right->setText(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        gb_stick_lerp->setTitle(QCoreApplication::translate("pad_settings_dialog", "Stick Interpolation", nullptr));
        left_stick_lerp_label->setText(QCoreApplication::translate("pad_settings_dialog", "Left", nullptr));
        right_stick_lerp_label->setText(QCoreApplication::translate("pad_settings_dialog", "Right", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("pad_settings_dialog", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pad_settings_dialog: public Ui_pad_settings_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAD_SETTINGS_DIALOG_H
