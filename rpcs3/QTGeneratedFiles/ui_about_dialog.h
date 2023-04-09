/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_dialog
{
public:
    QVBoxLayout *about_dialog_layout;
    QWidget *header_section;
    QHBoxLayout *header_section_layout;
    QWidget *icon_widget;
    QVBoxLayout *icon_widget_layout;
    QSvgWidget *icon;
    QSpacerItem *icon_spacer;
    QVBoxLayout *text_layout;
    QLabel *title;
    QLabel *description;
    QLabel *version;
    QScrollArea *name_section;
    QWidget *names;
    QHBoxLayout *names_layout;
    QLabel *developers;
    QLabel *contributors;
    QLabel *supporters;
    QSpacerItem *names_spacer;
    QHBoxLayout *button_section;
    QPushButton *gitHub;
    QPushButton *website;
    QPushButton *forum;
    QPushButton *patreon;
    QSpacerItem *button_spacer;
    QPushButton *close;

    void setupUi(QDialog *about_dialog)
    {
        if (about_dialog->objectName().isEmpty())
            about_dialog->setObjectName(QString::fromUtf8("about_dialog"));
        about_dialog->resize(805, 555);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        about_dialog->setWindowIcon(icon1);
        about_dialog_layout = new QVBoxLayout(about_dialog);
        about_dialog_layout->setSpacing(6);
        about_dialog_layout->setObjectName(QString::fromUtf8("about_dialog_layout"));
        about_dialog_layout->setContentsMargins(0, 0, 0, 0);
        header_section = new QWidget(about_dialog);
        header_section->setObjectName(QString::fromUtf8("header_section"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(header_section->sizePolicy().hasHeightForWidth());
        header_section->setSizePolicy(sizePolicy);
        header_section_layout = new QHBoxLayout(header_section);
        header_section_layout->setObjectName(QString::fromUtf8("header_section_layout"));
        icon_widget = new QWidget(header_section);
        icon_widget->setObjectName(QString::fromUtf8("icon_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(icon_widget->sizePolicy().hasHeightForWidth());
        icon_widget->setSizePolicy(sizePolicy1);
        icon_widget_layout = new QVBoxLayout(icon_widget);
        icon_widget_layout->setObjectName(QString::fromUtf8("icon_widget_layout"));
        icon_widget_layout->setContentsMargins(0, 0, 0, 0);
        icon = new QSvgWidget(icon_widget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMaximumSize(QSize(50, 50));

        icon_widget_layout->addWidget(icon);

        icon_spacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        icon_widget_layout->addItem(icon_spacer);


        header_section_layout->addWidget(icon_widget);

        text_layout = new QVBoxLayout();
        text_layout->setObjectName(QString::fromUtf8("text_layout"));
        title = new QLabel(header_section);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        title->setFont(font);
        title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        title->setTextInteractionFlags(Qt::TextSelectableByMouse);

        text_layout->addWidget(title);

        description = new QLabel(header_section);
        description->setObjectName(QString::fromUtf8("description"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setKerning(true);
        description->setFont(font1);
        description->setTextFormat(Qt::RichText);
        description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description->setWordWrap(false);
        description->setOpenExternalLinks(true);
        description->setTextInteractionFlags(Qt::TextBrowserInteraction);

        text_layout->addWidget(description);

        version = new QLabel(header_section);
        version->setObjectName(QString::fromUtf8("version"));
        version->setFont(font1);
        version->setTextFormat(Qt::RichText);
        version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        version->setWordWrap(true);
        version->setTextInteractionFlags(Qt::TextBrowserInteraction);

        text_layout->addWidget(version);


        header_section_layout->addLayout(text_layout);

        header_section_layout->setStretch(1, 1);

        about_dialog_layout->addWidget(header_section);

        name_section = new QScrollArea(about_dialog);
        name_section->setObjectName(QString::fromUtf8("name_section"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name_section->sizePolicy().hasHeightForWidth());
        name_section->setSizePolicy(sizePolicy2);
        name_section->setMinimumSize(QSize(0, 200));
        name_section->setFrameShape(QFrame::NoFrame);
        name_section->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        name_section->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        name_section->setWidgetResizable(true);
        names = new QWidget();
        names->setObjectName(QString::fromUtf8("names"));
        names->setGeometry(QRect(0, 0, 788, 2076));
        names_layout = new QHBoxLayout(names);
        names_layout->setObjectName(QString::fromUtf8("names_layout"));
        names_layout->setSizeConstraint(QLayout::SetMinimumSize);
        names_layout->setContentsMargins(24, -1, -1, -1);
        developers = new QLabel(names);
        developers->setObjectName(QString::fromUtf8("developers"));
        developers->setScaledContents(false);
        developers->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        developers->setTextInteractionFlags(Qt::TextSelectableByMouse);

        names_layout->addWidget(developers);

        contributors = new QLabel(names);
        contributors->setObjectName(QString::fromUtf8("contributors"));
        contributors->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        contributors->setTextInteractionFlags(Qt::TextSelectableByMouse);

        names_layout->addWidget(contributors);

        supporters = new QLabel(names);
        supporters->setObjectName(QString::fromUtf8("supporters"));
        supporters->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        supporters->setTextInteractionFlags(Qt::TextSelectableByMouse);

        names_layout->addWidget(supporters);

        names_spacer = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        names_layout->addItem(names_spacer);

        names_layout->setStretch(0, 1);
        names_layout->setStretch(1, 1);
        names_layout->setStretch(2, 1);
        names_layout->setStretch(3, 1);
        name_section->setWidget(names);

        about_dialog_layout->addWidget(name_section);

        button_section = new QHBoxLayout();
        button_section->setObjectName(QString::fromUtf8("button_section"));
        button_section->setContentsMargins(9, 9, 9, 9);
        gitHub = new QPushButton(about_dialog);
        gitHub->setObjectName(QString::fromUtf8("gitHub"));

        button_section->addWidget(gitHub);

        website = new QPushButton(about_dialog);
        website->setObjectName(QString::fromUtf8("website"));

        button_section->addWidget(website);

        forum = new QPushButton(about_dialog);
        forum->setObjectName(QString::fromUtf8("forum"));

        button_section->addWidget(forum);

        patreon = new QPushButton(about_dialog);
        patreon->setObjectName(QString::fromUtf8("patreon"));

        button_section->addWidget(patreon);

        button_spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        button_section->addItem(button_spacer);

        close = new QPushButton(about_dialog);
        close->setObjectName(QString::fromUtf8("close"));

        button_section->addWidget(close);


        about_dialog_layout->addLayout(button_section);

        about_dialog_layout->setStretch(1, 1);

        retranslateUi(about_dialog);

        QMetaObject::connectSlotsByName(about_dialog);
    } // setupUi

    void retranslateUi(QDialog *about_dialog)
    {
        about_dialog->setWindowTitle(QCoreApplication::translate("about_dialog", "About RPCS3", nullptr));
        title->setText(QCoreApplication::translate("about_dialog", "RPCS3 PlayStation 3 Emulator", nullptr));
        description->setText(QCoreApplication::translate("about_dialog", "<html><head/><body><p>RPCS3 is an open-source Sony PlayStation 3 emulator and debugger.<br/>It is written in C++ for Windows and Linux funded with <a href=\"https://www.patreon.com/Nekotekina\"><span style=\" text-decoration: underline; color:#0000ff;\">Patreon</span></a>.<br/>Our developers and contributors are always working hard to ensure this project can be the best that it can be.<br/>There are still plenty of implementations to be made and optimizations to be done.</p></body></html>", nullptr));
        version->setText(QString());
        developers->setText(QCoreApplication::translate("about_dialog", "<p><b>Developers:</b><br><br>\302\254DH<br>\302\254AlexAltea<br>\302\254Hykem<br>\302\254Oil<br>Nekotekina<br>\302\254Bigpet<br>\302\254gopalsr83<br>\302\254tambry<br>\302\254vlj<br>kd-11<br>\302\254jarveson<br>\302\254raven02<br>AniLeo<br>cornytrace<br>ssshadow<br>\302\254Numan<br>hcorion<br>Megamouse<br>\302\254flash-fire<br>DAGINATSUKO<br>GalCiv<br>eladash</p>", nullptr));
        contributors->setText(QCoreApplication::translate("about_dialog", "<p><b>Contributors:</b><br><br>BlackDaemon<br>elisha464<br>Aishou<br>krofna<br>xsacha<br>danilaml<br>unknownbrackets<br>Zangetsu38<br>lioncash<br>achurch<br>darkf<br>Syphurith<br>Blaypeg<br>Survanium90<br>georgemoralis<br>ikki84<br>scribam<br>TGE<br>velocity<br>Farseer<br>Dangles<br>ruipin<br>jbeich<br>CookiePLMonster<br>Whatcookie<br>rajkosto<br>Admiral Thrawn</p>", nullptr));
        supporters->setText(QCoreApplication::translate("about_dialog", "<p><b>Supporters:</b><br><br>Howard Garrison<br>EXPotemkin<br>Marko V.<br>danhp<br>Jake (5315825)<br>Ian Reid<br>Tad Sherlock<br>Tyler Friesen<br>Folzar<br>Payton Williams<br>RedPill Australia<br>yanghong<br>Mohammed El-Serougi<br>\320\224\320\270\320\274\320\260 ~Ximer13~ \320\232\321\203\320\273\320\270\320\275<br>James Reed<br>BaroqueSonata<br>Bonzay0<br>Henrijs Kons<br>eoiz<br>Lena St\303\266ffler<br>Michael Holder<br>Max Bosse<br>Tyler Whisinnand<br>Gato Harvey<br>cain4355<br>Thomas Peltier<br>Loli Co.<br>MapleLoonie<br>Travis McEwen<br>Scott Singratsomboune<br>T.E<br>Lukas Rieger<br>Dane Madsen<br>JMS<br>Jonatan R<br>Luke Johnson<br>Thomas Zaorski<br>MyOwnFan<br>Alexandros Mandravillis<br>Socker Bopper<br>Faris Leonhart<br>Fabien Net<br>Raves<br>Barrowsx<br>kilsuton<br>Max Mason<br>Ethan Condon<br>jfidone<br>iaDRM<br>Kazer2.0<br>Bryce Quintin<br>Yuri Kunde Schlesner<br>Abdulla Altayer<br>Nicolas Jallamion<br>Vorvek<br>Ian Faddis<br>Leon<br>Mohammad Taleb<br>Jokez<br>crashX<br>Raveskirza<br>Grant Deacon<b"
                        "r>michael<br>David Zech<br>Ben Manoochehri<br>Adnan Kovacevic<br>Mighty J<br>Sam Shan Jiang<br>TheAnig<br>Rodney Coleman<br>FiniteAce<br>Kian Soon Alex Chiam<br>yukkuri<br>Justin Chadwick<br>toxic Itzi<br>Templerror<br>Myles Wesley Carlson<br>Max Bosse<br>Ethan Clark<br>LupineDream<br>CheatCodesOfLife<br>Jan Zykmund<br>Francesco Cinquemani<br>Andylg<br>Julia H de Camargos<br>Suvodip Mitra<br>Goh<br>Dmitry<br>Steel Brain<br>VarieZ<br>William Swango<br>Matthew Messersmith<br>Duane Locsin<br>Shuddertrix<br>Loweys Litsman<br>Shuddertrix<br>Mason Ferrie<br>Richard Kaplan<br>Hugues Valois<br>richard(lath..ch@)<br>Johnathan (Virtuous John)<br>eoiz<br>Dany Huguenin<br>doobieashtray<br>dean(mag..94@)<br>Pommier Jean-Philippe<br>Douglas Alan Albino<br>Ryan Mull<br>Thor-Erling Engen<br>Nick Carpenter<br>curryking3<br>Jared Tracton<br>alex(koo..oh@)<br>Jason O'Brien<br>Skeletal Charizard<br>Ace00<br>Brandon Corujo<br>HyperBitHero<br>\344\275\263\346\226\207 \346\235\216<br>sorryboi\n"
"          <br>Johnson Bui\n"
"      "
                        "    <br>itachi1986\n"
"          <br>Mortano\n"
"          <br>Xythera\n"
"          <br>Albert Quinteros\n"
"          <br>Uzair Sheikh\n"
"          <br>Ethan Hoppins\n"
"          <br>optic\n"
"          <br>Quill Slyver\n"
"          <br>Averie\n"
"          <br>StevenCarson\n"
"          <br>YuriNator557\n"
"          <br>Deanmaxx\n"
"          <br>linkQatar G\n"
"          <br>Jack Collie\n"
"          <br>TAL BERKOVITZ\n"
"          <br>cjtk\n"
"          <br>Comexzone\n"
"          <br>mapleglass\n"
"          <br>Liquidbings\n"
"          <br>Dormant_Hero@0230\n"
"          <br>Theodore Raney\n"
"          <br>Morito\n"
"          <br>Chaining Ten\n"
"          <br>Xeropel\n"
"          </p>", nullptr));
        gitHub->setText(QCoreApplication::translate("about_dialog", "GitHub", nullptr));
        website->setText(QCoreApplication::translate("about_dialog", "Website", nullptr));
        forum->setText(QCoreApplication::translate("about_dialog", "Forum", nullptr));
        patreon->setText(QCoreApplication::translate("about_dialog", "Patreon", nullptr));
        close->setText(QCoreApplication::translate("about_dialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_dialog: public Ui_about_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
