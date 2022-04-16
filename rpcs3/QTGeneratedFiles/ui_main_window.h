/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QAction *bootElfAct;
    QAction *bootGameAct;
    QAction *bootInstallPkgAct;
    QAction *bootInstallPupAct;
    QAction *sysPauseAct;
    QAction *sysStopAct;
    QAction *sysSendOpenMenuAct;
    QAction *sysSendExitAct;
    QAction *confCPUAct;
    QAction *confGPUAct;
    QAction *confPadsAct;
    QAction *confAudioAct;
    QAction *confIOAct;
    QAction *confSystemAct;
    QAction *confAdvAct;
    QAction *confEmuAct;
    QAction *confGuiAct;
    QAction *confAutopauseManagerAct;
    QAction *exitAct;
    QAction *confSavedataManagerAct;
    QAction *actionManage_Trophy_Data;
    QAction *actionManage_Users;
    QAction *toolsCgDisasmAct;
    QAction *toolskernel_explorerAct;
    QAction *toolsmemory_viewerAct;
    QAction *toolsRsxDebuggerAct;
    QAction *toolsStringSearchAct;
    QAction *toolsDecryptSprxLibsAct;
    QAction *toolsExtractMSELFAct;
    QAction *toolsExtractPUPAct;
    QAction *toolsExtractTARAct;
    QAction *showDebuggerAct;
    QAction *showLogAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *showGameListAct;
    QAction *showToolBarAct;
    QAction *showCompatibilityInGridAct;
    QAction *refreshGameListAct;
    QAction *actionManage_RAP_Licenses;
    QAction *updateAct;
    QAction *confVFSDialogAct;
    QAction *clearRecentAct;
    QAction *freezeRecentAct;
    QAction *setIconSizeTinyAct;
    QAction *setIconSizeSmallAct;
    QAction *setIconSizeMediumAct;
    QAction *setIconSizeLargeAct;
    QAction *setlistModeListAct;
    QAction *setlistModeGridAct;
    QAction *sysRebootAct;
    QAction *showCatHDDGameAct;
    QAction *showCatDiscGameAct;
    QAction *showCatPS1GamesAct;
    QAction *showCatPS2GamesAct;
    QAction *showCatPSPGamesAct;
    QAction *showCatHomeAct;
    QAction *showCatAudioVideoAct;
    QAction *showCatGameDataAct;
    QAction *showCatUnknownAct;
    QAction *toolbar_start;
    QAction *toolbar_stop;
    QAction *toolbar_config;
    QAction *toolbar_controls;
    QAction *toolbar_fullscreen;
    QAction *toolbar_list;
    QAction *toolbar_grid;
    QAction *toolbar_refresh;
    QAction *toolbar_open;
    QAction *showCatOtherAct;
    QAction *showHiddenEntriesAct;
    QAction *actionopen_rsx_capture;
    QAction *addGamesAct;
    QAction *showTitleBarsAct;
    QAction *batchCreatePPUCachesAct;
    QAction *batchRemoveCustomConfigurationsAct;
    QAction *batchRemovePPUCachesAct;
    QAction *batchRemoveSPUCachesAct;
    QAction *batchRemoveShaderCachesAct;
    QAction *batchRemoveCustomPadConfigurationsAct;
    QAction *removeDiskCacheAct;
    QAction *actionManage_Skylanders_Portal;
    QAction *actionManage_Cheats;
    QAction *languageAct0;
    QAction *actionManage_Screenshots;
    QAction *removeFirmwareCacheAct;
    QAction *createFirmwareCacheAct;
    QAction *actionCreate_RSX_Capture;
    QAction *actionManage_Game_Patches;
    QAction *confRPCNAct;
    QAction *actionLog_Viewer;
    QAction *showCustomIconsAct;
    QAction *playHoverGifsAct;
    QAction *bootVSHAct;
    QAction *patchCreatorAct;
    QAction *confCamerasAct;
    QWidget *centralWidget;
    QLineEdit *mw_searchbar;
    QWidget *sizeSliderContainer;
    QHBoxLayout *sizeSliderContainer_layout;
    QSlider *sizeSlider;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *bootRecentMenu;
    QMenu *menuBatch;
    QMenu *menuFirmware;
    QMenu *menuEmulation;
    QMenu *menuConfiguration;
    QMenu *menuManage;
    QMenu *menuUtilities;
    QMenu *menuView;
    QMenu *menuGame_List_Icons;
    QMenu *menuGame_List_Mode;
    QMenu *menuGame_Categories;
    QMenu *menuHelp;
    QMenu *languageMenu;
    QToolBar *toolBar;

    void setupUi(QMainWindow *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QString::fromUtf8("main_window"));
        main_window->resize(1058, 580);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(main_window->sizePolicy().hasHeightForWidth());
        main_window->setSizePolicy(sizePolicy);
        main_window->setMinimumSize(QSize(4, 0));
        main_window->setAutoFillBackground(false);
        main_window->setAnimated(true);
        main_window->setDockNestingEnabled(true);
        main_window->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::GroupedDragging);
        bootElfAct = new QAction(main_window);
        bootElfAct->setObjectName(QString::fromUtf8("bootElfAct"));
        bootGameAct = new QAction(main_window);
        bootGameAct->setObjectName(QString::fromUtf8("bootGameAct"));
        bootInstallPkgAct = new QAction(main_window);
        bootInstallPkgAct->setObjectName(QString::fromUtf8("bootInstallPkgAct"));
        bootInstallPupAct = new QAction(main_window);
        bootInstallPupAct->setObjectName(QString::fromUtf8("bootInstallPupAct"));
        sysPauseAct = new QAction(main_window);
        sysPauseAct->setObjectName(QString::fromUtf8("sysPauseAct"));
        sysPauseAct->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        sysPauseAct->setIcon(icon);
        sysStopAct = new QAction(main_window);
        sysStopAct->setObjectName(QString::fromUtf8("sysStopAct"));
        sysStopAct->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        sysStopAct->setIcon(icon1);
        sysSendOpenMenuAct = new QAction(main_window);
        sysSendOpenMenuAct->setObjectName(QString::fromUtf8("sysSendOpenMenuAct"));
        sysSendOpenMenuAct->setEnabled(false);
        sysSendExitAct = new QAction(main_window);
        sysSendExitAct->setObjectName(QString::fromUtf8("sysSendExitAct"));
        sysSendExitAct->setEnabled(false);
        confCPUAct = new QAction(main_window);
        confCPUAct->setObjectName(QString::fromUtf8("confCPUAct"));
        confGPUAct = new QAction(main_window);
        confGPUAct->setObjectName(QString::fromUtf8("confGPUAct"));
        confPadsAct = new QAction(main_window);
        confPadsAct->setObjectName(QString::fromUtf8("confPadsAct"));
        confAudioAct = new QAction(main_window);
        confAudioAct->setObjectName(QString::fromUtf8("confAudioAct"));
        confIOAct = new QAction(main_window);
        confIOAct->setObjectName(QString::fromUtf8("confIOAct"));
        confSystemAct = new QAction(main_window);
        confSystemAct->setObjectName(QString::fromUtf8("confSystemAct"));
        confAdvAct = new QAction(main_window);
        confAdvAct->setObjectName(QString::fromUtf8("confAdvAct"));
        confEmuAct = new QAction(main_window);
        confEmuAct->setObjectName(QString::fromUtf8("confEmuAct"));
        confGuiAct = new QAction(main_window);
        confGuiAct->setObjectName(QString::fromUtf8("confGuiAct"));
        confAutopauseManagerAct = new QAction(main_window);
        confAutopauseManagerAct->setObjectName(QString::fromUtf8("confAutopauseManagerAct"));
        confAutopauseManagerAct->setEnabled(false);
        exitAct = new QAction(main_window);
        exitAct->setObjectName(QString::fromUtf8("exitAct"));
        confSavedataManagerAct = new QAction(main_window);
        confSavedataManagerAct->setObjectName(QString::fromUtf8("confSavedataManagerAct"));
        confSavedataManagerAct->setEnabled(true);
        actionManage_Trophy_Data = new QAction(main_window);
        actionManage_Trophy_Data->setObjectName(QString::fromUtf8("actionManage_Trophy_Data"));
        actionManage_Trophy_Data->setEnabled(true);
        actionManage_Users = new QAction(main_window);
        actionManage_Users->setObjectName(QString::fromUtf8("actionManage_Users"));
        toolsCgDisasmAct = new QAction(main_window);
        toolsCgDisasmAct->setObjectName(QString::fromUtf8("toolsCgDisasmAct"));
        toolskernel_explorerAct = new QAction(main_window);
        toolskernel_explorerAct->setObjectName(QString::fromUtf8("toolskernel_explorerAct"));
        toolskernel_explorerAct->setEnabled(false);
        toolsmemory_viewerAct = new QAction(main_window);
        toolsmemory_viewerAct->setObjectName(QString::fromUtf8("toolsmemory_viewerAct"));
        toolsmemory_viewerAct->setEnabled(false);
        toolsRsxDebuggerAct = new QAction(main_window);
        toolsRsxDebuggerAct->setObjectName(QString::fromUtf8("toolsRsxDebuggerAct"));
        toolsRsxDebuggerAct->setEnabled(false);
        toolsStringSearchAct = new QAction(main_window);
        toolsStringSearchAct->setObjectName(QString::fromUtf8("toolsStringSearchAct"));
        toolsStringSearchAct->setEnabled(false);
        toolsDecryptSprxLibsAct = new QAction(main_window);
        toolsDecryptSprxLibsAct->setObjectName(QString::fromUtf8("toolsDecryptSprxLibsAct"));
        toolsExtractMSELFAct = new QAction(main_window);
        toolsExtractMSELFAct->setObjectName(QString::fromUtf8("toolsExtractMSELFAct"));
        toolsExtractPUPAct = new QAction(main_window);
        toolsExtractPUPAct->setObjectName(QString::fromUtf8("toolsExtractPUPAct"));
        toolsExtractTARAct = new QAction(main_window);
        toolsExtractTARAct->setObjectName(QString::fromUtf8("toolsExtractTARAct"));
        showDebuggerAct = new QAction(main_window);
        showDebuggerAct->setObjectName(QString::fromUtf8("showDebuggerAct"));
        showDebuggerAct->setCheckable(true);
        showLogAct = new QAction(main_window);
        showLogAct->setObjectName(QString::fromUtf8("showLogAct"));
        showLogAct->setCheckable(true);
        aboutAct = new QAction(main_window);
        aboutAct->setObjectName(QString::fromUtf8("aboutAct"));
        aboutQtAct = new QAction(main_window);
        aboutQtAct->setObjectName(QString::fromUtf8("aboutQtAct"));
        showGameListAct = new QAction(main_window);
        showGameListAct->setObjectName(QString::fromUtf8("showGameListAct"));
        showGameListAct->setCheckable(true);
        showToolBarAct = new QAction(main_window);
        showToolBarAct->setObjectName(QString::fromUtf8("showToolBarAct"));
        showToolBarAct->setCheckable(true);
        showCompatibilityInGridAct = new QAction(main_window);
        showCompatibilityInGridAct->setObjectName(QString::fromUtf8("showCompatibilityInGridAct"));
        showCompatibilityInGridAct->setCheckable(true);
        refreshGameListAct = new QAction(main_window);
        refreshGameListAct->setObjectName(QString::fromUtf8("refreshGameListAct"));
        actionManage_RAP_Licenses = new QAction(main_window);
        actionManage_RAP_Licenses->setObjectName(QString::fromUtf8("actionManage_RAP_Licenses"));
        actionManage_RAP_Licenses->setEnabled(false);
        updateAct = new QAction(main_window);
        updateAct->setObjectName(QString::fromUtf8("updateAct"));
        confVFSDialogAct = new QAction(main_window);
        confVFSDialogAct->setObjectName(QString::fromUtf8("confVFSDialogAct"));
        clearRecentAct = new QAction(main_window);
        clearRecentAct->setObjectName(QString::fromUtf8("clearRecentAct"));
        freezeRecentAct = new QAction(main_window);
        freezeRecentAct->setObjectName(QString::fromUtf8("freezeRecentAct"));
        freezeRecentAct->setCheckable(true);
        setIconSizeTinyAct = new QAction(main_window);
        setIconSizeTinyAct->setObjectName(QString::fromUtf8("setIconSizeTinyAct"));
        setIconSizeTinyAct->setCheckable(true);
        setIconSizeSmallAct = new QAction(main_window);
        setIconSizeSmallAct->setObjectName(QString::fromUtf8("setIconSizeSmallAct"));
        setIconSizeSmallAct->setCheckable(true);
        setIconSizeSmallAct->setChecked(true);
        setIconSizeMediumAct = new QAction(main_window);
        setIconSizeMediumAct->setObjectName(QString::fromUtf8("setIconSizeMediumAct"));
        setIconSizeMediumAct->setCheckable(true);
        setIconSizeLargeAct = new QAction(main_window);
        setIconSizeLargeAct->setObjectName(QString::fromUtf8("setIconSizeLargeAct"));
        setIconSizeLargeAct->setCheckable(true);
        setlistModeListAct = new QAction(main_window);
        setlistModeListAct->setObjectName(QString::fromUtf8("setlistModeListAct"));
        setlistModeListAct->setCheckable(true);
        setlistModeListAct->setChecked(true);
        setlistModeGridAct = new QAction(main_window);
        setlistModeGridAct->setObjectName(QString::fromUtf8("setlistModeGridAct"));
        setlistModeGridAct->setCheckable(true);
        sysRebootAct = new QAction(main_window);
        sysRebootAct->setObjectName(QString::fromUtf8("sysRebootAct"));
        sysRebootAct->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        sysRebootAct->setIcon(icon2);
        showCatHDDGameAct = new QAction(main_window);
        showCatHDDGameAct->setObjectName(QString::fromUtf8("showCatHDDGameAct"));
        showCatHDDGameAct->setCheckable(true);
        showCatHDDGameAct->setChecked(true);
        showCatDiscGameAct = new QAction(main_window);
        showCatDiscGameAct->setObjectName(QString::fromUtf8("showCatDiscGameAct"));
        showCatDiscGameAct->setCheckable(true);
        showCatDiscGameAct->setChecked(true);
        showCatPS1GamesAct = new QAction(main_window);
        showCatPS1GamesAct->setObjectName(QString::fromUtf8("showCatPS1GamesAct"));
        showCatPS1GamesAct->setCheckable(true);
        showCatPS1GamesAct->setChecked(true);
        showCatPS2GamesAct = new QAction(main_window);
        showCatPS2GamesAct->setObjectName(QString::fromUtf8("showCatPS2GamesAct"));
        showCatPS2GamesAct->setCheckable(true);
        showCatPS2GamesAct->setChecked(true);
        showCatPSPGamesAct = new QAction(main_window);
        showCatPSPGamesAct->setObjectName(QString::fromUtf8("showCatPSPGamesAct"));
        showCatPSPGamesAct->setCheckable(true);
        showCatPSPGamesAct->setChecked(true);
        showCatHomeAct = new QAction(main_window);
        showCatHomeAct->setObjectName(QString::fromUtf8("showCatHomeAct"));
        showCatHomeAct->setCheckable(true);
        showCatHomeAct->setChecked(true);
        showCatAudioVideoAct = new QAction(main_window);
        showCatAudioVideoAct->setObjectName(QString::fromUtf8("showCatAudioVideoAct"));
        showCatAudioVideoAct->setCheckable(true);
        showCatAudioVideoAct->setChecked(true);
        showCatGameDataAct = new QAction(main_window);
        showCatGameDataAct->setObjectName(QString::fromUtf8("showCatGameDataAct"));
        showCatGameDataAct->setCheckable(true);
        showCatGameDataAct->setChecked(true);
        showCatUnknownAct = new QAction(main_window);
        showCatUnknownAct->setObjectName(QString::fromUtf8("showCatUnknownAct"));
        showCatUnknownAct->setCheckable(true);
        showCatUnknownAct->setChecked(true);
        toolbar_start = new QAction(main_window);
        toolbar_start->setObjectName(QString::fromUtf8("toolbar_start"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_start->setIcon(icon3);
        toolbar_stop = new QAction(main_window);
        toolbar_stop->setObjectName(QString::fromUtf8("toolbar_stop"));
        toolbar_stop->setIcon(icon1);
        toolbar_config = new QAction(main_window);
        toolbar_config->setObjectName(QString::fromUtf8("toolbar_config"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_config->setIcon(icon4);
        toolbar_controls = new QAction(main_window);
        toolbar_controls->setObjectName(QString::fromUtf8("toolbar_controls"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/controllers.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_controls->setIcon(icon5);
        toolbar_fullscreen = new QAction(main_window);
        toolbar_fullscreen->setObjectName(QString::fromUtf8("toolbar_fullscreen"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_fullscreen->setIcon(icon6);
        toolbar_list = new QAction(main_window);
        toolbar_list->setObjectName(QString::fromUtf8("toolbar_list"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_list->setIcon(icon7);
        toolbar_grid = new QAction(main_window);
        toolbar_grid->setObjectName(QString::fromUtf8("toolbar_grid"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_grid->setIcon(icon8);
        toolbar_refresh = new QAction(main_window);
        toolbar_refresh->setObjectName(QString::fromUtf8("toolbar_refresh"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_refresh->setIcon(icon9);
        toolbar_open = new QAction(main_window);
        toolbar_open->setObjectName(QString::fromUtf8("toolbar_open"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_open->setIcon(icon10);
        showCatOtherAct = new QAction(main_window);
        showCatOtherAct->setObjectName(QString::fromUtf8("showCatOtherAct"));
        showCatOtherAct->setCheckable(true);
        showCatOtherAct->setChecked(true);
        showHiddenEntriesAct = new QAction(main_window);
        showHiddenEntriesAct->setObjectName(QString::fromUtf8("showHiddenEntriesAct"));
        showHiddenEntriesAct->setCheckable(true);
        actionopen_rsx_capture = new QAction(main_window);
        actionopen_rsx_capture->setObjectName(QString::fromUtf8("actionopen_rsx_capture"));
        addGamesAct = new QAction(main_window);
        addGamesAct->setObjectName(QString::fromUtf8("addGamesAct"));
        showTitleBarsAct = new QAction(main_window);
        showTitleBarsAct->setObjectName(QString::fromUtf8("showTitleBarsAct"));
        showTitleBarsAct->setCheckable(true);
        batchCreatePPUCachesAct = new QAction(main_window);
        batchCreatePPUCachesAct->setObjectName(QString::fromUtf8("batchCreatePPUCachesAct"));
        batchRemoveCustomConfigurationsAct = new QAction(main_window);
        batchRemoveCustomConfigurationsAct->setObjectName(QString::fromUtf8("batchRemoveCustomConfigurationsAct"));
        batchRemovePPUCachesAct = new QAction(main_window);
        batchRemovePPUCachesAct->setObjectName(QString::fromUtf8("batchRemovePPUCachesAct"));
        batchRemoveSPUCachesAct = new QAction(main_window);
        batchRemoveSPUCachesAct->setObjectName(QString::fromUtf8("batchRemoveSPUCachesAct"));
        batchRemoveShaderCachesAct = new QAction(main_window);
        batchRemoveShaderCachesAct->setObjectName(QString::fromUtf8("batchRemoveShaderCachesAct"));
        batchRemoveCustomPadConfigurationsAct = new QAction(main_window);
        batchRemoveCustomPadConfigurationsAct->setObjectName(QString::fromUtf8("batchRemoveCustomPadConfigurationsAct"));
        removeDiskCacheAct = new QAction(main_window);
        removeDiskCacheAct->setObjectName(QString::fromUtf8("removeDiskCacheAct"));
        actionManage_Skylanders_Portal = new QAction(main_window);
        actionManage_Skylanders_Portal->setObjectName(QString::fromUtf8("actionManage_Skylanders_Portal"));
        actionManage_Cheats = new QAction(main_window);
        actionManage_Cheats->setObjectName(QString::fromUtf8("actionManage_Cheats"));
        languageAct0 = new QAction(main_window);
        languageAct0->setObjectName(QString::fromUtf8("languageAct0"));
        languageAct0->setCheckable(true);
        actionManage_Screenshots = new QAction(main_window);
        actionManage_Screenshots->setObjectName(QString::fromUtf8("actionManage_Screenshots"));
        removeFirmwareCacheAct = new QAction(main_window);
        removeFirmwareCacheAct->setObjectName(QString::fromUtf8("removeFirmwareCacheAct"));
        createFirmwareCacheAct = new QAction(main_window);
        createFirmwareCacheAct->setObjectName(QString::fromUtf8("createFirmwareCacheAct"));
        actionCreate_RSX_Capture = new QAction(main_window);
        actionCreate_RSX_Capture->setObjectName(QString::fromUtf8("actionCreate_RSX_Capture"));
        actionCreate_RSX_Capture->setEnabled(false);
        actionManage_Game_Patches = new QAction(main_window);
        actionManage_Game_Patches->setObjectName(QString::fromUtf8("actionManage_Game_Patches"));
        confRPCNAct = new QAction(main_window);
        confRPCNAct->setObjectName(QString::fromUtf8("confRPCNAct"));
        actionLog_Viewer = new QAction(main_window);
        actionLog_Viewer->setObjectName(QString::fromUtf8("actionLog_Viewer"));
        showCustomIconsAct = new QAction(main_window);
        showCustomIconsAct->setObjectName(QString::fromUtf8("showCustomIconsAct"));
        showCustomIconsAct->setCheckable(true);
        showCustomIconsAct->setChecked(true);
        playHoverGifsAct = new QAction(main_window);
        playHoverGifsAct->setObjectName(QString::fromUtf8("playHoverGifsAct"));
        playHoverGifsAct->setCheckable(true);
        playHoverGifsAct->setChecked(true);
        bootVSHAct = new QAction(main_window);
        bootVSHAct->setObjectName(QString::fromUtf8("bootVSHAct"));
        patchCreatorAct = new QAction(main_window);
        patchCreatorAct->setObjectName(QString::fromUtf8("patchCreatorAct"));
        confCamerasAct = new QAction(main_window);
        confCamerasAct->setObjectName(QString::fromUtf8("confCamerasAct"));
        centralWidget = new QWidget(main_window);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        mw_searchbar = new QLineEdit(centralWidget);
        mw_searchbar->setObjectName(QString::fromUtf8("mw_searchbar"));
        mw_searchbar->setGeometry(QRect(480, 10, 251, 31));
        sizePolicy.setHeightForWidth(mw_searchbar->sizePolicy().hasHeightForWidth());
        mw_searchbar->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        mw_searchbar->setFont(font);
        mw_searchbar->setFocusPolicy(Qt::ClickFocus);
        mw_searchbar->setFrame(false);
        mw_searchbar->setClearButtonEnabled(false);
        sizeSliderContainer = new QWidget(centralWidget);
        sizeSliderContainer->setObjectName(QString::fromUtf8("sizeSliderContainer"));
        sizeSliderContainer->setGeometry(QRect(280, 10, 181, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sizeSliderContainer->sizePolicy().hasHeightForWidth());
        sizeSliderContainer->setSizePolicy(sizePolicy1);
        sizeSliderContainer_layout = new QHBoxLayout(sizeSliderContainer);
        sizeSliderContainer_layout->setSpacing(0);
        sizeSliderContainer_layout->setContentsMargins(11, 11, 11, 11);
        sizeSliderContainer_layout->setObjectName(QString::fromUtf8("sizeSliderContainer_layout"));
        sizeSliderContainer_layout->setContentsMargins(14, 0, 14, 0);
        sizeSlider = new QSlider(sizeSliderContainer);
        sizeSlider->setObjectName(QString::fromUtf8("sizeSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sizeSlider->sizePolicy().hasHeightForWidth());
        sizeSlider->setSizePolicy(sizePolicy2);
        sizeSlider->setFocusPolicy(Qt::ClickFocus);
        sizeSlider->setAutoFillBackground(false);
        sizeSlider->setOrientation(Qt::Horizontal);
        sizeSlider->setTickPosition(QSlider::NoTicks);

        sizeSliderContainer_layout->addWidget(sizeSlider);

        main_window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(main_window);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1058, 25));
        menuBar->setContextMenuPolicy(Qt::PreventContextMenu);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        bootRecentMenu = new QMenu(menuFile);
        bootRecentMenu->setObjectName(QString::fromUtf8("bootRecentMenu"));
        bootRecentMenu->setEnabled(true);
        bootRecentMenu->setToolTipsVisible(true);
        menuBatch = new QMenu(menuFile);
        menuBatch->setObjectName(QString::fromUtf8("menuBatch"));
        menuFirmware = new QMenu(menuFile);
        menuFirmware->setObjectName(QString::fromUtf8("menuFirmware"));
        menuEmulation = new QMenu(menuBar);
        menuEmulation->setObjectName(QString::fromUtf8("menuEmulation"));
        menuConfiguration = new QMenu(menuBar);
        menuConfiguration->setObjectName(QString::fromUtf8("menuConfiguration"));
        menuManage = new QMenu(menuBar);
        menuManage->setObjectName(QString::fromUtf8("menuManage"));
        menuUtilities = new QMenu(menuBar);
        menuUtilities->setObjectName(QString::fromUtf8("menuUtilities"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuGame_List_Icons = new QMenu(menuView);
        menuGame_List_Icons->setObjectName(QString::fromUtf8("menuGame_List_Icons"));
        menuGame_List_Mode = new QMenu(menuView);
        menuGame_List_Mode->setObjectName(QString::fromUtf8("menuGame_List_Mode"));
        menuGame_Categories = new QMenu(menuView);
        menuGame_Categories->setObjectName(QString::fromUtf8("menuGame_Categories"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        languageMenu = new QMenu(menuHelp);
        languageMenu->setObjectName(QString::fromUtf8("languageMenu"));
        main_window->setMenuBar(menuBar);
        toolBar = new QToolBar(main_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy3);
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setIconSize(QSize(30, 30));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolBar->setFloatable(false);
        main_window->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEmulation->menuAction());
        menuBar->addAction(menuConfiguration->menuAction());
        menuBar->addAction(menuManage->menuAction());
        menuBar->addAction(menuUtilities->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(bootElfAct);
        menuFile->addAction(bootGameAct);
        menuFile->addAction(bootVSHAct);
        menuFile->addAction(bootRecentMenu->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(addGamesAct);
        menuFile->addSeparator();
        menuFile->addAction(bootInstallPkgAct);
        menuFile->addAction(bootInstallPupAct);
        menuFile->addSeparator();
        menuFile->addAction(menuBatch->menuAction());
        menuFile->addAction(menuFirmware->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(exitAct);
        bootRecentMenu->addAction(clearRecentAct);
        bootRecentMenu->addAction(freezeRecentAct);
        bootRecentMenu->addSeparator();
        menuBatch->addAction(batchCreatePPUCachesAct);
        menuBatch->addSeparator();
        menuBatch->addAction(batchRemoveCustomConfigurationsAct);
        menuBatch->addAction(batchRemoveCustomPadConfigurationsAct);
        menuBatch->addAction(batchRemovePPUCachesAct);
        menuBatch->addAction(batchRemoveSPUCachesAct);
        menuBatch->addAction(batchRemoveShaderCachesAct);
        menuBatch->addSeparator();
        menuBatch->addAction(removeDiskCacheAct);
        menuFirmware->addAction(createFirmwareCacheAct);
        menuFirmware->addAction(removeFirmwareCacheAct);
        menuEmulation->addAction(sysPauseAct);
        menuEmulation->addAction(sysStopAct);
        menuEmulation->addAction(sysRebootAct);
        menuEmulation->addSeparator();
        menuEmulation->addAction(sysSendOpenMenuAct);
        menuEmulation->addAction(sysSendExitAct);
        menuConfiguration->addAction(confCPUAct);
        menuConfiguration->addAction(confGPUAct);
        menuConfiguration->addSeparator();
        menuConfiguration->addAction(confPadsAct);
        menuConfiguration->addAction(confCamerasAct);
        menuConfiguration->addAction(confAudioAct);
        menuConfiguration->addAction(confIOAct);
        menuConfiguration->addAction(confSystemAct);
        menuConfiguration->addAction(confAdvAct);
        menuConfiguration->addAction(confEmuAct);
        menuConfiguration->addAction(confGuiAct);
        menuConfiguration->addSeparator();
        menuConfiguration->addAction(confRPCNAct);
        menuConfiguration->addAction(confAutopauseManagerAct);
        menuManage->addAction(confVFSDialogAct);
        menuManage->addSeparator();
        menuManage->addAction(actionManage_Users);
        menuManage->addAction(confSavedataManagerAct);
        menuManage->addAction(actionManage_RAP_Licenses);
        menuManage->addAction(actionManage_Trophy_Data);
        menuManage->addAction(actionManage_Skylanders_Portal);
        menuManage->addAction(actionManage_Cheats);
        menuManage->addAction(actionManage_Game_Patches);
        menuManage->addAction(actionManage_Screenshots);
        menuUtilities->addAction(actionLog_Viewer);
        menuUtilities->addAction(toolsCgDisasmAct);
        menuUtilities->addAction(toolskernel_explorerAct);
        menuUtilities->addAction(toolsmemory_viewerAct);
        menuUtilities->addAction(toolsRsxDebuggerAct);
        menuUtilities->addAction(toolsStringSearchAct);
        menuUtilities->addAction(patchCreatorAct);
        menuUtilities->addSeparator();
        menuUtilities->addAction(toolsDecryptSprxLibsAct);
        menuUtilities->addSeparator();
        menuUtilities->addAction(toolsExtractMSELFAct);
        menuUtilities->addAction(toolsExtractPUPAct);
        menuUtilities->addAction(toolsExtractTARAct);
        menuUtilities->addSeparator();
        menuUtilities->addAction(actionopen_rsx_capture);
        menuUtilities->addSeparator();
        menuUtilities->addAction(actionCreate_RSX_Capture);
        menuView->addAction(showDebuggerAct);
        menuView->addAction(showLogAct);
        menuView->addSeparator();
        menuView->addAction(showTitleBarsAct);
        menuView->addAction(showToolBarAct);
        menuView->addSeparator();
        menuView->addAction(showGameListAct);
        menuView->addSeparator();
        menuView->addAction(showHiddenEntriesAct);
        menuView->addSeparator();
        menuView->addAction(showCompatibilityInGridAct);
        menuView->addSeparator();
        menuView->addAction(refreshGameListAct);
        menuView->addAction(menuGame_List_Mode->menuAction());
        menuView->addAction(menuGame_List_Icons->menuAction());
        menuView->addAction(menuGame_Categories->menuAction());
        menuGame_List_Icons->addAction(setIconSizeTinyAct);
        menuGame_List_Icons->addAction(setIconSizeSmallAct);
        menuGame_List_Icons->addAction(setIconSizeMediumAct);
        menuGame_List_Icons->addAction(setIconSizeLargeAct);
        menuGame_List_Icons->addSeparator();
        menuGame_List_Icons->addAction(showCustomIconsAct);
        menuGame_List_Icons->addAction(playHoverGifsAct);
        menuGame_List_Mode->addAction(setlistModeListAct);
        menuGame_List_Mode->addAction(setlistModeGridAct);
        menuGame_Categories->addAction(showCatHDDGameAct);
        menuGame_Categories->addAction(showCatDiscGameAct);
        menuGame_Categories->addAction(showCatPS1GamesAct);
        menuGame_Categories->addAction(showCatPS2GamesAct);
        menuGame_Categories->addAction(showCatPSPGamesAct);
        menuGame_Categories->addAction(showCatHomeAct);
        menuGame_Categories->addAction(showCatAudioVideoAct);
        menuGame_Categories->addAction(showCatGameDataAct);
        menuGame_Categories->addAction(showCatUnknownAct);
        menuGame_Categories->addAction(showCatOtherAct);
        menuHelp->addAction(updateAct);
        menuHelp->addSeparator();
        menuHelp->addAction(languageMenu->menuAction());
        menuHelp->addSeparator();
        menuHelp->addAction(aboutAct);
        menuHelp->addAction(aboutQtAct);
        languageMenu->addAction(languageAct0);
        toolBar->addAction(toolbar_open);
        toolBar->addAction(toolbar_refresh);
        toolBar->addAction(toolbar_fullscreen);
        toolBar->addAction(toolbar_stop);
        toolBar->addAction(toolbar_start);
        toolBar->addAction(toolbar_config);
        toolBar->addAction(toolbar_controls);
        toolBar->addAction(toolbar_list);
        toolBar->addAction(toolbar_grid);

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QMainWindow *main_window)
    {
        main_window->setWindowTitle(QCoreApplication::translate("main_window", "RPCS3", nullptr));
        bootElfAct->setText(QCoreApplication::translate("main_window", "Boot SELF/ELF", nullptr));
        bootGameAct->setText(QCoreApplication::translate("main_window", "Boot Game", nullptr));
        bootInstallPkgAct->setText(QCoreApplication::translate("main_window", "Install Packages/Raps/Edats", nullptr));
#if QT_CONFIG(tooltip)
        bootInstallPkgAct->setToolTip(QCoreApplication::translate("main_window", "Install application from a .pkg file", nullptr));
#endif // QT_CONFIG(tooltip)
        bootInstallPupAct->setText(QCoreApplication::translate("main_window", "Install Firmware", nullptr));
#if QT_CONFIG(tooltip)
        bootInstallPupAct->setToolTip(QCoreApplication::translate("main_window", "Install firmware from PS3UPDAT.PUP", nullptr));
#endif // QT_CONFIG(tooltip)
        sysPauseAct->setText(QCoreApplication::translate("main_window", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        sysPauseAct->setToolTip(QCoreApplication::translate("main_window", "Start emulation", nullptr));
#endif // QT_CONFIG(tooltip)
        sysStopAct->setText(QCoreApplication::translate("main_window", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        sysStopAct->setToolTip(QCoreApplication::translate("main_window", "Stop emulation", nullptr));
#endif // QT_CONFIG(tooltip)
        sysSendOpenMenuAct->setText(QCoreApplication::translate("main_window", "Send Open System Menu CMD", nullptr));
        sysSendExitAct->setText(QCoreApplication::translate("main_window", "Send Exit CMD", nullptr));
        confCPUAct->setText(QCoreApplication::translate("main_window", "CPU", nullptr));
#if QT_CONFIG(tooltip)
        confCPUAct->setToolTip(QCoreApplication::translate("main_window", "Configure CPU", nullptr));
#endif // QT_CONFIG(tooltip)
        confGPUAct->setText(QCoreApplication::translate("main_window", "GPU", nullptr));
#if QT_CONFIG(tooltip)
        confGPUAct->setToolTip(QCoreApplication::translate("main_window", "Configure graphics", nullptr));
#endif // QT_CONFIG(tooltip)
        confPadsAct->setText(QCoreApplication::translate("main_window", "Pads", nullptr));
        confPadsAct->setIconText(QCoreApplication::translate("main_window", "Pads", nullptr));
#if QT_CONFIG(tooltip)
        confPadsAct->setToolTip(QCoreApplication::translate("main_window", "Configure controls", nullptr));
#endif // QT_CONFIG(tooltip)
        confAudioAct->setText(QCoreApplication::translate("main_window", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        confAudioAct->setToolTip(QCoreApplication::translate("main_window", "Configure audio", nullptr));
#endif // QT_CONFIG(tooltip)
        confIOAct->setText(QCoreApplication::translate("main_window", "Input/Output", nullptr));
#if QT_CONFIG(tooltip)
        confIOAct->setToolTip(QCoreApplication::translate("main_window", "Configure Input/Output", nullptr));
#endif // QT_CONFIG(tooltip)
        confSystemAct->setText(QCoreApplication::translate("main_window", "System", nullptr));
#if QT_CONFIG(tooltip)
        confSystemAct->setToolTip(QCoreApplication::translate("main_window", "Configure system", nullptr));
#endif // QT_CONFIG(tooltip)
        confAdvAct->setText(QCoreApplication::translate("main_window", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        confAdvAct->setToolTip(QCoreApplication::translate("main_window", "Configure advanced emulator settings", nullptr));
#endif // QT_CONFIG(tooltip)
        confEmuAct->setText(QCoreApplication::translate("main_window", "Emulator", nullptr));
#if QT_CONFIG(tooltip)
        confEmuAct->setToolTip(QCoreApplication::translate("main_window", "Configure Emulator settings", nullptr));
#endif // QT_CONFIG(tooltip)
        confGuiAct->setText(QCoreApplication::translate("main_window", "GUI", nullptr));
#if QT_CONFIG(tooltip)
        confGuiAct->setToolTip(QCoreApplication::translate("main_window", "Configure GUI settings", nullptr));
#endif // QT_CONFIG(tooltip)
        confAutopauseManagerAct->setText(QCoreApplication::translate("main_window", "Auto Pause", nullptr));
#if QT_CONFIG(tooltip)
        confAutopauseManagerAct->setToolTip(QCoreApplication::translate("main_window", "Configure Auto Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        exitAct->setText(QCoreApplication::translate("main_window", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        exitAct->setToolTip(QCoreApplication::translate("main_window", "Exit RPCS3", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        exitAct->setStatusTip(QCoreApplication::translate("main_window", "Exit the application.", nullptr));
#endif // QT_CONFIG(statustip)
        confSavedataManagerAct->setText(QCoreApplication::translate("main_window", "Save Data", nullptr));
#if QT_CONFIG(tooltip)
        confSavedataManagerAct->setToolTip(QCoreApplication::translate("main_window", "Manage save data", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManage_Trophy_Data->setText(QCoreApplication::translate("main_window", "Trophies", nullptr));
#if QT_CONFIG(tooltip)
        actionManage_Trophy_Data->setToolTip(QCoreApplication::translate("main_window", "Manage trophies", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManage_Users->setText(QCoreApplication::translate("main_window", "User Accounts", nullptr));
#if QT_CONFIG(tooltip)
        actionManage_Users->setToolTip(QCoreApplication::translate("main_window", "Manage user accounts", nullptr));
#endif // QT_CONFIG(tooltip)
        toolsCgDisasmAct->setText(QCoreApplication::translate("main_window", "Cg Disasm", nullptr));
        toolskernel_explorerAct->setText(QCoreApplication::translate("main_window", "Kernel Explorer", nullptr));
        toolsmemory_viewerAct->setText(QCoreApplication::translate("main_window", "Memory Viewer", nullptr));
        toolsRsxDebuggerAct->setText(QCoreApplication::translate("main_window", "RSX Debugger", nullptr));
        toolsStringSearchAct->setText(QCoreApplication::translate("main_window", "Memory Searcher", nullptr));
        toolsDecryptSprxLibsAct->setText(QCoreApplication::translate("main_window", "Decrypt PS3 Binaries", nullptr));
        toolsExtractMSELFAct->setText(QCoreApplication::translate("main_window", "Extract MSELF", nullptr));
        toolsExtractPUPAct->setText(QCoreApplication::translate("main_window", "Extract PUP", nullptr));
        toolsExtractTARAct->setText(QCoreApplication::translate("main_window", "Extract Encrypted TAR", nullptr));
#if QT_CONFIG(tooltip)
        toolsExtractTARAct->setToolTip(QCoreApplication::translate("main_window", "Extract files from special .tar files inside PS3UPDAT.PUP", nullptr));
#endif // QT_CONFIG(tooltip)
        showDebuggerAct->setText(QCoreApplication::translate("main_window", "Show Debugger", nullptr));
        showLogAct->setText(QCoreApplication::translate("main_window", "Show Log/TTY", nullptr));
        aboutAct->setText(QCoreApplication::translate("main_window", "About RPCS3", nullptr));
        aboutQtAct->setText(QCoreApplication::translate("main_window", "About Qt", nullptr));
        showGameListAct->setText(QCoreApplication::translate("main_window", "Show Game List", nullptr));
        showToolBarAct->setText(QCoreApplication::translate("main_window", "Show Tool Bar", nullptr));
        showCompatibilityInGridAct->setText(QCoreApplication::translate("main_window", "Show Game Compatibility in Grid Mode", nullptr));
        refreshGameListAct->setText(QCoreApplication::translate("main_window", "Game List Refresh", nullptr));
        actionManage_RAP_Licenses->setText(QCoreApplication::translate("main_window", "RAP Files", nullptr));
        updateAct->setText(QCoreApplication::translate("main_window", "Check for Updates", nullptr));
        confVFSDialogAct->setText(QCoreApplication::translate("main_window", "Virtual File System", nullptr));
        clearRecentAct->setText(QCoreApplication::translate("main_window", "List Clear", nullptr));
        freezeRecentAct->setText(QCoreApplication::translate("main_window", "List Freeze", nullptr));
        setIconSizeTinyAct->setText(QCoreApplication::translate("main_window", "Tiny", nullptr));
        setIconSizeSmallAct->setText(QCoreApplication::translate("main_window", "Small", nullptr));
        setIconSizeMediumAct->setText(QCoreApplication::translate("main_window", "Medium", nullptr));
        setIconSizeLargeAct->setText(QCoreApplication::translate("main_window", "Large", nullptr));
        setlistModeListAct->setText(QCoreApplication::translate("main_window", "List View", nullptr));
        setlistModeGridAct->setText(QCoreApplication::translate("main_window", "Grid View", nullptr));
        sysRebootAct->setText(QCoreApplication::translate("main_window", "Restart", nullptr));
        showCatHDDGameAct->setText(QCoreApplication::translate("main_window", "HDD Games", nullptr));
        showCatDiscGameAct->setText(QCoreApplication::translate("main_window", "Disc Games", nullptr));
        showCatPS1GamesAct->setText(QCoreApplication::translate("main_window", "PS1 Games", nullptr));
        showCatPS2GamesAct->setText(QCoreApplication::translate("main_window", "PS2 Games", nullptr));
        showCatPSPGamesAct->setText(QCoreApplication::translate("main_window", "PSP Games", nullptr));
        showCatHomeAct->setText(QCoreApplication::translate("main_window", "Home", nullptr));
        showCatAudioVideoAct->setText(QCoreApplication::translate("main_window", "Audio/Video", nullptr));
        showCatGameDataAct->setText(QCoreApplication::translate("main_window", "Game Data", nullptr));
        showCatUnknownAct->setText(QCoreApplication::translate("main_window", "Unknown", nullptr));
        toolbar_start->setText(QCoreApplication::translate("main_window", "Start", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_start->setToolTip(QCoreApplication::translate("main_window", "Start emulation", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_stop->setText(QCoreApplication::translate("main_window", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_stop->setToolTip(QCoreApplication::translate("main_window", "Stop emulation", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_config->setText(QCoreApplication::translate("main_window", "Config", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_config->setToolTip(QCoreApplication::translate("main_window", "Configure the emulator", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_controls->setText(QCoreApplication::translate("main_window", "Pads", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_controls->setToolTip(QCoreApplication::translate("main_window", "Configure controls", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_fullscreen->setText(QCoreApplication::translate("main_window", "FullScr", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_fullscreen->setToolTip(QCoreApplication::translate("main_window", "Toggle fullscreen", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_list->setText(QCoreApplication::translate("main_window", "List", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_list->setToolTip(QCoreApplication::translate("main_window", "Switch to list mode", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_grid->setText(QCoreApplication::translate("main_window", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_grid->setToolTip(QCoreApplication::translate("main_window", "Switch to grid mode", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_refresh->setText(QCoreApplication::translate("main_window", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_refresh->setToolTip(QCoreApplication::translate("main_window", "Refresh gamelist", nullptr));
#endif // QT_CONFIG(tooltip)
        toolbar_open->setText(QCoreApplication::translate("main_window", "Open", nullptr));
#if QT_CONFIG(tooltip)
        toolbar_open->setToolTip(QCoreApplication::translate("main_window", "Boot a game", nullptr));
#endif // QT_CONFIG(tooltip)
        showCatOtherAct->setText(QCoreApplication::translate("main_window", "Other", nullptr));
        showHiddenEntriesAct->setText(QCoreApplication::translate("main_window", "Show Hidden Entries", nullptr));
        actionopen_rsx_capture->setText(QCoreApplication::translate("main_window", "Open RSX Capture", nullptr));
        addGamesAct->setText(QCoreApplication::translate("main_window", "Add Games", nullptr));
        showTitleBarsAct->setText(QCoreApplication::translate("main_window", "Show Title Bars", nullptr));
        batchCreatePPUCachesAct->setText(QCoreApplication::translate("main_window", "Create PPU Caches", nullptr));
        batchRemoveCustomConfigurationsAct->setText(QCoreApplication::translate("main_window", "Remove Custom Configurations", nullptr));
        batchRemovePPUCachesAct->setText(QCoreApplication::translate("main_window", "Remove PPU Caches", nullptr));
        batchRemoveSPUCachesAct->setText(QCoreApplication::translate("main_window", "Remove SPU Caches", nullptr));
        batchRemoveShaderCachesAct->setText(QCoreApplication::translate("main_window", "Remove Shader Caches", nullptr));
        batchRemoveCustomPadConfigurationsAct->setText(QCoreApplication::translate("main_window", "Remove Custom Pad Configurations", nullptr));
        removeDiskCacheAct->setText(QCoreApplication::translate("main_window", "Remove Disk Cache", nullptr));
        actionManage_Skylanders_Portal->setText(QCoreApplication::translate("main_window", "Skylanders Portal", nullptr));
        actionManage_Cheats->setText(QCoreApplication::translate("main_window", "Cheats", nullptr));
        languageAct0->setText(QCoreApplication::translate("main_window", "English", nullptr));
        actionManage_Screenshots->setText(QCoreApplication::translate("main_window", "Screenshots", nullptr));
        removeFirmwareCacheAct->setText(QCoreApplication::translate("main_window", "Remove Firmware Cache", nullptr));
        createFirmwareCacheAct->setText(QCoreApplication::translate("main_window", "Create Firmware Cache", nullptr));
        actionCreate_RSX_Capture->setText(QCoreApplication::translate("main_window", "Create RSX Capture", nullptr));
        actionManage_Game_Patches->setText(QCoreApplication::translate("main_window", "Game Patches", nullptr));
        confRPCNAct->setText(QCoreApplication::translate("main_window", "RPCN", nullptr));
#if QT_CONFIG(tooltip)
        confRPCNAct->setToolTip(QCoreApplication::translate("main_window", "Configure RPCN", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLog_Viewer->setText(QCoreApplication::translate("main_window", "Log Viewer", nullptr));
        showCustomIconsAct->setText(QCoreApplication::translate("main_window", "Show Custom Icons", nullptr));
        playHoverGifsAct->setText(QCoreApplication::translate("main_window", "Play Hover Gifs", nullptr));
        bootVSHAct->setText(QCoreApplication::translate("main_window", "Boot VSH/XMB", nullptr));
        patchCreatorAct->setText(QCoreApplication::translate("main_window", "Patch Creator", nullptr));
        confCamerasAct->setText(QCoreApplication::translate("main_window", "Cameras", nullptr));
        mw_searchbar->setPlaceholderText(QCoreApplication::translate("main_window", "Search...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("main_window", "File", nullptr));
        bootRecentMenu->setTitle(QCoreApplication::translate("main_window", "Boot Recent", nullptr));
        menuBatch->setTitle(QCoreApplication::translate("main_window", "All Titles", nullptr));
        menuFirmware->setTitle(QCoreApplication::translate("main_window", "Firmware", nullptr));
        menuEmulation->setTitle(QCoreApplication::translate("main_window", "Emulation", nullptr));
        menuConfiguration->setTitle(QCoreApplication::translate("main_window", "Configuration", nullptr));
        menuManage->setTitle(QCoreApplication::translate("main_window", "Manage", nullptr));
        menuUtilities->setTitle(QCoreApplication::translate("main_window", "Utilities", nullptr));
        menuView->setTitle(QCoreApplication::translate("main_window", "View", nullptr));
        menuGame_List_Icons->setTitle(QCoreApplication::translate("main_window", "Game List Icons", nullptr));
        menuGame_List_Mode->setTitle(QCoreApplication::translate("main_window", "Game List Mode", nullptr));
        menuGame_Categories->setTitle(QCoreApplication::translate("main_window", "Game Categories", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("main_window", "Help", nullptr));
        languageMenu->setTitle(QCoreApplication::translate("main_window", "Language", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("main_window", "Show tool bar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
