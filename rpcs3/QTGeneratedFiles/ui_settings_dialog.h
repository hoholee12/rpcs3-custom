/********************************************************************************
** Form generated from reading UI file 'settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_DIALOG_H
#define UI_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings_dialog
{
public:
    QVBoxLayout *settings_dialog_layout;
    QScrollArea *scrollArea;
    QTabWidget *tab_widget_settings;
    QWidget *coreTab;
    QVBoxLayout *coreTabLayout;
    QHBoxLayout *coreTabItemLayout;
    QVBoxLayout *coreTabLeftLayout;
    QGroupBox *gb_ppu;
    QVBoxLayout *ppu_layout;
    QRadioButton *ppu__static;
    QRadioButton *ppu_dynamic;
    QRadioButton *ppu_llvm;
    QGroupBox *gb_spu;
    QVBoxLayout *spu_layout;
    QRadioButton *spu__static;
    QRadioButton *spu_dynamic;
    QRadioButton *spu_asmjit;
    QRadioButton *spu_llvm;
    QSpacerItem *coreTabLeftLayoutSpacer;
    QVBoxLayout *coreTabMiddleLayout;
    QGroupBox *checkboxes;
    QVBoxLayout *checkboxes_layout;
    QCheckBox *spuLoopDetection;
    QCheckBox *accurateXFloat;
    QCheckBox *approximateXFloat;
    QCheckBox *fullWidthAVX512;
    QSpacerItem *coreTabMiddleLayoutSpacer;
    QVBoxLayout *coreTabRightLayout;
    QGroupBox *gb_tsx;
    QVBoxLayout *gb_tsx_layout;
    QComboBox *enableTSX;
    QGroupBox *gb_spuBlockSize;
    QVBoxLayout *gb_spuBlockSize_layout;
    QComboBox *spuBlockSize;
    QGroupBox *gb_spu_threads;
    QVBoxLayout *gb_spu_threads_layout;
    QComboBox *preferredSPUThreads;
    QGroupBox *gb_threadsched;
    QVBoxLayout *gb_threadsched_layout;
    QComboBox *threadsched;
    QSpacerItem *coreTabRightLayoutSpacer;
    QSpacerItem *coreTabSpacer;
    QGroupBox *gb_description_cpu;
    QVBoxLayout *gb_description_cpu_layout;
    QLabel *description_cpu;
    QWidget *gpuTab;
    QVBoxLayout *gpuTab_layout;
    QHBoxLayout *gpuTabLayout;
    QVBoxLayout *gpuTabLayoutLeft;
    QGroupBox *gb_renderer;
    QVBoxLayout *gb_renderer_layout;
    QComboBox *renderBox;
    QGroupBox *gb_graphicsAdapter;
    QVBoxLayout *gb_graphicsAdapter_layout;
    QComboBox *graphicsAdapterBox;
    QWidget *widget_gpu_top;
    QHBoxLayout *widget_gpu_top_layout;
    QGroupBox *gb_aspectRatio;
    QVBoxLayout *gb_aspectRatio_layout;
    QComboBox *aspectBox;
    QGroupBox *gb_frameLimit;
    QVBoxLayout *gb_frameLimit_layout;
    QComboBox *frameLimitBox;
    QWidget *widget_gpu_bottom;
    QHBoxLayout *widget_gpu_bottom_layout;
    QGroupBox *gb_anisotropicFilter;
    QVBoxLayout *gb_anisotropicFilter_layout;
    QComboBox *anisotropicFilterOverride;
    QGroupBox *gb_antiAliasing;
    QVBoxLayout *gb_antiAliasing_layout;
    QComboBox *antiAliasing;
    QWidget *widget_gpu_3;
    QHBoxLayout *widget_gpu_3_layout;
    QGroupBox *gbZCULL;
    QVBoxLayout *gbZCULL_layout;
    QComboBox *zcullPrecisionMode;
    QSpacerItem *gpu_tab_layout_right_spacer;
    QVBoxLayout *gpuTabLayoutMiddle;
    QGroupBox *gb_default_resolution;
    QVBoxLayout *gb_default_resolution_layout;
    QComboBox *resBox;
    QVBoxLayout *layout_resolution_scale;
    QGroupBox *gb_resolutionScale;
    QVBoxLayout *gb_resolutionScale_layout;
    QWidget *resolutionScaleLayoutTop;
    QHBoxLayout *horizontalLayout_23;
    QLabel *resolutionScaleMin;
    QSlider *resolutionScale;
    QLabel *resolutionScaleMax;
    QHBoxLayout *resolutionScaleLayoutBottom;
    QLabel *resolutionScaleVal;
    QPushButton *resolutionScaleReset;
    QGroupBox *gb_minimumScalableDimension;
    QVBoxLayout *gb_minimumScalableDimension_layout;
    QHBoxLayout *minimumScalableDimensionLayoutTop;
    QLabel *minimumScalableDimensionMin;
    QSlider *minimumScalableDimension;
    QLabel *minimumScalableDimensionMax;
    QHBoxLayout *minimumScalableDimensionLayoutBottom;
    QLabel *minimumScalableDimensionVal;
    QPushButton *minimumScalableDimensionReset;
    QGroupBox *gb_Upscaling;
    QVBoxLayout *gb_Upscaling_layout;
    QCheckBox *fsrUpscalingEnable;
    QFrame *line;
    QWidget *fsrSharpeningStrengthWidget;
    QVBoxLayout *fsrSharpeningWidgetLayout;
    QLabel *fsrSharpeningStrengthLabel;
    QHBoxLayout *fsrSharpeningLayoutTop;
    QLabel *minSharpeningVal;
    QSlider *fsrSharpeningStrength;
    QLabel *maxSharpeningVal;
    QHBoxLayout *fsrSharpeningLayoutBottom;
    QLabel *fsrSharpeningStrengthVal;
    QPushButton *fsrSharpeningStrengthReset;
    QSpacerItem *gpu_tab_layout_middle_spacer;
    QVBoxLayout *gpuTabLayoutRight;
    QGroupBox *gb_shader_mode;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_legacy_recompiler;
    QRadioButton *rb_async_recompiler;
    QRadioButton *rb_async_with_shader_interpreter;
    QRadioButton *rb_shader_interpreter_only;
    QGroupBox *gb_shader_compiler_threads;
    QVBoxLayout *gb_shader_compiler_threads_layout;
    QComboBox *shaderCompilerThreads;
    QGroupBox *gb_additional_settings;
    QVBoxLayout *gb_additional_settings_layout;
    QCheckBox *dumpColor;
    QCheckBox *strictModeRendering;
    QCheckBox *vsync;
    QCheckBox *stretchToDisplayArea;
    QCheckBox *Enable3D;
    QCheckBox *disableVertexCache;
    QCheckBox *multithreadedRSX;
    QCheckBox *asyncTextureStreaming;
    QSpacerItem *additional_settings_spacer;
    QSpacerItem *gpuTabSpacer;
    QGroupBox *gb_description_gpu;
    QHBoxLayout *gb_description_gpu_layout;
    QLabel *description_gpu;
    QWidget *audioTab;
    QVBoxLayout *audioTab_layout;
    QHBoxLayout *audioTabLayoutTop;
    QVBoxLayout *audioTabLayoutTopLeft;
    QGroupBox *gb_audio_out;
    QVBoxLayout *gb_audio_out_layout;
    QComboBox *audioOutBox;
    QGroupBox *gb_audio_downmix;
    QVBoxLayout *gb_audio_channels_layout;
    QComboBox *combo_audio_downmix;
    QGroupBox *gb_audio_settings;
    QVBoxLayout *gb_audio_settings_layout;
    QCheckBox *audioDump;
    QCheckBox *convert;
    QSpacerItem *spacer_audio_settings;
    QVBoxLayout *audioTabLayoutTopMiddle;
    QGroupBox *gb_audio_volume;
    QVBoxLayout *gb_audio_volume_layout;
    QWidget *master_volume;
    QVBoxLayout *layout_master_volume;
    QLabel *masterVolumeLabel;
    QSlider *masterVolume;
    QSpacerItem *spacer_audio_volume;
    QVBoxLayout *audioTabLayoutTopRight;
    QGroupBox *gb_audio_buffering;
    QVBoxLayout *gb_audio_buffering_layout;
    QCheckBox *enableBuffering;
    QWidget *audio_buffer_duration;
    QVBoxLayout *layout_audio_buffer_duration;
    QLabel *audioBufferDurationLabel;
    QSlider *audioBufferDuration;
    QCheckBox *enableTimeStretching;
    QWidget *time_stretching_threshold;
    QVBoxLayout *layout_time_stretching_threshold;
    QLabel *timeStretchingThresholdLabel;
    QSlider *timeStretchingThreshold;
    QGroupBox *gb_microphone_settings;
    QVBoxLayout *gb_microphone_settings_layout;
    QHBoxLayout *microphoneLayoutTop;
    QLabel *microphoneLabel;
    QComboBox *microphoneBox;
    QSpacerItem *microphoneSpacer;
    QHBoxLayout *microphoneLayoutBottom;
    QVBoxLayout *microphoneLayoutLabel1and3;
    QLabel *microphone1Label;
    QLabel *microphone3Label;
    QVBoxLayout *microphoneLayoutBox1and3;
    QComboBox *microphone1Box;
    QComboBox *microphone3Box;
    QVBoxLayout *microphoneLayoutLabel2and4;
    QLabel *microphone2Label;
    QLabel *microphone4Label;
    QVBoxLayout *microphoneLayoutBox2and4;
    QComboBox *microphone2Box;
    QComboBox *microphone4Box;
    QSpacerItem *audioTabSpacer;
    QGroupBox *gb_description_audio;
    QVBoxLayout *gb_description_audio_layout;
    QLabel *description_audio;
    QWidget *inputTab;
    QVBoxLayout *inputTab_layout;
    QGridLayout *ioGridLayout;
    QGroupBox *gb_turntable_emulated;
    QVBoxLayout *gb_turntable_emulated_layout;
    QComboBox *turntableBox;
    QGroupBox *gb_mouse_handler;
    QVBoxLayout *gb_mouse_handler_layout;
    QComboBox *mouseHandlerBox;
    QGroupBox *gb_camera_type;
    QVBoxLayout *gb_camera_type_layout;
    QComboBox *cameraTypeBox;
    QGroupBox *gb_move_handler;
    QVBoxLayout *gb_move_handler_layout;
    QComboBox *moveBox;
    QGroupBox *gb_keyboard_handler;
    QVBoxLayout *gb_keyboard_handler_layout;
    QComboBox *keyboardHandlerBox;
    QGroupBox *gb_buzz_emulated;
    QVBoxLayout *gb_buzz_emulated_layout;
    QComboBox *buzzBox;
    QGroupBox *gb_camera_flip;
    QVBoxLayout *gb_camera_flip_layout;
    QComboBox *cameraFlipBox;
    QGroupBox *gb_camera_setting;
    QVBoxLayout *gb_camera_setting_layout;
    QComboBox *cameraBox;
    QGroupBox *gb_ghltar_emulated;
    QVBoxLayout *gb_ghltar_emulated_layout;
    QComboBox *ghltarBox;
    QGroupBox *gb_camera_id;
    QVBoxLayout *camera_id_layout;
    QComboBox *cameraIdBox;
    QGroupBox *gb_pad_mode;
    QVBoxLayout *gb_pad_mode_layout;
    QComboBox *padModeBox;
    QSpacerItem *inputTabSpacer;
    QGroupBox *gb_description_io;
    QVBoxLayout *gb_description_io_layout;
    QLabel *description_io;
    QWidget *systemTab;
    QVBoxLayout *systemTab_layout;
    QHBoxLayout *systemTabLayout1;
    QGroupBox *gb_sysLang;
    QVBoxLayout *gb_sysLang_layout;
    QComboBox *sysLangBox;
    QGroupBox *gb_keyboardType;
    QVBoxLayout *verticalLayout_keyboardType;
    QComboBox *keyboardType;
    QGroupBox *gb_homebrew;
    QVBoxLayout *gb_homebrew_layout;
    QCheckBox *enableHostRoot;
    QHBoxLayout *systemTabLayout2;
    QGroupBox *gb_console_region;
    QVBoxLayout *gb_console_region_layout;
    QComboBox *console_region;
    QGroupBox *gb_console_time;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *console_time_edit;
    QPushButton *console_time_reset;
    QWidget *systemTabSpacerWidget2;
    QHBoxLayout *systemTabLayout3;
    QGroupBox *gb_enterButtonAssignment;
    QVBoxLayout *gb_enterButtonAssignment_layout;
    QRadioButton *enterButtonAssignCircle;
    QRadioButton *enterButtonAssignCross;
    QWidget *systemTabSpacerWidget3;
    QWidget *systemTabSpacerWidget4;
    QHBoxLayout *systemTabLayout4;
    QGroupBox *gb_DiskCacheClearing;
    QVBoxLayout *gb_DiskCacheClearing_layout;
    QCheckBox *enableCacheClearing;
    QLabel *maximumCacheSizeLabel;
    QSlider *maximumCacheSize;
    QWidget *systemTabSpacerWidget5;
    QWidget *systemTabSpacerWidget6;
    QSpacerItem *systemTabSpacer;
    QGroupBox *gb_description_system;
    QHBoxLayout *gb_description_system_layout;
    QLabel *description_system;
    QWidget *networkTab;
    QVBoxLayout *networkTab_layout;
    QHBoxLayout *networkTabLayout;
    QGroupBox *gb_network_status;
    QVBoxLayout *gb_network_status_layout;
    QGroupBox *gb_netStatusBox;
    QVBoxLayout *gb_netStatusBox_layout;
    QComboBox *netStatusBox;
    QGroupBox *gb_edit_dns;
    QVBoxLayout *gb_edit_dns_layout;
    QLineEdit *edit_dns;
    QGroupBox *gb_edit_swaps;
    QVBoxLayout *gb_edit_swaps_layout;
    QLineEdit *edit_swaps;
    QSpacerItem *networkTabSpacerLeft;
    QGroupBox *gb_psn_config;
    QVBoxLayout *gb_psn_config_layout;
    QGroupBox *gb_psnStatusBox;
    QVBoxLayout *gb_psnStatusBox_layout;
    QComboBox *psnStatusBox;
    QSpacerItem *networkTabSpacerRight;
    QSpacerItem *networkTabSpacer;
    QGroupBox *gb_description_network;
    QVBoxLayout *gb_description_network_layout;
    QLabel *description_network;
    QWidget *advancedTab;
    QVBoxLayout *advancedTab_layout;
    QHBoxLayout *advancedTabLayout;
    QVBoxLayout *advancedTabLayoutLeft;
    QGroupBox *gb_advanced_core;
    QVBoxLayout *gb_advanced_core_layout;
    QCheckBox *debugConsoleMode;
    QCheckBox *accurateDFMA;
    QCheckBox *accurateRSXAccess;
    QCheckBox *ppuNJFixup;
    QCheckBox *accuratePPUSAT;
    QCheckBox *accuratePPUNJ;
    QCheckBox *fixupPPUVNAN;
    QCheckBox *accuratePPUVNAN;
    QCheckBox *accuratePPUFPCC;
    QCheckBox *ppuPrecompilation;
    QCheckBox *mfcDelayCommand;
    QCheckBox *silenceAllLogs;
    QGroupBox *gb_sleep_timers_accuracy;
    QVBoxLayout *gb_sleep_timers_accuracy_layout;
    QComboBox *sleepTimersAccuracy;
    QGroupBox *gb_max_spurs_threads;
    QVBoxLayout *gb_max_spurs_threads_layout;
    QComboBox *maxSPURSThreads;
    QSpacerItem *advancedTabSpacerLeft;
    QVBoxLayout *advancedTabLayoutMiddle;
    QGroupBox *gb_libs;
    QVBoxLayout *gb_libs_layout;
    QListWidget *hleList;
    QListWidget *lleList;
    QHBoxLayout *gb_lleLibs_layout;
    QLineEdit *searchBox;
    QPushButton *resetLleList;
    QVBoxLayout *advancedTabLayoutRight;
    QGroupBox *gb_advanced_gpu;
    QVBoxLayout *gb_advanced_gpu_layout;
    QCheckBox *readDepth;
    QCheckBox *dumpDepth;
    QCheckBox *readColor;
    QCheckBox *disableOnDiskShaderCache;
    QCheckBox *DisableNativefp16;
    QGroupBox *gb_vulkansched;
    QVBoxLayout *gb_vksched_layout;
    QComboBox *vulkansched;
    QGroupBox *gb_wakeupDelay;
    QVBoxLayout *gb_wakeupDelay_layout;
    QSlider *wakeupDelay;
    QHBoxLayout *wakeupDelayLayout;
    QLabel *wakeupText;
    QPushButton *wakeupReset;
    QGroupBox *gb_vblank;
    QVBoxLayout *gb_vblank_layout;
    QSlider *vblank;
    QHBoxLayout *vBlankLayout;
    QLabel *vblankText;
    QPushButton *vblankReset;
    QGroupBox *gb_clockScale;
    QVBoxLayout *gb_clockScale_layout;
    QSlider *clockScale;
    QHBoxLayout *clockScaleLayout;
    QLabel *clockScaleText;
    QPushButton *clockScaleReset;
    QSpacerItem *advancedTabSpacerRight;
    QSpacerItem *advancedTabSpacer;
    QGroupBox *gb_description_advanced;
    QVBoxLayout *gb_description_advanced_layout;
    QLabel *description_advanced;
    QWidget *emulatorTab;
    QVBoxLayout *emulatorTab_layout;
    QHBoxLayout *emulatorTabLayout;
    QVBoxLayout *emulatorTabLayoutLeft;
    QGroupBox *gb_emu_settings;
    QVBoxLayout *gb_emu_settings_layout;
    QCheckBox *exitOnStop;
    QCheckBox *alwaysStart;
    QCheckBox *startGameFullscreen;
    QCheckBox *preventDisplaySleep;
    QCheckBox *showTrophyPopups;
    QCheckBox *useNativeInterface;
    QCheckBox *showShaderCompilationHint;
    QSpacerItem *emulatorTabSpacerLeft;
    QGroupBox *gb_max_llvm;
    QVBoxLayout *gb_max_llvm_layout;
    QComboBox *maxLLVMThreads;
    QVBoxLayout *emulatorTabLayoutMiddle;
    QGroupBox *gb_viewport;
    QVBoxLayout *gb_viewport_layout;
    QCheckBox *gs_disableMouse;
    QCheckBox *gs_disableKbHotkeys;
    QCheckBox *gs_showMouseInFullscreen;
    QCheckBox *gs_lockMouseInFullscreen;
    QWidget *gs_hideMouseOnIdle_widget;
    QHBoxLayout *gs_hideMouseOnIdle_layout;
    QCheckBox *gs_hideMouseOnIdle;
    QSpinBox *gs_hideMouseOnIdleTime;
    QWidget *gs_resizeOnBoot_widget;
    QVBoxLayout *gs_resizeOnBoot_layout;
    QCheckBox *gs_resizeOnBoot;
    QHBoxLayout *gs_resolution_layout;
    QGroupBox *gb_gs_width;
    QVBoxLayout *gb_gs_width_layout;
    QSpinBox *gs_width;
    QGroupBox *gb_gs_height;
    QVBoxLayout *gb_gs_height_layout;
    QSpinBox *gs_height;
    QGroupBox *gb_shader_load;
    QVBoxLayout *gb_shader_load_layout;
    QCheckBox *shaderLoadBgEnabled;
    QLabel *label_shaderLoadBgDarkening;
    QSlider *shaderLoadBgDarkening;
    QLabel *label_shaderLoadBgBlur;
    QSlider *shaderLoadBgBlur;
    QSpacerItem *spacer_shader_load;
    QGroupBox *gb_game_window_title;
    QVBoxLayout *layout_gb_game_window_title;
    QLabel *label_game_window_title_format;
    QHBoxLayout *layout_buttons_game_window_title;
    QPushButton *reset_button_game_window_title_format;
    QPushButton *edit_button_game_window_title_format;
    QVBoxLayout *emulatorTabLayoutRight;
    QGroupBox *gb_performance_overlay;
    QVBoxLayout *gb_performance_overlay_layout;
    QCheckBox *perfOverlayEnabled;
    QCheckBox *perfOverlayFramerateGraphEnabled;
    QCheckBox *perfOverlayFrametimeGraphEnabled;
    QWidget *perf_overlay_detail_level;
    QVBoxLayout *layout_perf_overlay_detail_level;
    QLabel *label_detail_level;
    QComboBox *perfOverlayDetailLevel;
    QWidget *perf_overlay_position;
    QVBoxLayout *layout_perf_overlay_position;
    QLabel *label_position;
    QComboBox *perfOverlayPosition;
    QLabel *label_margin_x;
    QHBoxLayout *layout_margin_x;
    QCheckBox *perfOverlayCenterX;
    QSpinBox *perfOverlayMarginX;
    QLabel *label_margin_y;
    QHBoxLayout *layout_margin_y;
    QCheckBox *perfOverlayCenterY;
    QSpinBox *perfOverlayMarginY;
    QWidget *perf_overlay_update_interval;
    QVBoxLayout *layout_perf_overlay_update_interval;
    QLabel *label_update_interval;
    QSlider *perfOverlayUpdateInterval;
    QWidget *perf_overlay_font_size;
    QVBoxLayout *layout_perf_overlay_font_size;
    QLabel *label_font_size;
    QSlider *perfOverlayFontSize;
    QWidget *perf_overlay_opacity;
    QVBoxLayout *layout_perf_overlay_opacity;
    QLabel *label_opacity;
    QSlider *perfOverlayOpacity;
    QWidget *perf_overlay_framerate_datapoints;
    QVBoxLayout *layout_perf_overlay_framerate_datapoints;
    QLabel *label_framerate_datapoints;
    QSlider *slider_framerate_datapoints;
    QWidget *perf_overlay_frametime_datapoints;
    QVBoxLayout *layout_perf_overlay_frametime_datapoints;
    QLabel *label_frametime_datapoints;
    QSlider *slider_frametime_datapoints;
    QSpacerItem *emulatorTabSpacerRight;
    QSpacerItem *emulatorTabSpacer;
    QGroupBox *gb_description_emulator;
    QVBoxLayout *gb_description_emulator_layout;
    QLabel *description_emulator;
    QWidget *guiTab;
    QVBoxLayout *guiTab_layout;
    QHBoxLayout *guiTabLayout;
    QVBoxLayout *guiTabLayoutLeft;
    QGroupBox *gb_stylesheets;
    QVBoxLayout *gb_stylesheets_layout;
    QComboBox *combo_stylesheets;
    QPushButton *pb_apply_stylesheet;
    QGroupBox *gb_colors;
    QVBoxLayout *gb_colors_layout;
    QCheckBox *cb_custom_colors;
    QPushButton *pb_gl_icon_color;
    QPushButton *pb_sd_icon_color;
    QPushButton *pb_tr_icon_color;
    QSpacerItem *guiTabSpacerLeft;
    QVBoxLayout *guiTabLayoutMiddle;
    QGroupBox *gb_log;
    QVBoxLayout *gb_log_layout;
    QWidget *log_limit;
    QVBoxLayout *layout_log_limit;
    QLabel *label_log_limit;
    QSpinBox *spinbox_log_limit;
    QWidget *tty_limit;
    QVBoxLayout *layout_tty_limit;
    QLabel *label_tty_limit;
    QSpinBox *spinbox_tty_limit;
    QSpacerItem *guiTabSpacerMiddle;
    QVBoxLayout *guiTabLayoutRight;
    QGroupBox *gb_gui_options;
    QVBoxLayout *gb_gui_options_layout;
    QCheckBox *cb_show_welcome;
    QCheckBox *cb_show_exit_game;
    QCheckBox *cb_show_boot_game;
    QCheckBox *cb_show_pkg_install;
    QCheckBox *cb_show_pup_install;
    QCheckBox *cb_show_obsolete_cfg_dialog;
    QCheckBox *cb_show_same_buttons_dialog;
    QSpacerItem *guiTabSpacerRight;
    QGroupBox *gb_updates;
    QVBoxLayout *layout_gb_updates;
    QComboBox *combo_updates;
    QGroupBox *gb_discord;
    QVBoxLayout *gb_discord_layout;
    QCheckBox *useRichPresence;
    QLabel *label_discordState;
    QLineEdit *discordState;
    QSpacerItem *guiTabSpacer;
    QGroupBox *gb_description_gui;
    QVBoxLayout *gb_description_gui_layout;
    QLabel *description_gui;
    QWidget *debugTab;
    QVBoxLayout *debugTab_layout;
    QHBoxLayout *debugTabLayout;
    QGroupBox *gb_debug_gpu;
    QVBoxLayout *gb_debug_gpu_layout;
    QCheckBox *renderdocCompatibility;
    QCheckBox *debugOutput;
    QCheckBox *debugOverlay;
    QCheckBox *logProg;
    QCheckBox *forceHighpZ;
    QCheckBox *disableHwOcclusionQueries;
    QCheckBox *forceCpuBlitEmulation;
    QCheckBox *disableVulkanMemAllocator;
    QCheckBox *disableVulkanFence;
    QCheckBox *disableFIFOReordering;
    QCheckBox *strictTextureFlushing;
    QCheckBox *gpuTextureScaling;
    QSpacerItem *verticalSpacerDebugGPU;
    QGroupBox *gb_debug_core;
    QVBoxLayout *gb_debug_core_layout;
    QCheckBox *ppuDebug;
    QCheckBox *spuDebug;
    QCheckBox *mfcDebug;
    QCheckBox *setDAZandFTZ;
    QCheckBox *accurateGETLLAR;
    QCheckBox *accurateSpuDMA;
    QCheckBox *accurateClineStores;
    QCheckBox *hookStFunc;
    QCheckBox *perfReport;
    QSpacerItem *verticalSpacerDebugCore;
    QWidget *debug_more_stuff;
    QVBoxLayout *debug_more_stuff_layout;
    QGroupBox *gb_accurate_ppu_128;
    QVBoxLayout *gb_accurate_ppu_128_layout;
    QComboBox *combo_accurate_ppu_128;
    QGroupBox *gb_num_ppu_threads;
    QVBoxLayout *vbl_num_ppu_threads;
    QComboBox *combo_num_ppu_threads;
    QSpacerItem *verticalSpacerDebugMore;
    QSpacerItem *debugTabSpacer;
    QGroupBox *gb_description_debug;
    QVBoxLayout *gb_description_debug_layout;
    QLabel *description_debug;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *settings_dialog)
    {
        if (settings_dialog->objectName().isEmpty())
            settings_dialog->setObjectName(QString::fromUtf8("settings_dialog"));
        settings_dialog->setWindowModality(Qt::WindowModal);
        settings_dialog->resize(856, 688);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings_dialog->sizePolicy().hasHeightForWidth());
        settings_dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        settings_dialog->setWindowIcon(icon);
        settings_dialog_layout = new QVBoxLayout(settings_dialog);
        settings_dialog_layout->setObjectName(QString::fromUtf8("settings_dialog_layout"));
        scrollArea = new QScrollArea(settings_dialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        tab_widget_settings = new QTabWidget();
        tab_widget_settings->setObjectName(QString::fromUtf8("tab_widget_settings"));
        tab_widget_settings->setEnabled(true);
        tab_widget_settings->setGeometry(QRect(0, 0, 838, 641));
        sizePolicy.setHeightForWidth(tab_widget_settings->sizePolicy().hasHeightForWidth());
        tab_widget_settings->setSizePolicy(sizePolicy);
        coreTab = new QWidget();
        coreTab->setObjectName(QString::fromUtf8("coreTab"));
        coreTabLayout = new QVBoxLayout(coreTab);
        coreTabLayout->setObjectName(QString::fromUtf8("coreTabLayout"));
        coreTabItemLayout = new QHBoxLayout();
        coreTabItemLayout->setObjectName(QString::fromUtf8("coreTabItemLayout"));
        coreTabLeftLayout = new QVBoxLayout();
        coreTabLeftLayout->setObjectName(QString::fromUtf8("coreTabLeftLayout"));
        gb_ppu = new QGroupBox(coreTab);
        gb_ppu->setObjectName(QString::fromUtf8("gb_ppu"));
        ppu_layout = new QVBoxLayout(gb_ppu);
        ppu_layout->setObjectName(QString::fromUtf8("ppu_layout"));
        ppu__static = new QRadioButton(gb_ppu);
        ppu__static->setObjectName(QString::fromUtf8("ppu__static"));
        ppu__static->setText(QString::fromUtf8("Interpreter (static)"));

        ppu_layout->addWidget(ppu__static);

        ppu_dynamic = new QRadioButton(gb_ppu);
        ppu_dynamic->setObjectName(QString::fromUtf8("ppu_dynamic"));
        ppu_dynamic->setText(QString::fromUtf8("Interpreter (dynamic)"));

        ppu_layout->addWidget(ppu_dynamic);

        ppu_llvm = new QRadioButton(gb_ppu);
        ppu_llvm->setObjectName(QString::fromUtf8("ppu_llvm"));
        ppu_llvm->setText(QString::fromUtf8("LLVM Recompiler (fastest)"));

        ppu_layout->addWidget(ppu_llvm);


        coreTabLeftLayout->addWidget(gb_ppu);

        gb_spu = new QGroupBox(coreTab);
        gb_spu->setObjectName(QString::fromUtf8("gb_spu"));
        spu_layout = new QVBoxLayout(gb_spu);
        spu_layout->setObjectName(QString::fromUtf8("spu_layout"));
        spu__static = new QRadioButton(gb_spu);
        spu__static->setObjectName(QString::fromUtf8("spu__static"));
        spu__static->setText(QString::fromUtf8("Interpreter (static)"));

        spu_layout->addWidget(spu__static);

        spu_dynamic = new QRadioButton(gb_spu);
        spu_dynamic->setObjectName(QString::fromUtf8("spu_dynamic"));
        spu_dynamic->setText(QString::fromUtf8("Interpreter (dynamic)"));

        spu_layout->addWidget(spu_dynamic);

        spu_asmjit = new QRadioButton(gb_spu);
        spu_asmjit->setObjectName(QString::fromUtf8("spu_asmjit"));
        spu_asmjit->setText(QString::fromUtf8("ASMJIT Recompiler (faster)"));

        spu_layout->addWidget(spu_asmjit);

        spu_llvm = new QRadioButton(gb_spu);
        spu_llvm->setObjectName(QString::fromUtf8("spu_llvm"));
        spu_llvm->setText(QString::fromUtf8("LLVM Recompiler (fastest)"));

        spu_layout->addWidget(spu_llvm);


        coreTabLeftLayout->addWidget(gb_spu);

        coreTabLeftLayoutSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        coreTabLeftLayout->addItem(coreTabLeftLayoutSpacer);


        coreTabItemLayout->addLayout(coreTabLeftLayout);

        coreTabMiddleLayout = new QVBoxLayout();
        coreTabMiddleLayout->setObjectName(QString::fromUtf8("coreTabMiddleLayout"));
        checkboxes = new QGroupBox(coreTab);
        checkboxes->setObjectName(QString::fromUtf8("checkboxes"));
        checkboxes_layout = new QVBoxLayout(checkboxes);
        checkboxes_layout->setObjectName(QString::fromUtf8("checkboxes_layout"));
        spuLoopDetection = new QCheckBox(checkboxes);
        spuLoopDetection->setObjectName(QString::fromUtf8("spuLoopDetection"));

        checkboxes_layout->addWidget(spuLoopDetection);

        accurateXFloat = new QCheckBox(checkboxes);
        accurateXFloat->setObjectName(QString::fromUtf8("accurateXFloat"));

        checkboxes_layout->addWidget(accurateXFloat);

        approximateXFloat = new QCheckBox(checkboxes);
        approximateXFloat->setObjectName(QString::fromUtf8("approximateXFloat"));

        checkboxes_layout->addWidget(approximateXFloat);

        fullWidthAVX512 = new QCheckBox(checkboxes);
        fullWidthAVX512->setObjectName(QString::fromUtf8("fullWidthAVX512"));

        checkboxes_layout->addWidget(fullWidthAVX512);


        coreTabMiddleLayout->addWidget(checkboxes);

        coreTabMiddleLayoutSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        coreTabMiddleLayout->addItem(coreTabMiddleLayoutSpacer);


        coreTabItemLayout->addLayout(coreTabMiddleLayout);

        coreTabRightLayout = new QVBoxLayout();
        coreTabRightLayout->setObjectName(QString::fromUtf8("coreTabRightLayout"));
        gb_tsx = new QGroupBox(coreTab);
        gb_tsx->setObjectName(QString::fromUtf8("gb_tsx"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gb_tsx->sizePolicy().hasHeightForWidth());
        gb_tsx->setSizePolicy(sizePolicy1);
        gb_tsx_layout = new QVBoxLayout(gb_tsx);
        gb_tsx_layout->setObjectName(QString::fromUtf8("gb_tsx_layout"));
        enableTSX = new QComboBox(gb_tsx);
        enableTSX->setObjectName(QString::fromUtf8("enableTSX"));

        gb_tsx_layout->addWidget(enableTSX);


        coreTabRightLayout->addWidget(gb_tsx);

        gb_spuBlockSize = new QGroupBox(coreTab);
        gb_spuBlockSize->setObjectName(QString::fromUtf8("gb_spuBlockSize"));
        sizePolicy1.setHeightForWidth(gb_spuBlockSize->sizePolicy().hasHeightForWidth());
        gb_spuBlockSize->setSizePolicy(sizePolicy1);
        gb_spuBlockSize_layout = new QVBoxLayout(gb_spuBlockSize);
        gb_spuBlockSize_layout->setObjectName(QString::fromUtf8("gb_spuBlockSize_layout"));
        spuBlockSize = new QComboBox(gb_spuBlockSize);
        spuBlockSize->setObjectName(QString::fromUtf8("spuBlockSize"));

        gb_spuBlockSize_layout->addWidget(spuBlockSize);


        coreTabRightLayout->addWidget(gb_spuBlockSize);

        gb_spu_threads = new QGroupBox(coreTab);
        gb_spu_threads->setObjectName(QString::fromUtf8("gb_spu_threads"));
        sizePolicy1.setHeightForWidth(gb_spu_threads->sizePolicy().hasHeightForWidth());
        gb_spu_threads->setSizePolicy(sizePolicy1);
        gb_spu_threads_layout = new QVBoxLayout(gb_spu_threads);
        gb_spu_threads_layout->setObjectName(QString::fromUtf8("gb_spu_threads_layout"));
        preferredSPUThreads = new QComboBox(gb_spu_threads);
        preferredSPUThreads->setObjectName(QString::fromUtf8("preferredSPUThreads"));

        gb_spu_threads_layout->addWidget(preferredSPUThreads);


        coreTabRightLayout->addWidget(gb_spu_threads);

        gb_threadsched = new QGroupBox(coreTab);
        gb_threadsched->setObjectName(QString::fromUtf8("gb_threadsched"));
        sizePolicy1.setHeightForWidth(gb_threadsched->sizePolicy().hasHeightForWidth());
        gb_threadsched->setSizePolicy(sizePolicy1);
        gb_threadsched_layout = new QVBoxLayout(gb_threadsched);
        gb_threadsched_layout->setObjectName(QString::fromUtf8("gb_threadsched_layout"));
        threadsched = new QComboBox(gb_threadsched);
        threadsched->setObjectName(QString::fromUtf8("threadsched"));

        gb_threadsched_layout->addWidget(threadsched);


        coreTabRightLayout->addWidget(gb_threadsched);

        coreTabRightLayoutSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        coreTabRightLayout->addItem(coreTabRightLayoutSpacer);


        coreTabItemLayout->addLayout(coreTabRightLayout);


        coreTabLayout->addLayout(coreTabItemLayout);

        coreTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        coreTabLayout->addItem(coreTabSpacer);

        gb_description_cpu = new QGroupBox(coreTab);
        gb_description_cpu->setObjectName(QString::fromUtf8("gb_description_cpu"));
        gb_description_cpu_layout = new QVBoxLayout(gb_description_cpu);
        gb_description_cpu_layout->setObjectName(QString::fromUtf8("gb_description_cpu_layout"));
        description_cpu = new QLabel(gb_description_cpu);
        description_cpu->setObjectName(QString::fromUtf8("description_cpu"));
        description_cpu->setTextFormat(Qt::PlainText);
        description_cpu->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_cpu->setWordWrap(true);

        gb_description_cpu_layout->addWidget(description_cpu);


        coreTabLayout->addWidget(gb_description_cpu);

        coreTabLayout->setStretch(1, 1);
        tab_widget_settings->addTab(coreTab, QString());
        gpuTab = new QWidget();
        gpuTab->setObjectName(QString::fromUtf8("gpuTab"));
        gpuTab_layout = new QVBoxLayout(gpuTab);
        gpuTab_layout->setObjectName(QString::fromUtf8("gpuTab_layout"));
        gpuTabLayout = new QHBoxLayout();
        gpuTabLayout->setObjectName(QString::fromUtf8("gpuTabLayout"));
        gpuTabLayoutLeft = new QVBoxLayout();
        gpuTabLayoutLeft->setObjectName(QString::fromUtf8("gpuTabLayoutLeft"));
        gb_renderer = new QGroupBox(gpuTab);
        gb_renderer->setObjectName(QString::fromUtf8("gb_renderer"));
        gb_renderer_layout = new QVBoxLayout(gb_renderer);
        gb_renderer_layout->setObjectName(QString::fromUtf8("gb_renderer_layout"));
        renderBox = new QComboBox(gb_renderer);
        renderBox->setObjectName(QString::fromUtf8("renderBox"));

        gb_renderer_layout->addWidget(renderBox);


        gpuTabLayoutLeft->addWidget(gb_renderer);

        gb_graphicsAdapter = new QGroupBox(gpuTab);
        gb_graphicsAdapter->setObjectName(QString::fromUtf8("gb_graphicsAdapter"));
        gb_graphicsAdapter_layout = new QVBoxLayout(gb_graphicsAdapter);
        gb_graphicsAdapter_layout->setObjectName(QString::fromUtf8("gb_graphicsAdapter_layout"));
        graphicsAdapterBox = new QComboBox(gb_graphicsAdapter);
        graphicsAdapterBox->setObjectName(QString::fromUtf8("graphicsAdapterBox"));

        gb_graphicsAdapter_layout->addWidget(graphicsAdapterBox);


        gpuTabLayoutLeft->addWidget(gb_graphicsAdapter);

        widget_gpu_top = new QWidget(gpuTab);
        widget_gpu_top->setObjectName(QString::fromUtf8("widget_gpu_top"));
        widget_gpu_top_layout = new QHBoxLayout(widget_gpu_top);
        widget_gpu_top_layout->setObjectName(QString::fromUtf8("widget_gpu_top_layout"));
        widget_gpu_top_layout->setContentsMargins(0, 0, 0, 0);
        gb_aspectRatio = new QGroupBox(widget_gpu_top);
        gb_aspectRatio->setObjectName(QString::fromUtf8("gb_aspectRatio"));
        gb_aspectRatio_layout = new QVBoxLayout(gb_aspectRatio);
        gb_aspectRatio_layout->setObjectName(QString::fromUtf8("gb_aspectRatio_layout"));
        aspectBox = new QComboBox(gb_aspectRatio);
        aspectBox->setObjectName(QString::fromUtf8("aspectBox"));

        gb_aspectRatio_layout->addWidget(aspectBox);


        widget_gpu_top_layout->addWidget(gb_aspectRatio);

        gb_frameLimit = new QGroupBox(widget_gpu_top);
        gb_frameLimit->setObjectName(QString::fromUtf8("gb_frameLimit"));
        gb_frameLimit_layout = new QVBoxLayout(gb_frameLimit);
        gb_frameLimit_layout->setObjectName(QString::fromUtf8("gb_frameLimit_layout"));
        frameLimitBox = new QComboBox(gb_frameLimit);
        frameLimitBox->setObjectName(QString::fromUtf8("frameLimitBox"));

        gb_frameLimit_layout->addWidget(frameLimitBox);


        widget_gpu_top_layout->addWidget(gb_frameLimit);

        widget_gpu_top_layout->setStretch(0, 1);
        widget_gpu_top_layout->setStretch(1, 1);

        gpuTabLayoutLeft->addWidget(widget_gpu_top);

        widget_gpu_bottom = new QWidget(gpuTab);
        widget_gpu_bottom->setObjectName(QString::fromUtf8("widget_gpu_bottom"));
        widget_gpu_bottom_layout = new QHBoxLayout(widget_gpu_bottom);
        widget_gpu_bottom_layout->setObjectName(QString::fromUtf8("widget_gpu_bottom_layout"));
        widget_gpu_bottom_layout->setContentsMargins(0, 0, 0, 0);
        gb_anisotropicFilter = new QGroupBox(widget_gpu_bottom);
        gb_anisotropicFilter->setObjectName(QString::fromUtf8("gb_anisotropicFilter"));
        gb_anisotropicFilter_layout = new QVBoxLayout(gb_anisotropicFilter);
        gb_anisotropicFilter_layout->setObjectName(QString::fromUtf8("gb_anisotropicFilter_layout"));
        anisotropicFilterOverride = new QComboBox(gb_anisotropicFilter);
        anisotropicFilterOverride->setObjectName(QString::fromUtf8("anisotropicFilterOverride"));

        gb_anisotropicFilter_layout->addWidget(anisotropicFilterOverride);


        widget_gpu_bottom_layout->addWidget(gb_anisotropicFilter);

        gb_antiAliasing = new QGroupBox(widget_gpu_bottom);
        gb_antiAliasing->setObjectName(QString::fromUtf8("gb_antiAliasing"));
        gb_antiAliasing_layout = new QVBoxLayout(gb_antiAliasing);
        gb_antiAliasing_layout->setObjectName(QString::fromUtf8("gb_antiAliasing_layout"));
        antiAliasing = new QComboBox(gb_antiAliasing);
        antiAliasing->setObjectName(QString::fromUtf8("antiAliasing"));

        gb_antiAliasing_layout->addWidget(antiAliasing);


        widget_gpu_bottom_layout->addWidget(gb_antiAliasing);

        widget_gpu_bottom_layout->setStretch(0, 1);
        widget_gpu_bottom_layout->setStretch(1, 1);

        gpuTabLayoutLeft->addWidget(widget_gpu_bottom);

        widget_gpu_3 = new QWidget(gpuTab);
        widget_gpu_3->setObjectName(QString::fromUtf8("widget_gpu_3"));
        widget_gpu_3_layout = new QHBoxLayout(widget_gpu_3);
        widget_gpu_3_layout->setObjectName(QString::fromUtf8("widget_gpu_3_layout"));
        widget_gpu_3_layout->setContentsMargins(0, 0, 0, 0);
        gbZCULL = new QGroupBox(widget_gpu_3);
        gbZCULL->setObjectName(QString::fromUtf8("gbZCULL"));
        gbZCULL_layout = new QVBoxLayout(gbZCULL);
        gbZCULL_layout->setObjectName(QString::fromUtf8("gbZCULL_layout"));
        zcullPrecisionMode = new QComboBox(gbZCULL);
        zcullPrecisionMode->setObjectName(QString::fromUtf8("zcullPrecisionMode"));

        gbZCULL_layout->addWidget(zcullPrecisionMode);


        widget_gpu_3_layout->addWidget(gbZCULL);

        widget_gpu_3_layout->setStretch(0, 1);

        gpuTabLayoutLeft->addWidget(widget_gpu_3);

        gpu_tab_layout_right_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gpuTabLayoutLeft->addItem(gpu_tab_layout_right_spacer);


        gpuTabLayout->addLayout(gpuTabLayoutLeft);

        gpuTabLayoutMiddle = new QVBoxLayout();
        gpuTabLayoutMiddle->setObjectName(QString::fromUtf8("gpuTabLayoutMiddle"));
        gb_default_resolution = new QGroupBox(gpuTab);
        gb_default_resolution->setObjectName(QString::fromUtf8("gb_default_resolution"));
        gb_default_resolution_layout = new QVBoxLayout(gb_default_resolution);
        gb_default_resolution_layout->setObjectName(QString::fromUtf8("gb_default_resolution_layout"));
        resBox = new QComboBox(gb_default_resolution);
        resBox->setObjectName(QString::fromUtf8("resBox"));

        gb_default_resolution_layout->addWidget(resBox);


        gpuTabLayoutMiddle->addWidget(gb_default_resolution);

        layout_resolution_scale = new QVBoxLayout();
        layout_resolution_scale->setSpacing(6);
        layout_resolution_scale->setObjectName(QString::fromUtf8("layout_resolution_scale"));
        layout_resolution_scale->setContentsMargins(0, -1, -1, -1);
        gb_resolutionScale = new QGroupBox(gpuTab);
        gb_resolutionScale->setObjectName(QString::fromUtf8("gb_resolutionScale"));
        gb_resolutionScale_layout = new QVBoxLayout(gb_resolutionScale);
        gb_resolutionScale_layout->setObjectName(QString::fromUtf8("gb_resolutionScale_layout"));
        resolutionScaleLayoutTop = new QWidget(gb_resolutionScale);
        resolutionScaleLayoutTop->setObjectName(QString::fromUtf8("resolutionScaleLayoutTop"));
        horizontalLayout_23 = new QHBoxLayout(resolutionScaleLayoutTop);
        horizontalLayout_23->setSpacing(12);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        resolutionScaleMin = new QLabel(resolutionScaleLayoutTop);
        resolutionScaleMin->setObjectName(QString::fromUtf8("resolutionScaleMin"));
        resolutionScaleMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_23->addWidget(resolutionScaleMin);

        resolutionScale = new QSlider(resolutionScaleLayoutTop);
        resolutionScale->setObjectName(QString::fromUtf8("resolutionScale"));
        resolutionScale->setOrientation(Qt::Horizontal);

        horizontalLayout_23->addWidget(resolutionScale);

        resolutionScaleMax = new QLabel(resolutionScaleLayoutTop);
        resolutionScaleMax->setObjectName(QString::fromUtf8("resolutionScaleMax"));

        horizontalLayout_23->addWidget(resolutionScaleMax);

        horizontalLayout_23->setStretch(1, 1);

        gb_resolutionScale_layout->addWidget(resolutionScaleLayoutTop);

        resolutionScaleLayoutBottom = new QHBoxLayout();
        resolutionScaleLayoutBottom->setObjectName(QString::fromUtf8("resolutionScaleLayoutBottom"));
        resolutionScaleVal = new QLabel(gb_resolutionScale);
        resolutionScaleVal->setObjectName(QString::fromUtf8("resolutionScaleVal"));
        resolutionScaleVal->setAlignment(Qt::AlignCenter);

        resolutionScaleLayoutBottom->addWidget(resolutionScaleVal);

        resolutionScaleReset = new QPushButton(gb_resolutionScale);
        resolutionScaleReset->setObjectName(QString::fromUtf8("resolutionScaleReset"));

        resolutionScaleLayoutBottom->addWidget(resolutionScaleReset);

        resolutionScaleLayoutBottom->setStretch(0, 1);

        gb_resolutionScale_layout->addLayout(resolutionScaleLayoutBottom);


        layout_resolution_scale->addWidget(gb_resolutionScale);

        gb_minimumScalableDimension = new QGroupBox(gpuTab);
        gb_minimumScalableDimension->setObjectName(QString::fromUtf8("gb_minimumScalableDimension"));
        gb_minimumScalableDimension_layout = new QVBoxLayout(gb_minimumScalableDimension);
        gb_minimumScalableDimension_layout->setObjectName(QString::fromUtf8("gb_minimumScalableDimension_layout"));
        minimumScalableDimensionLayoutTop = new QHBoxLayout();
        minimumScalableDimensionLayoutTop->setSpacing(12);
        minimumScalableDimensionLayoutTop->setObjectName(QString::fromUtf8("minimumScalableDimensionLayoutTop"));
        minimumScalableDimensionMin = new QLabel(gb_minimumScalableDimension);
        minimumScalableDimensionMin->setObjectName(QString::fromUtf8("minimumScalableDimensionMin"));
        minimumScalableDimensionMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        minimumScalableDimensionLayoutTop->addWidget(minimumScalableDimensionMin);

        minimumScalableDimension = new QSlider(gb_minimumScalableDimension);
        minimumScalableDimension->setObjectName(QString::fromUtf8("minimumScalableDimension"));
        minimumScalableDimension->setOrientation(Qt::Horizontal);

        minimumScalableDimensionLayoutTop->addWidget(minimumScalableDimension);

        minimumScalableDimensionMax = new QLabel(gb_minimumScalableDimension);
        minimumScalableDimensionMax->setObjectName(QString::fromUtf8("minimumScalableDimensionMax"));

        minimumScalableDimensionLayoutTop->addWidget(minimumScalableDimensionMax);

        minimumScalableDimensionLayoutTop->setStretch(1, 1);

        gb_minimumScalableDimension_layout->addLayout(minimumScalableDimensionLayoutTop);

        minimumScalableDimensionLayoutBottom = new QHBoxLayout();
        minimumScalableDimensionLayoutBottom->setObjectName(QString::fromUtf8("minimumScalableDimensionLayoutBottom"));
        minimumScalableDimensionVal = new QLabel(gb_minimumScalableDimension);
        minimumScalableDimensionVal->setObjectName(QString::fromUtf8("minimumScalableDimensionVal"));
        minimumScalableDimensionVal->setAlignment(Qt::AlignCenter);

        minimumScalableDimensionLayoutBottom->addWidget(minimumScalableDimensionVal);

        minimumScalableDimensionReset = new QPushButton(gb_minimumScalableDimension);
        minimumScalableDimensionReset->setObjectName(QString::fromUtf8("minimumScalableDimensionReset"));

        minimumScalableDimensionLayoutBottom->addWidget(minimumScalableDimensionReset);

        minimumScalableDimensionLayoutBottom->setStretch(0, 1);

        gb_minimumScalableDimension_layout->addLayout(minimumScalableDimensionLayoutBottom);


        layout_resolution_scale->addWidget(gb_minimumScalableDimension);


        gpuTabLayoutMiddle->addLayout(layout_resolution_scale);

        gb_Upscaling = new QGroupBox(gpuTab);
        gb_Upscaling->setObjectName(QString::fromUtf8("gb_Upscaling"));
        gb_Upscaling_layout = new QVBoxLayout(gb_Upscaling);
        gb_Upscaling_layout->setObjectName(QString::fromUtf8("gb_Upscaling_layout"));
        fsrUpscalingEnable = new QCheckBox(gb_Upscaling);
        fsrUpscalingEnable->setObjectName(QString::fromUtf8("fsrUpscalingEnable"));

        gb_Upscaling_layout->addWidget(fsrUpscalingEnable);

        line = new QFrame(gb_Upscaling);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gb_Upscaling_layout->addWidget(line);

        fsrSharpeningStrengthWidget = new QWidget(gb_Upscaling);
        fsrSharpeningStrengthWidget->setObjectName(QString::fromUtf8("fsrSharpeningStrengthWidget"));
        fsrSharpeningWidgetLayout = new QVBoxLayout(fsrSharpeningStrengthWidget);
        fsrSharpeningWidgetLayout->setObjectName(QString::fromUtf8("fsrSharpeningWidgetLayout"));
        fsrSharpeningWidgetLayout->setContentsMargins(0, 0, 0, 0);
        fsrSharpeningStrengthLabel = new QLabel(fsrSharpeningStrengthWidget);
        fsrSharpeningStrengthLabel->setObjectName(QString::fromUtf8("fsrSharpeningStrengthLabel"));
        sizePolicy.setHeightForWidth(fsrSharpeningStrengthLabel->sizePolicy().hasHeightForWidth());
        fsrSharpeningStrengthLabel->setSizePolicy(sizePolicy);
        fsrSharpeningStrengthLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        fsrSharpeningStrengthLabel->setMargin(1);

        fsrSharpeningWidgetLayout->addWidget(fsrSharpeningStrengthLabel);

        fsrSharpeningLayoutTop = new QHBoxLayout();
        fsrSharpeningLayoutTop->setObjectName(QString::fromUtf8("fsrSharpeningLayoutTop"));
        minSharpeningVal = new QLabel(fsrSharpeningStrengthWidget);
        minSharpeningVal->setObjectName(QString::fromUtf8("minSharpeningVal"));

        fsrSharpeningLayoutTop->addWidget(minSharpeningVal);

        fsrSharpeningStrength = new QSlider(fsrSharpeningStrengthWidget);
        fsrSharpeningStrength->setObjectName(QString::fromUtf8("fsrSharpeningStrength"));
        fsrSharpeningStrength->setOrientation(Qt::Horizontal);

        fsrSharpeningLayoutTop->addWidget(fsrSharpeningStrength);

        maxSharpeningVal = new QLabel(fsrSharpeningStrengthWidget);
        maxSharpeningVal->setObjectName(QString::fromUtf8("maxSharpeningVal"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(maxSharpeningVal->sizePolicy().hasHeightForWidth());
        maxSharpeningVal->setSizePolicy(sizePolicy2);

        fsrSharpeningLayoutTop->addWidget(maxSharpeningVal);


        fsrSharpeningWidgetLayout->addLayout(fsrSharpeningLayoutTop);

        fsrSharpeningLayoutBottom = new QHBoxLayout();
        fsrSharpeningLayoutBottom->setObjectName(QString::fromUtf8("fsrSharpeningLayoutBottom"));
        fsrSharpeningStrengthVal = new QLabel(fsrSharpeningStrengthWidget);
        fsrSharpeningStrengthVal->setObjectName(QString::fromUtf8("fsrSharpeningStrengthVal"));
        fsrSharpeningStrengthVal->setAlignment(Qt::AlignCenter);

        fsrSharpeningLayoutBottom->addWidget(fsrSharpeningStrengthVal);

        fsrSharpeningStrengthReset = new QPushButton(fsrSharpeningStrengthWidget);
        fsrSharpeningStrengthReset->setObjectName(QString::fromUtf8("fsrSharpeningStrengthReset"));

        fsrSharpeningLayoutBottom->addWidget(fsrSharpeningStrengthReset);

        fsrSharpeningLayoutBottom->setStretch(0, 1);

        fsrSharpeningWidgetLayout->addLayout(fsrSharpeningLayoutBottom);


        gb_Upscaling_layout->addWidget(fsrSharpeningStrengthWidget);


        gpuTabLayoutMiddle->addWidget(gb_Upscaling);

        gpu_tab_layout_middle_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gpuTabLayoutMiddle->addItem(gpu_tab_layout_middle_spacer);


        gpuTabLayout->addLayout(gpuTabLayoutMiddle);

        gpuTabLayoutRight = new QVBoxLayout();
        gpuTabLayoutRight->setObjectName(QString::fromUtf8("gpuTabLayoutRight"));
        gpuTabLayoutRight->setContentsMargins(-1, -1, 12, 12);
        gb_shader_mode = new QGroupBox(gpuTab);
        gb_shader_mode->setObjectName(QString::fromUtf8("gb_shader_mode"));
        gb_shader_mode->setMinimumSize(QSize(0, 123));
        verticalLayout = new QVBoxLayout(gb_shader_mode);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rb_legacy_recompiler = new QRadioButton(gb_shader_mode);
        rb_legacy_recompiler->setObjectName(QString::fromUtf8("rb_legacy_recompiler"));
        rb_legacy_recompiler->setText(QString::fromUtf8("Legacy (single threaded)"));

        verticalLayout->addWidget(rb_legacy_recompiler);

        rb_async_recompiler = new QRadioButton(gb_shader_mode);
        rb_async_recompiler->setObjectName(QString::fromUtf8("rb_async_recompiler"));
        rb_async_recompiler->setText(QString::fromUtf8("Async (multi threaded)"));

        verticalLayout->addWidget(rb_async_recompiler);

        rb_async_with_shader_interpreter = new QRadioButton(gb_shader_mode);
        rb_async_with_shader_interpreter->setObjectName(QString::fromUtf8("rb_async_with_shader_interpreter"));
        rb_async_with_shader_interpreter->setText(QString::fromUtf8("Async with Shader Interpreter"));

        verticalLayout->addWidget(rb_async_with_shader_interpreter);

        rb_shader_interpreter_only = new QRadioButton(gb_shader_mode);
        rb_shader_interpreter_only->setObjectName(QString::fromUtf8("rb_shader_interpreter_only"));
        rb_shader_interpreter_only->setText(QString::fromUtf8("Shader Interpreter only"));

        verticalLayout->addWidget(rb_shader_interpreter_only);


        gpuTabLayoutRight->addWidget(gb_shader_mode);

        gb_shader_compiler_threads = new QGroupBox(gpuTab);
        gb_shader_compiler_threads->setObjectName(QString::fromUtf8("gb_shader_compiler_threads"));
        gb_shader_compiler_threads_layout = new QVBoxLayout(gb_shader_compiler_threads);
        gb_shader_compiler_threads_layout->setObjectName(QString::fromUtf8("gb_shader_compiler_threads_layout"));
        shaderCompilerThreads = new QComboBox(gb_shader_compiler_threads);
        shaderCompilerThreads->setObjectName(QString::fromUtf8("shaderCompilerThreads"));

        gb_shader_compiler_threads_layout->addWidget(shaderCompilerThreads);


        gpuTabLayoutRight->addWidget(gb_shader_compiler_threads);

        gb_additional_settings = new QGroupBox(gpuTab);
        gb_additional_settings->setObjectName(QString::fromUtf8("gb_additional_settings"));
        sizePolicy.setHeightForWidth(gb_additional_settings->sizePolicy().hasHeightForWidth());
        gb_additional_settings->setSizePolicy(sizePolicy);
        gb_additional_settings->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gb_additional_settings_layout = new QVBoxLayout(gb_additional_settings);
        gb_additional_settings_layout->setObjectName(QString::fromUtf8("gb_additional_settings_layout"));
        dumpColor = new QCheckBox(gb_additional_settings);
        dumpColor->setObjectName(QString::fromUtf8("dumpColor"));

        gb_additional_settings_layout->addWidget(dumpColor);

        strictModeRendering = new QCheckBox(gb_additional_settings);
        strictModeRendering->setObjectName(QString::fromUtf8("strictModeRendering"));

        gb_additional_settings_layout->addWidget(strictModeRendering);

        vsync = new QCheckBox(gb_additional_settings);
        vsync->setObjectName(QString::fromUtf8("vsync"));

        gb_additional_settings_layout->addWidget(vsync);

        stretchToDisplayArea = new QCheckBox(gb_additional_settings);
        stretchToDisplayArea->setObjectName(QString::fromUtf8("stretchToDisplayArea"));

        gb_additional_settings_layout->addWidget(stretchToDisplayArea);

        Enable3D = new QCheckBox(gb_additional_settings);
        Enable3D->setObjectName(QString::fromUtf8("Enable3D"));

        gb_additional_settings_layout->addWidget(Enable3D);

        disableVertexCache = new QCheckBox(gb_additional_settings);
        disableVertexCache->setObjectName(QString::fromUtf8("disableVertexCache"));

        gb_additional_settings_layout->addWidget(disableVertexCache);

        multithreadedRSX = new QCheckBox(gb_additional_settings);
        multithreadedRSX->setObjectName(QString::fromUtf8("multithreadedRSX"));

        gb_additional_settings_layout->addWidget(multithreadedRSX);

        asyncTextureStreaming = new QCheckBox(gb_additional_settings);
        asyncTextureStreaming->setObjectName(QString::fromUtf8("asyncTextureStreaming"));

        gb_additional_settings_layout->addWidget(asyncTextureStreaming);

        additional_settings_spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_additional_settings_layout->addItem(additional_settings_spacer);


        gpuTabLayoutRight->addWidget(gb_additional_settings);


        gpuTabLayout->addLayout(gpuTabLayoutRight);

        gpuTabLayout->setStretch(0, 1);
        gpuTabLayout->setStretch(1, 1);
        gpuTabLayout->setStretch(2, 1);

        gpuTab_layout->addLayout(gpuTabLayout);

        gpuTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gpuTab_layout->addItem(gpuTabSpacer);

        gb_description_gpu = new QGroupBox(gpuTab);
        gb_description_gpu->setObjectName(QString::fromUtf8("gb_description_gpu"));
        gb_description_gpu_layout = new QHBoxLayout(gb_description_gpu);
        gb_description_gpu_layout->setObjectName(QString::fromUtf8("gb_description_gpu_layout"));
        description_gpu = new QLabel(gb_description_gpu);
        description_gpu->setObjectName(QString::fromUtf8("description_gpu"));
        description_gpu->setTextFormat(Qt::PlainText);
        description_gpu->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_gpu->setWordWrap(true);

        gb_description_gpu_layout->addWidget(description_gpu);


        gpuTab_layout->addWidget(gb_description_gpu);

        gpuTab_layout->setStretch(1, 1);
        tab_widget_settings->addTab(gpuTab, QString());
        audioTab = new QWidget();
        audioTab->setObjectName(QString::fromUtf8("audioTab"));
        audioTab_layout = new QVBoxLayout(audioTab);
        audioTab_layout->setObjectName(QString::fromUtf8("audioTab_layout"));
        audioTabLayoutTop = new QHBoxLayout();
        audioTabLayoutTop->setObjectName(QString::fromUtf8("audioTabLayoutTop"));
        audioTabLayoutTopLeft = new QVBoxLayout();
        audioTabLayoutTopLeft->setObjectName(QString::fromUtf8("audioTabLayoutTopLeft"));
        gb_audio_out = new QGroupBox(audioTab);
        gb_audio_out->setObjectName(QString::fromUtf8("gb_audio_out"));
        gb_audio_out_layout = new QVBoxLayout(gb_audio_out);
        gb_audio_out_layout->setObjectName(QString::fromUtf8("gb_audio_out_layout"));
        audioOutBox = new QComboBox(gb_audio_out);
        audioOutBox->setObjectName(QString::fromUtf8("audioOutBox"));

        gb_audio_out_layout->addWidget(audioOutBox);


        audioTabLayoutTopLeft->addWidget(gb_audio_out);

        gb_audio_downmix = new QGroupBox(audioTab);
        gb_audio_downmix->setObjectName(QString::fromUtf8("gb_audio_downmix"));
        gb_audio_channels_layout = new QVBoxLayout(gb_audio_downmix);
        gb_audio_channels_layout->setObjectName(QString::fromUtf8("gb_audio_channels_layout"));
        combo_audio_downmix = new QComboBox(gb_audio_downmix);
        combo_audio_downmix->setObjectName(QString::fromUtf8("combo_audio_downmix"));

        gb_audio_channels_layout->addWidget(combo_audio_downmix);


        audioTabLayoutTopLeft->addWidget(gb_audio_downmix);

        gb_audio_settings = new QGroupBox(audioTab);
        gb_audio_settings->setObjectName(QString::fromUtf8("gb_audio_settings"));
        gb_audio_settings_layout = new QVBoxLayout(gb_audio_settings);
        gb_audio_settings_layout->setObjectName(QString::fromUtf8("gb_audio_settings_layout"));
        audioDump = new QCheckBox(gb_audio_settings);
        audioDump->setObjectName(QString::fromUtf8("audioDump"));

        gb_audio_settings_layout->addWidget(audioDump);

        convert = new QCheckBox(gb_audio_settings);
        convert->setObjectName(QString::fromUtf8("convert"));

        gb_audio_settings_layout->addWidget(convert);

        spacer_audio_settings = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_audio_settings_layout->addItem(spacer_audio_settings);


        audioTabLayoutTopLeft->addWidget(gb_audio_settings);


        audioTabLayoutTop->addLayout(audioTabLayoutTopLeft);

        audioTabLayoutTopMiddle = new QVBoxLayout();
        audioTabLayoutTopMiddle->setObjectName(QString::fromUtf8("audioTabLayoutTopMiddle"));
        gb_audio_volume = new QGroupBox(audioTab);
        gb_audio_volume->setObjectName(QString::fromUtf8("gb_audio_volume"));
        gb_audio_volume_layout = new QVBoxLayout(gb_audio_volume);
        gb_audio_volume_layout->setObjectName(QString::fromUtf8("gb_audio_volume_layout"));
        master_volume = new QWidget(gb_audio_volume);
        master_volume->setObjectName(QString::fromUtf8("master_volume"));
        layout_master_volume = new QVBoxLayout(master_volume);
        layout_master_volume->setObjectName(QString::fromUtf8("layout_master_volume"));
        layout_master_volume->setContentsMargins(0, 0, 0, 0);
        masterVolumeLabel = new QLabel(master_volume);
        masterVolumeLabel->setObjectName(QString::fromUtf8("masterVolumeLabel"));

        layout_master_volume->addWidget(masterVolumeLabel);

        masterVolume = new QSlider(master_volume);
        masterVolume->setObjectName(QString::fromUtf8("masterVolume"));
        masterVolume->setOrientation(Qt::Horizontal);
        masterVolume->setTickPosition(QSlider::TicksBelow);
        masterVolume->setTickInterval(50);

        layout_master_volume->addWidget(masterVolume);


        gb_audio_volume_layout->addWidget(master_volume);

        spacer_audio_volume = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_audio_volume_layout->addItem(spacer_audio_volume);


        audioTabLayoutTopMiddle->addWidget(gb_audio_volume);


        audioTabLayoutTop->addLayout(audioTabLayoutTopMiddle);

        audioTabLayoutTopRight = new QVBoxLayout();
        audioTabLayoutTopRight->setObjectName(QString::fromUtf8("audioTabLayoutTopRight"));
        gb_audio_buffering = new QGroupBox(audioTab);
        gb_audio_buffering->setObjectName(QString::fromUtf8("gb_audio_buffering"));
        gb_audio_buffering_layout = new QVBoxLayout(gb_audio_buffering);
        gb_audio_buffering_layout->setObjectName(QString::fromUtf8("gb_audio_buffering_layout"));
        enableBuffering = new QCheckBox(gb_audio_buffering);
        enableBuffering->setObjectName(QString::fromUtf8("enableBuffering"));

        gb_audio_buffering_layout->addWidget(enableBuffering);

        audio_buffer_duration = new QWidget(gb_audio_buffering);
        audio_buffer_duration->setObjectName(QString::fromUtf8("audio_buffer_duration"));
        layout_audio_buffer_duration = new QVBoxLayout(audio_buffer_duration);
        layout_audio_buffer_duration->setObjectName(QString::fromUtf8("layout_audio_buffer_duration"));
        layout_audio_buffer_duration->setContentsMargins(0, 0, 0, 0);
        audioBufferDurationLabel = new QLabel(audio_buffer_duration);
        audioBufferDurationLabel->setObjectName(QString::fromUtf8("audioBufferDurationLabel"));

        layout_audio_buffer_duration->addWidget(audioBufferDurationLabel);

        audioBufferDuration = new QSlider(audio_buffer_duration);
        audioBufferDuration->setObjectName(QString::fromUtf8("audioBufferDuration"));
        audioBufferDuration->setOrientation(Qt::Horizontal);
        audioBufferDuration->setTickPosition(QSlider::TicksBelow);
        audioBufferDuration->setTickInterval(10);

        layout_audio_buffer_duration->addWidget(audioBufferDuration);


        gb_audio_buffering_layout->addWidget(audio_buffer_duration);

        enableTimeStretching = new QCheckBox(gb_audio_buffering);
        enableTimeStretching->setObjectName(QString::fromUtf8("enableTimeStretching"));

        gb_audio_buffering_layout->addWidget(enableTimeStretching);

        time_stretching_threshold = new QWidget(gb_audio_buffering);
        time_stretching_threshold->setObjectName(QString::fromUtf8("time_stretching_threshold"));
        layout_time_stretching_threshold = new QVBoxLayout(time_stretching_threshold);
        layout_time_stretching_threshold->setObjectName(QString::fromUtf8("layout_time_stretching_threshold"));
        layout_time_stretching_threshold->setContentsMargins(0, 0, 0, 0);
        timeStretchingThresholdLabel = new QLabel(time_stretching_threshold);
        timeStretchingThresholdLabel->setObjectName(QString::fromUtf8("timeStretchingThresholdLabel"));

        layout_time_stretching_threshold->addWidget(timeStretchingThresholdLabel);

        timeStretchingThreshold = new QSlider(time_stretching_threshold);
        timeStretchingThreshold->setObjectName(QString::fromUtf8("timeStretchingThreshold"));
        timeStretchingThreshold->setOrientation(Qt::Horizontal);
        timeStretchingThreshold->setTickPosition(QSlider::TicksBelow);
        timeStretchingThreshold->setTickInterval(10);

        layout_time_stretching_threshold->addWidget(timeStretchingThreshold);


        gb_audio_buffering_layout->addWidget(time_stretching_threshold);


        audioTabLayoutTopRight->addWidget(gb_audio_buffering);


        audioTabLayoutTop->addLayout(audioTabLayoutTopRight);

        audioTabLayoutTop->setStretch(0, 1);
        audioTabLayoutTop->setStretch(1, 1);
        audioTabLayoutTop->setStretch(2, 1);

        audioTab_layout->addLayout(audioTabLayoutTop);

        gb_microphone_settings = new QGroupBox(audioTab);
        gb_microphone_settings->setObjectName(QString::fromUtf8("gb_microphone_settings"));
        gb_microphone_settings_layout = new QVBoxLayout(gb_microphone_settings);
        gb_microphone_settings_layout->setObjectName(QString::fromUtf8("gb_microphone_settings_layout"));
        microphoneLayoutTop = new QHBoxLayout();
        microphoneLayoutTop->setObjectName(QString::fromUtf8("microphoneLayoutTop"));
        microphoneLabel = new QLabel(gb_microphone_settings);
        microphoneLabel->setObjectName(QString::fromUtf8("microphoneLabel"));

        microphoneLayoutTop->addWidget(microphoneLabel);

        microphoneBox = new QComboBox(gb_microphone_settings);
        microphoneBox->setObjectName(QString::fromUtf8("microphoneBox"));

        microphoneLayoutTop->addWidget(microphoneBox);

        microphoneSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        microphoneLayoutTop->addItem(microphoneSpacer);


        gb_microphone_settings_layout->addLayout(microphoneLayoutTop);

        microphoneLayoutBottom = new QHBoxLayout();
        microphoneLayoutBottom->setObjectName(QString::fromUtf8("microphoneLayoutBottom"));
        microphoneLayoutLabel1and3 = new QVBoxLayout();
        microphoneLayoutLabel1and3->setObjectName(QString::fromUtf8("microphoneLayoutLabel1and3"));
        microphone1Label = new QLabel(gb_microphone_settings);
        microphone1Label->setObjectName(QString::fromUtf8("microphone1Label"));
        sizePolicy2.setHeightForWidth(microphone1Label->sizePolicy().hasHeightForWidth());
        microphone1Label->setSizePolicy(sizePolicy2);

        microphoneLayoutLabel1and3->addWidget(microphone1Label);

        microphone3Label = new QLabel(gb_microphone_settings);
        microphone3Label->setObjectName(QString::fromUtf8("microphone3Label"));
        sizePolicy2.setHeightForWidth(microphone3Label->sizePolicy().hasHeightForWidth());
        microphone3Label->setSizePolicy(sizePolicy2);

        microphoneLayoutLabel1and3->addWidget(microphone3Label);


        microphoneLayoutBottom->addLayout(microphoneLayoutLabel1and3);

        microphoneLayoutBox1and3 = new QVBoxLayout();
        microphoneLayoutBox1and3->setObjectName(QString::fromUtf8("microphoneLayoutBox1and3"));
        microphone1Box = new QComboBox(gb_microphone_settings);
        microphone1Box->setObjectName(QString::fromUtf8("microphone1Box"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(microphone1Box->sizePolicy().hasHeightForWidth());
        microphone1Box->setSizePolicy(sizePolicy3);

        microphoneLayoutBox1and3->addWidget(microphone1Box);

        microphone3Box = new QComboBox(gb_microphone_settings);
        microphone3Box->setObjectName(QString::fromUtf8("microphone3Box"));
        sizePolicy3.setHeightForWidth(microphone3Box->sizePolicy().hasHeightForWidth());
        microphone3Box->setSizePolicy(sizePolicy3);

        microphoneLayoutBox1and3->addWidget(microphone3Box);


        microphoneLayoutBottom->addLayout(microphoneLayoutBox1and3);

        microphoneLayoutLabel2and4 = new QVBoxLayout();
        microphoneLayoutLabel2and4->setObjectName(QString::fromUtf8("microphoneLayoutLabel2and4"));
        microphone2Label = new QLabel(gb_microphone_settings);
        microphone2Label->setObjectName(QString::fromUtf8("microphone2Label"));
        sizePolicy2.setHeightForWidth(microphone2Label->sizePolicy().hasHeightForWidth());
        microphone2Label->setSizePolicy(sizePolicy2);

        microphoneLayoutLabel2and4->addWidget(microphone2Label);

        microphone4Label = new QLabel(gb_microphone_settings);
        microphone4Label->setObjectName(QString::fromUtf8("microphone4Label"));
        sizePolicy2.setHeightForWidth(microphone4Label->sizePolicy().hasHeightForWidth());
        microphone4Label->setSizePolicy(sizePolicy2);

        microphoneLayoutLabel2and4->addWidget(microphone4Label);


        microphoneLayoutBottom->addLayout(microphoneLayoutLabel2and4);

        microphoneLayoutBox2and4 = new QVBoxLayout();
        microphoneLayoutBox2and4->setObjectName(QString::fromUtf8("microphoneLayoutBox2and4"));
        microphone2Box = new QComboBox(gb_microphone_settings);
        microphone2Box->setObjectName(QString::fromUtf8("microphone2Box"));
        sizePolicy3.setHeightForWidth(microphone2Box->sizePolicy().hasHeightForWidth());
        microphone2Box->setSizePolicy(sizePolicy3);

        microphoneLayoutBox2and4->addWidget(microphone2Box);

        microphone4Box = new QComboBox(gb_microphone_settings);
        microphone4Box->setObjectName(QString::fromUtf8("microphone4Box"));
        sizePolicy3.setHeightForWidth(microphone4Box->sizePolicy().hasHeightForWidth());
        microphone4Box->setSizePolicy(sizePolicy3);

        microphoneLayoutBox2and4->addWidget(microphone4Box);


        microphoneLayoutBottom->addLayout(microphoneLayoutBox2and4);


        gb_microphone_settings_layout->addLayout(microphoneLayoutBottom);


        audioTab_layout->addWidget(gb_microphone_settings);

        audioTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        audioTab_layout->addItem(audioTabSpacer);

        gb_description_audio = new QGroupBox(audioTab);
        gb_description_audio->setObjectName(QString::fromUtf8("gb_description_audio"));
        gb_description_audio_layout = new QVBoxLayout(gb_description_audio);
        gb_description_audio_layout->setObjectName(QString::fromUtf8("gb_description_audio_layout"));
        description_audio = new QLabel(gb_description_audio);
        description_audio->setObjectName(QString::fromUtf8("description_audio"));
        description_audio->setTextFormat(Qt::PlainText);
        description_audio->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_audio->setWordWrap(true);

        gb_description_audio_layout->addWidget(description_audio);


        audioTab_layout->addWidget(gb_description_audio);

        audioTab_layout->setStretch(2, 1);
        tab_widget_settings->addTab(audioTab, QString());
        inputTab = new QWidget();
        inputTab->setObjectName(QString::fromUtf8("inputTab"));
        inputTab_layout = new QVBoxLayout(inputTab);
        inputTab_layout->setObjectName(QString::fromUtf8("inputTab_layout"));
        ioGridLayout = new QGridLayout();
        ioGridLayout->setObjectName(QString::fromUtf8("ioGridLayout"));
        gb_turntable_emulated = new QGroupBox(inputTab);
        gb_turntable_emulated->setObjectName(QString::fromUtf8("gb_turntable_emulated"));
        gb_turntable_emulated_layout = new QVBoxLayout(gb_turntable_emulated);
        gb_turntable_emulated_layout->setObjectName(QString::fromUtf8("gb_turntable_emulated_layout"));
        turntableBox = new QComboBox(gb_turntable_emulated);
        turntableBox->setObjectName(QString::fromUtf8("turntableBox"));

        gb_turntable_emulated_layout->addWidget(turntableBox);


        ioGridLayout->addWidget(gb_turntable_emulated, 1, 2, 1, 1);

        gb_mouse_handler = new QGroupBox(inputTab);
        gb_mouse_handler->setObjectName(QString::fromUtf8("gb_mouse_handler"));
        gb_mouse_handler_layout = new QVBoxLayout(gb_mouse_handler);
        gb_mouse_handler_layout->setObjectName(QString::fromUtf8("gb_mouse_handler_layout"));
        mouseHandlerBox = new QComboBox(gb_mouse_handler);
        mouseHandlerBox->setObjectName(QString::fromUtf8("mouseHandlerBox"));

        gb_mouse_handler_layout->addWidget(mouseHandlerBox);


        ioGridLayout->addWidget(gb_mouse_handler, 1, 0, 1, 1);

        gb_camera_type = new QGroupBox(inputTab);
        gb_camera_type->setObjectName(QString::fromUtf8("gb_camera_type"));
        gb_camera_type_layout = new QVBoxLayout(gb_camera_type);
        gb_camera_type_layout->setObjectName(QString::fromUtf8("gb_camera_type_layout"));
        cameraTypeBox = new QComboBox(gb_camera_type);
        cameraTypeBox->setObjectName(QString::fromUtf8("cameraTypeBox"));

        gb_camera_type_layout->addWidget(cameraTypeBox);


        ioGridLayout->addWidget(gb_camera_type, 0, 1, 1, 1);

        gb_move_handler = new QGroupBox(inputTab);
        gb_move_handler->setObjectName(QString::fromUtf8("gb_move_handler"));
        gb_move_handler_layout = new QVBoxLayout(gb_move_handler);
        gb_move_handler_layout->setObjectName(QString::fromUtf8("gb_move_handler_layout"));
        moveBox = new QComboBox(gb_move_handler);
        moveBox->setObjectName(QString::fromUtf8("moveBox"));

        gb_move_handler_layout->addWidget(moveBox);


        ioGridLayout->addWidget(gb_move_handler, 2, 0, 1, 1);

        gb_keyboard_handler = new QGroupBox(inputTab);
        gb_keyboard_handler->setObjectName(QString::fromUtf8("gb_keyboard_handler"));
        gb_keyboard_handler_layout = new QVBoxLayout(gb_keyboard_handler);
        gb_keyboard_handler_layout->setObjectName(QString::fromUtf8("gb_keyboard_handler_layout"));
        keyboardHandlerBox = new QComboBox(gb_keyboard_handler);
        keyboardHandlerBox->setObjectName(QString::fromUtf8("keyboardHandlerBox"));

        gb_keyboard_handler_layout->addWidget(keyboardHandlerBox);


        ioGridLayout->addWidget(gb_keyboard_handler, 0, 0, 1, 1);

        gb_buzz_emulated = new QGroupBox(inputTab);
        gb_buzz_emulated->setObjectName(QString::fromUtf8("gb_buzz_emulated"));
        gb_buzz_emulated_layout = new QVBoxLayout(gb_buzz_emulated);
        gb_buzz_emulated_layout->setObjectName(QString::fromUtf8("gb_buzz_emulated_layout"));
        buzzBox = new QComboBox(gb_buzz_emulated);
        buzzBox->setObjectName(QString::fromUtf8("buzzBox"));

        gb_buzz_emulated_layout->addWidget(buzzBox);


        ioGridLayout->addWidget(gb_buzz_emulated, 0, 2, 1, 1);

        gb_camera_flip = new QGroupBox(inputTab);
        gb_camera_flip->setObjectName(QString::fromUtf8("gb_camera_flip"));
        gb_camera_flip_layout = new QVBoxLayout(gb_camera_flip);
        gb_camera_flip_layout->setObjectName(QString::fromUtf8("gb_camera_flip_layout"));
        cameraFlipBox = new QComboBox(gb_camera_flip);
        cameraFlipBox->setObjectName(QString::fromUtf8("cameraFlipBox"));

        gb_camera_flip_layout->addWidget(cameraFlipBox);


        ioGridLayout->addWidget(gb_camera_flip, 3, 1, 1, 1);

        gb_camera_setting = new QGroupBox(inputTab);
        gb_camera_setting->setObjectName(QString::fromUtf8("gb_camera_setting"));
        gb_camera_setting_layout = new QVBoxLayout(gb_camera_setting);
        gb_camera_setting_layout->setObjectName(QString::fromUtf8("gb_camera_setting_layout"));
        cameraBox = new QComboBox(gb_camera_setting);
        cameraBox->setObjectName(QString::fromUtf8("cameraBox"));

        gb_camera_setting_layout->addWidget(cameraBox);


        ioGridLayout->addWidget(gb_camera_setting, 1, 1, 1, 1);

        gb_ghltar_emulated = new QGroupBox(inputTab);
        gb_ghltar_emulated->setObjectName(QString::fromUtf8("gb_ghltar_emulated"));
        gb_ghltar_emulated_layout = new QVBoxLayout(gb_ghltar_emulated);
        gb_ghltar_emulated_layout->setObjectName(QString::fromUtf8("gb_ghltar_emulated_layout"));
        ghltarBox = new QComboBox(gb_ghltar_emulated);
        ghltarBox->setObjectName(QString::fromUtf8("ghltarBox"));

        gb_ghltar_emulated_layout->addWidget(ghltarBox);


        ioGridLayout->addWidget(gb_ghltar_emulated, 2, 2, 1, 1);

        gb_camera_id = new QGroupBox(inputTab);
        gb_camera_id->setObjectName(QString::fromUtf8("gb_camera_id"));
        camera_id_layout = new QVBoxLayout(gb_camera_id);
        camera_id_layout->setObjectName(QString::fromUtf8("camera_id_layout"));
        cameraIdBox = new QComboBox(gb_camera_id);
        cameraIdBox->setObjectName(QString::fromUtf8("cameraIdBox"));

        camera_id_layout->addWidget(cameraIdBox);


        ioGridLayout->addWidget(gb_camera_id, 2, 1, 1, 1);

        gb_pad_mode = new QGroupBox(inputTab);
        gb_pad_mode->setObjectName(QString::fromUtf8("gb_pad_mode"));
        gb_pad_mode_layout = new QVBoxLayout(gb_pad_mode);
        gb_pad_mode_layout->setObjectName(QString::fromUtf8("gb_pad_mode_layout"));
        padModeBox = new QComboBox(gb_pad_mode);
        padModeBox->setObjectName(QString::fromUtf8("padModeBox"));

        gb_pad_mode_layout->addWidget(padModeBox);


        ioGridLayout->addWidget(gb_pad_mode, 3, 0, 1, 1);


        inputTab_layout->addLayout(ioGridLayout);

        inputTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        inputTab_layout->addItem(inputTabSpacer);

        gb_description_io = new QGroupBox(inputTab);
        gb_description_io->setObjectName(QString::fromUtf8("gb_description_io"));
        gb_description_io_layout = new QVBoxLayout(gb_description_io);
        gb_description_io_layout->setObjectName(QString::fromUtf8("gb_description_io_layout"));
        description_io = new QLabel(gb_description_io);
        description_io->setObjectName(QString::fromUtf8("description_io"));
        description_io->setTextFormat(Qt::PlainText);
        description_io->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_io->setWordWrap(true);

        gb_description_io_layout->addWidget(description_io);


        inputTab_layout->addWidget(gb_description_io);

        tab_widget_settings->addTab(inputTab, QString());
        systemTab = new QWidget();
        systemTab->setObjectName(QString::fromUtf8("systemTab"));
        systemTab_layout = new QVBoxLayout(systemTab);
        systemTab_layout->setObjectName(QString::fromUtf8("systemTab_layout"));
        systemTabLayout1 = new QHBoxLayout();
        systemTabLayout1->setObjectName(QString::fromUtf8("systemTabLayout1"));
        gb_sysLang = new QGroupBox(systemTab);
        gb_sysLang->setObjectName(QString::fromUtf8("gb_sysLang"));
        gb_sysLang_layout = new QVBoxLayout(gb_sysLang);
        gb_sysLang_layout->setObjectName(QString::fromUtf8("gb_sysLang_layout"));
        sysLangBox = new QComboBox(gb_sysLang);
        sysLangBox->setObjectName(QString::fromUtf8("sysLangBox"));

        gb_sysLang_layout->addWidget(sysLangBox);


        systemTabLayout1->addWidget(gb_sysLang);

        gb_keyboardType = new QGroupBox(systemTab);
        gb_keyboardType->setObjectName(QString::fromUtf8("gb_keyboardType"));
        verticalLayout_keyboardType = new QVBoxLayout(gb_keyboardType);
        verticalLayout_keyboardType->setObjectName(QString::fromUtf8("verticalLayout_keyboardType"));
        keyboardType = new QComboBox(gb_keyboardType);
        keyboardType->setObjectName(QString::fromUtf8("keyboardType"));

        verticalLayout_keyboardType->addWidget(keyboardType);


        systemTabLayout1->addWidget(gb_keyboardType);

        gb_homebrew = new QGroupBox(systemTab);
        gb_homebrew->setObjectName(QString::fromUtf8("gb_homebrew"));
        gb_homebrew_layout = new QVBoxLayout(gb_homebrew);
        gb_homebrew_layout->setObjectName(QString::fromUtf8("gb_homebrew_layout"));
        enableHostRoot = new QCheckBox(gb_homebrew);
        enableHostRoot->setObjectName(QString::fromUtf8("enableHostRoot"));

        gb_homebrew_layout->addWidget(enableHostRoot);


        systemTabLayout1->addWidget(gb_homebrew);

        systemTabLayout1->setStretch(0, 1);
        systemTabLayout1->setStretch(1, 1);
        systemTabLayout1->setStretch(2, 1);

        systemTab_layout->addLayout(systemTabLayout1);

        systemTabLayout2 = new QHBoxLayout();
        systemTabLayout2->setObjectName(QString::fromUtf8("systemTabLayout2"));
        gb_console_region = new QGroupBox(systemTab);
        gb_console_region->setObjectName(QString::fromUtf8("gb_console_region"));
        gb_console_region_layout = new QVBoxLayout(gb_console_region);
        gb_console_region_layout->setObjectName(QString::fromUtf8("gb_console_region_layout"));
        console_region = new QComboBox(gb_console_region);
        console_region->setObjectName(QString::fromUtf8("console_region"));

        gb_console_region_layout->addWidget(console_region);


        systemTabLayout2->addWidget(gb_console_region);

        gb_console_time = new QGroupBox(systemTab);
        gb_console_time->setObjectName(QString::fromUtf8("gb_console_time"));
        verticalLayout_2 = new QVBoxLayout(gb_console_time);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        console_time_edit = new QDateTimeEdit(gb_console_time);
        console_time_edit->setObjectName(QString::fromUtf8("console_time_edit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(10);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(console_time_edit->sizePolicy().hasHeightForWidth());
        console_time_edit->setSizePolicy(sizePolicy4);
        console_time_edit->setLayoutDirection(Qt::LeftToRight);
        console_time_edit->setWrapping(false);
        console_time_edit->setFrame(true);
        console_time_edit->setAlignment(Qt::AlignCenter);
        console_time_edit->setReadOnly(false);
        console_time_edit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        console_time_edit->setAccelerated(true);
        console_time_edit->setProperty("showGroupSeparator", QVariant(false));
        console_time_edit->setCalendarPopup(true);

        horizontalLayout->addWidget(console_time_edit);

        console_time_reset = new QPushButton(gb_console_time);
        console_time_reset->setObjectName(QString::fromUtf8("console_time_reset"));

        horizontalLayout->addWidget(console_time_reset);


        verticalLayout_2->addLayout(horizontalLayout);


        systemTabLayout2->addWidget(gb_console_time);

        systemTabSpacerWidget2 = new QWidget(systemTab);
        systemTabSpacerWidget2->setObjectName(QString::fromUtf8("systemTabSpacerWidget2"));

        systemTabLayout2->addWidget(systemTabSpacerWidget2);

        systemTabLayout2->setStretch(0, 1);
        systemTabLayout2->setStretch(1, 1);
        systemTabLayout2->setStretch(2, 1);

        systemTab_layout->addLayout(systemTabLayout2);

        systemTabLayout3 = new QHBoxLayout();
        systemTabLayout3->setObjectName(QString::fromUtf8("systemTabLayout3"));
        gb_enterButtonAssignment = new QGroupBox(systemTab);
        gb_enterButtonAssignment->setObjectName(QString::fromUtf8("gb_enterButtonAssignment"));
        gb_enterButtonAssignment_layout = new QVBoxLayout(gb_enterButtonAssignment);
        gb_enterButtonAssignment_layout->setObjectName(QString::fromUtf8("gb_enterButtonAssignment_layout"));
        enterButtonAssignCircle = new QRadioButton(gb_enterButtonAssignment);
        enterButtonAssignCircle->setObjectName(QString::fromUtf8("enterButtonAssignCircle"));
        enterButtonAssignCircle->setText(QString::fromUtf8("Enter with the Circle button"));

        gb_enterButtonAssignment_layout->addWidget(enterButtonAssignCircle);

        enterButtonAssignCross = new QRadioButton(gb_enterButtonAssignment);
        enterButtonAssignCross->setObjectName(QString::fromUtf8("enterButtonAssignCross"));
        enterButtonAssignCross->setText(QString::fromUtf8("Enter with the Cross button"));

        gb_enterButtonAssignment_layout->addWidget(enterButtonAssignCross);


        systemTabLayout3->addWidget(gb_enterButtonAssignment);

        systemTabSpacerWidget3 = new QWidget(systemTab);
        systemTabSpacerWidget3->setObjectName(QString::fromUtf8("systemTabSpacerWidget3"));

        systemTabLayout3->addWidget(systemTabSpacerWidget3);

        systemTabSpacerWidget4 = new QWidget(systemTab);
        systemTabSpacerWidget4->setObjectName(QString::fromUtf8("systemTabSpacerWidget4"));

        systemTabLayout3->addWidget(systemTabSpacerWidget4);

        systemTabLayout3->setStretch(0, 1);
        systemTabLayout3->setStretch(1, 1);
        systemTabLayout3->setStretch(2, 1);

        systemTab_layout->addLayout(systemTabLayout3);

        systemTabLayout4 = new QHBoxLayout();
        systemTabLayout4->setObjectName(QString::fromUtf8("systemTabLayout4"));
        gb_DiskCacheClearing = new QGroupBox(systemTab);
        gb_DiskCacheClearing->setObjectName(QString::fromUtf8("gb_DiskCacheClearing"));
        gb_DiskCacheClearing_layout = new QVBoxLayout(gb_DiskCacheClearing);
        gb_DiskCacheClearing_layout->setObjectName(QString::fromUtf8("gb_DiskCacheClearing_layout"));
        enableCacheClearing = new QCheckBox(gb_DiskCacheClearing);
        enableCacheClearing->setObjectName(QString::fromUtf8("enableCacheClearing"));

        gb_DiskCacheClearing_layout->addWidget(enableCacheClearing);

        maximumCacheSizeLabel = new QLabel(gb_DiskCacheClearing);
        maximumCacheSizeLabel->setObjectName(QString::fromUtf8("maximumCacheSizeLabel"));

        gb_DiskCacheClearing_layout->addWidget(maximumCacheSizeLabel);

        maximumCacheSize = new QSlider(gb_DiskCacheClearing);
        maximumCacheSize->setObjectName(QString::fromUtf8("maximumCacheSize"));
        maximumCacheSize->setPageStep(512);
        maximumCacheSize->setOrientation(Qt::Horizontal);
        maximumCacheSize->setTickPosition(QSlider::TicksBelow);
        maximumCacheSize->setTickInterval(1024);

        gb_DiskCacheClearing_layout->addWidget(maximumCacheSize);


        systemTabLayout4->addWidget(gb_DiskCacheClearing);

        systemTabSpacerWidget5 = new QWidget(systemTab);
        systemTabSpacerWidget5->setObjectName(QString::fromUtf8("systemTabSpacerWidget5"));

        systemTabLayout4->addWidget(systemTabSpacerWidget5);

        systemTabSpacerWidget6 = new QWidget(systemTab);
        systemTabSpacerWidget6->setObjectName(QString::fromUtf8("systemTabSpacerWidget6"));

        systemTabLayout4->addWidget(systemTabSpacerWidget6);

        systemTabLayout4->setStretch(0, 1);
        systemTabLayout4->setStretch(1, 1);
        systemTabLayout4->setStretch(2, 1);

        systemTab_layout->addLayout(systemTabLayout4);

        systemTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        systemTab_layout->addItem(systemTabSpacer);

        gb_description_system = new QGroupBox(systemTab);
        gb_description_system->setObjectName(QString::fromUtf8("gb_description_system"));
        gb_description_system_layout = new QHBoxLayout(gb_description_system);
        gb_description_system_layout->setObjectName(QString::fromUtf8("gb_description_system_layout"));
        description_system = new QLabel(gb_description_system);
        description_system->setObjectName(QString::fromUtf8("description_system"));
        description_system->setTextFormat(Qt::PlainText);
        description_system->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_system->setWordWrap(true);

        gb_description_system_layout->addWidget(description_system);


        systemTab_layout->addWidget(gb_description_system);

        systemTab_layout->setStretch(4, 1);
        tab_widget_settings->addTab(systemTab, QString());
        networkTab = new QWidget();
        networkTab->setObjectName(QString::fromUtf8("networkTab"));
        networkTab_layout = new QVBoxLayout(networkTab);
        networkTab_layout->setObjectName(QString::fromUtf8("networkTab_layout"));
        networkTabLayout = new QHBoxLayout();
        networkTabLayout->setObjectName(QString::fromUtf8("networkTabLayout"));
        gb_network_status = new QGroupBox(networkTab);
        gb_network_status->setObjectName(QString::fromUtf8("gb_network_status"));
        gb_network_status_layout = new QVBoxLayout(gb_network_status);
        gb_network_status_layout->setObjectName(QString::fromUtf8("gb_network_status_layout"));
        gb_netStatusBox = new QGroupBox(gb_network_status);
        gb_netStatusBox->setObjectName(QString::fromUtf8("gb_netStatusBox"));
        gb_netStatusBox_layout = new QVBoxLayout(gb_netStatusBox);
        gb_netStatusBox_layout->setObjectName(QString::fromUtf8("gb_netStatusBox_layout"));
        netStatusBox = new QComboBox(gb_netStatusBox);
        netStatusBox->setObjectName(QString::fromUtf8("netStatusBox"));

        gb_netStatusBox_layout->addWidget(netStatusBox);


        gb_network_status_layout->addWidget(gb_netStatusBox);

        gb_edit_dns = new QGroupBox(gb_network_status);
        gb_edit_dns->setObjectName(QString::fromUtf8("gb_edit_dns"));
        gb_edit_dns_layout = new QVBoxLayout(gb_edit_dns);
        gb_edit_dns_layout->setObjectName(QString::fromUtf8("gb_edit_dns_layout"));
        edit_dns = new QLineEdit(gb_edit_dns);
        edit_dns->setObjectName(QString::fromUtf8("edit_dns"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(edit_dns->sizePolicy().hasHeightForWidth());
        edit_dns->setSizePolicy(sizePolicy5);

        gb_edit_dns_layout->addWidget(edit_dns);


        gb_network_status_layout->addWidget(gb_edit_dns);

        gb_edit_swaps = new QGroupBox(gb_network_status);
        gb_edit_swaps->setObjectName(QString::fromUtf8("gb_edit_swaps"));
        gb_edit_swaps_layout = new QVBoxLayout(gb_edit_swaps);
        gb_edit_swaps_layout->setObjectName(QString::fromUtf8("gb_edit_swaps_layout"));
        edit_swaps = new QLineEdit(gb_edit_swaps);
        edit_swaps->setObjectName(QString::fromUtf8("edit_swaps"));
        sizePolicy5.setHeightForWidth(edit_swaps->sizePolicy().hasHeightForWidth());
        edit_swaps->setSizePolicy(sizePolicy5);

        gb_edit_swaps_layout->addWidget(edit_swaps);


        gb_network_status_layout->addWidget(gb_edit_swaps);

        networkTabSpacerLeft = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_network_status_layout->addItem(networkTabSpacerLeft);


        networkTabLayout->addWidget(gb_network_status);

        gb_psn_config = new QGroupBox(networkTab);
        gb_psn_config->setObjectName(QString::fromUtf8("gb_psn_config"));
        gb_psn_config_layout = new QVBoxLayout(gb_psn_config);
        gb_psn_config_layout->setObjectName(QString::fromUtf8("gb_psn_config_layout"));
        gb_psnStatusBox = new QGroupBox(gb_psn_config);
        gb_psnStatusBox->setObjectName(QString::fromUtf8("gb_psnStatusBox"));
        gb_psnStatusBox_layout = new QVBoxLayout(gb_psnStatusBox);
        gb_psnStatusBox_layout->setObjectName(QString::fromUtf8("gb_psnStatusBox_layout"));
        psnStatusBox = new QComboBox(gb_psnStatusBox);
        psnStatusBox->setObjectName(QString::fromUtf8("psnStatusBox"));

        gb_psnStatusBox_layout->addWidget(psnStatusBox);


        gb_psn_config_layout->addWidget(gb_psnStatusBox);

        networkTabSpacerRight = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_psn_config_layout->addItem(networkTabSpacerRight);


        networkTabLayout->addWidget(gb_psn_config);


        networkTab_layout->addLayout(networkTabLayout);

        networkTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        networkTab_layout->addItem(networkTabSpacer);

        gb_description_network = new QGroupBox(networkTab);
        gb_description_network->setObjectName(QString::fromUtf8("gb_description_network"));
        gb_description_network_layout = new QVBoxLayout(gb_description_network);
        gb_description_network_layout->setObjectName(QString::fromUtf8("gb_description_network_layout"));
        description_network = new QLabel(gb_description_network);
        description_network->setObjectName(QString::fromUtf8("description_network"));
        description_network->setTextFormat(Qt::PlainText);
        description_network->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_network->setWordWrap(true);

        gb_description_network_layout->addWidget(description_network);


        networkTab_layout->addWidget(gb_description_network);

        networkTab_layout->setStretch(1, 1);
        tab_widget_settings->addTab(networkTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QString::fromUtf8("advancedTab"));
        advancedTab_layout = new QVBoxLayout(advancedTab);
        advancedTab_layout->setObjectName(QString::fromUtf8("advancedTab_layout"));
        advancedTabLayout = new QHBoxLayout();
        advancedTabLayout->setObjectName(QString::fromUtf8("advancedTabLayout"));
        advancedTabLayoutLeft = new QVBoxLayout();
        advancedTabLayoutLeft->setObjectName(QString::fromUtf8("advancedTabLayoutLeft"));
        gb_advanced_core = new QGroupBox(advancedTab);
        gb_advanced_core->setObjectName(QString::fromUtf8("gb_advanced_core"));
        sizePolicy1.setHeightForWidth(gb_advanced_core->sizePolicy().hasHeightForWidth());
        gb_advanced_core->setSizePolicy(sizePolicy1);
        gb_advanced_core_layout = new QVBoxLayout(gb_advanced_core);
        gb_advanced_core_layout->setObjectName(QString::fromUtf8("gb_advanced_core_layout"));
        debugConsoleMode = new QCheckBox(gb_advanced_core);
        debugConsoleMode->setObjectName(QString::fromUtf8("debugConsoleMode"));

        gb_advanced_core_layout->addWidget(debugConsoleMode);

        accurateDFMA = new QCheckBox(gb_advanced_core);
        accurateDFMA->setObjectName(QString::fromUtf8("accurateDFMA"));

        gb_advanced_core_layout->addWidget(accurateDFMA);

        accurateRSXAccess = new QCheckBox(gb_advanced_core);
        accurateRSXAccess->setObjectName(QString::fromUtf8("accurateRSXAccess"));

        gb_advanced_core_layout->addWidget(accurateRSXAccess);

        ppuNJFixup = new QCheckBox(gb_advanced_core);
        ppuNJFixup->setObjectName(QString::fromUtf8("ppuNJFixup"));

        gb_advanced_core_layout->addWidget(ppuNJFixup);

        accuratePPUSAT = new QCheckBox(gb_advanced_core);
        accuratePPUSAT->setObjectName(QString::fromUtf8("accuratePPUSAT"));

        gb_advanced_core_layout->addWidget(accuratePPUSAT);

        accuratePPUNJ = new QCheckBox(gb_advanced_core);
        accuratePPUNJ->setObjectName(QString::fromUtf8("accuratePPUNJ"));

        gb_advanced_core_layout->addWidget(accuratePPUNJ);

        fixupPPUVNAN = new QCheckBox(gb_advanced_core);
        fixupPPUVNAN->setObjectName(QString::fromUtf8("fixupPPUVNAN"));

        gb_advanced_core_layout->addWidget(fixupPPUVNAN);

        accuratePPUVNAN = new QCheckBox(gb_advanced_core);
        accuratePPUVNAN->setObjectName(QString::fromUtf8("accuratePPUVNAN"));

        gb_advanced_core_layout->addWidget(accuratePPUVNAN);

        accuratePPUFPCC = new QCheckBox(gb_advanced_core);
        accuratePPUFPCC->setObjectName(QString::fromUtf8("accuratePPUFPCC"));

        gb_advanced_core_layout->addWidget(accuratePPUFPCC);

        ppuPrecompilation = new QCheckBox(gb_advanced_core);
        ppuPrecompilation->setObjectName(QString::fromUtf8("ppuPrecompilation"));

        gb_advanced_core_layout->addWidget(ppuPrecompilation);

        mfcDelayCommand = new QCheckBox(gb_advanced_core);
        mfcDelayCommand->setObjectName(QString::fromUtf8("mfcDelayCommand"));

        gb_advanced_core_layout->addWidget(mfcDelayCommand);

        silenceAllLogs = new QCheckBox(gb_advanced_core);
        silenceAllLogs->setObjectName(QString::fromUtf8("silenceAllLogs"));

        gb_advanced_core_layout->addWidget(silenceAllLogs);


        advancedTabLayoutLeft->addWidget(gb_advanced_core);

        gb_sleep_timers_accuracy = new QGroupBox(advancedTab);
        gb_sleep_timers_accuracy->setObjectName(QString::fromUtf8("gb_sleep_timers_accuracy"));
        sizePolicy1.setHeightForWidth(gb_sleep_timers_accuracy->sizePolicy().hasHeightForWidth());
        gb_sleep_timers_accuracy->setSizePolicy(sizePolicy1);
        gb_sleep_timers_accuracy_layout = new QVBoxLayout(gb_sleep_timers_accuracy);
        gb_sleep_timers_accuracy_layout->setObjectName(QString::fromUtf8("gb_sleep_timers_accuracy_layout"));
        sleepTimersAccuracy = new QComboBox(gb_sleep_timers_accuracy);
        sleepTimersAccuracy->setObjectName(QString::fromUtf8("sleepTimersAccuracy"));

        gb_sleep_timers_accuracy_layout->addWidget(sleepTimersAccuracy);


        advancedTabLayoutLeft->addWidget(gb_sleep_timers_accuracy);

        gb_max_spurs_threads = new QGroupBox(advancedTab);
        gb_max_spurs_threads->setObjectName(QString::fromUtf8("gb_max_spurs_threads"));
        sizePolicy1.setHeightForWidth(gb_max_spurs_threads->sizePolicy().hasHeightForWidth());
        gb_max_spurs_threads->setSizePolicy(sizePolicy1);
        gb_max_spurs_threads_layout = new QVBoxLayout(gb_max_spurs_threads);
        gb_max_spurs_threads_layout->setObjectName(QString::fromUtf8("gb_max_spurs_threads_layout"));
        maxSPURSThreads = new QComboBox(gb_max_spurs_threads);
        maxSPURSThreads->setObjectName(QString::fromUtf8("maxSPURSThreads"));

        gb_max_spurs_threads_layout->addWidget(maxSPURSThreads);


        advancedTabLayoutLeft->addWidget(gb_max_spurs_threads);

        advancedTabSpacerLeft = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        advancedTabLayoutLeft->addItem(advancedTabSpacerLeft);


        advancedTabLayout->addLayout(advancedTabLayoutLeft);

        advancedTabLayoutMiddle = new QVBoxLayout();
        advancedTabLayoutMiddle->setObjectName(QString::fromUtf8("advancedTabLayoutMiddle"));
        gb_libs = new QGroupBox(advancedTab);
        gb_libs->setObjectName(QString::fromUtf8("gb_libs"));
        gb_libs_layout = new QVBoxLayout(gb_libs);
        gb_libs_layout->setObjectName(QString::fromUtf8("gb_libs_layout"));
        hleList = new QListWidget(gb_libs);
        hleList->setObjectName(QString::fromUtf8("hleList"));
        sizePolicy.setHeightForWidth(hleList->sizePolicy().hasHeightForWidth());
        hleList->setSizePolicy(sizePolicy);
        hleList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        hleList->setViewMode(QListView::ListMode);

        gb_libs_layout->addWidget(hleList);

        lleList = new QListWidget(gb_libs);
        lleList->setObjectName(QString::fromUtf8("lleList"));
        sizePolicy.setHeightForWidth(lleList->sizePolicy().hasHeightForWidth());
        lleList->setSizePolicy(sizePolicy);
        lleList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lleList->setViewMode(QListView::ListMode);

        gb_libs_layout->addWidget(lleList);

        gb_lleLibs_layout = new QHBoxLayout();
        gb_lleLibs_layout->setSpacing(6);
        gb_lleLibs_layout->setObjectName(QString::fromUtf8("gb_lleLibs_layout"));
        gb_lleLibs_layout->setSizeConstraint(QLayout::SetNoConstraint);
        searchBox = new QLineEdit(gb_libs);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        gb_lleLibs_layout->addWidget(searchBox);

        resetLleList = new QPushButton(gb_libs);
        resetLleList->setObjectName(QString::fromUtf8("resetLleList"));

        gb_lleLibs_layout->addWidget(resetLleList);

        gb_lleLibs_layout->setStretch(0, 1);

        gb_libs_layout->addLayout(gb_lleLibs_layout);


        advancedTabLayoutMiddle->addWidget(gb_libs);


        advancedTabLayout->addLayout(advancedTabLayoutMiddle);

        advancedTabLayoutRight = new QVBoxLayout();
        advancedTabLayoutRight->setObjectName(QString::fromUtf8("advancedTabLayoutRight"));
        gb_advanced_gpu = new QGroupBox(advancedTab);
        gb_advanced_gpu->setObjectName(QString::fromUtf8("gb_advanced_gpu"));
        sizePolicy1.setHeightForWidth(gb_advanced_gpu->sizePolicy().hasHeightForWidth());
        gb_advanced_gpu->setSizePolicy(sizePolicy1);
        gb_advanced_gpu_layout = new QVBoxLayout(gb_advanced_gpu);
        gb_advanced_gpu_layout->setObjectName(QString::fromUtf8("gb_advanced_gpu_layout"));
        readDepth = new QCheckBox(gb_advanced_gpu);
        readDepth->setObjectName(QString::fromUtf8("readDepth"));

        gb_advanced_gpu_layout->addWidget(readDepth);

        dumpDepth = new QCheckBox(gb_advanced_gpu);
        dumpDepth->setObjectName(QString::fromUtf8("dumpDepth"));

        gb_advanced_gpu_layout->addWidget(dumpDepth);

        readColor = new QCheckBox(gb_advanced_gpu);
        readColor->setObjectName(QString::fromUtf8("readColor"));

        gb_advanced_gpu_layout->addWidget(readColor);

        disableOnDiskShaderCache = new QCheckBox(gb_advanced_gpu);
        disableOnDiskShaderCache->setObjectName(QString::fromUtf8("disableOnDiskShaderCache"));

        gb_advanced_gpu_layout->addWidget(disableOnDiskShaderCache);

        DisableNativefp16 = new QCheckBox(gb_advanced_gpu);
        DisableNativefp16->setObjectName(QString::fromUtf8("DisableNativefp16"));

        gb_advanced_gpu_layout->addWidget(DisableNativefp16);


        advancedTabLayoutRight->addWidget(gb_advanced_gpu);

        gb_vulkansched = new QGroupBox(advancedTab);
        gb_vulkansched->setObjectName(QString::fromUtf8("gb_vulkansched"));
        sizePolicy1.setHeightForWidth(gb_vulkansched->sizePolicy().hasHeightForWidth());
        gb_vulkansched->setSizePolicy(sizePolicy1);
        gb_vksched_layout = new QVBoxLayout(gb_vulkansched);
        gb_vksched_layout->setObjectName(QString::fromUtf8("gb_vksched_layout"));
        vulkansched = new QComboBox(gb_vulkansched);
        vulkansched->setObjectName(QString::fromUtf8("vulkansched"));

        gb_vksched_layout->addWidget(vulkansched);


        advancedTabLayoutRight->addWidget(gb_vulkansched);

        gb_wakeupDelay = new QGroupBox(advancedTab);
        gb_wakeupDelay->setObjectName(QString::fromUtf8("gb_wakeupDelay"));
        sizePolicy1.setHeightForWidth(gb_wakeupDelay->sizePolicy().hasHeightForWidth());
        gb_wakeupDelay->setSizePolicy(sizePolicy1);
        gb_wakeupDelay_layout = new QVBoxLayout(gb_wakeupDelay);
        gb_wakeupDelay_layout->setObjectName(QString::fromUtf8("gb_wakeupDelay_layout"));
        wakeupDelay = new QSlider(gb_wakeupDelay);
        wakeupDelay->setObjectName(QString::fromUtf8("wakeupDelay"));
        wakeupDelay->setOrientation(Qt::Horizontal);

        gb_wakeupDelay_layout->addWidget(wakeupDelay);

        wakeupDelayLayout = new QHBoxLayout();
        wakeupDelayLayout->setObjectName(QString::fromUtf8("wakeupDelayLayout"));
        wakeupText = new QLabel(gb_wakeupDelay);
        wakeupText->setObjectName(QString::fromUtf8("wakeupText"));
        wakeupText->setAlignment(Qt::AlignCenter);

        wakeupDelayLayout->addWidget(wakeupText);

        wakeupReset = new QPushButton(gb_wakeupDelay);
        wakeupReset->setObjectName(QString::fromUtf8("wakeupReset"));

        wakeupDelayLayout->addWidget(wakeupReset);

        wakeupDelayLayout->setStretch(0, 1);

        gb_wakeupDelay_layout->addLayout(wakeupDelayLayout);


        advancedTabLayoutRight->addWidget(gb_wakeupDelay);

        gb_vblank = new QGroupBox(advancedTab);
        gb_vblank->setObjectName(QString::fromUtf8("gb_vblank"));
        sizePolicy1.setHeightForWidth(gb_vblank->sizePolicy().hasHeightForWidth());
        gb_vblank->setSizePolicy(sizePolicy1);
        gb_vblank_layout = new QVBoxLayout(gb_vblank);
        gb_vblank_layout->setObjectName(QString::fromUtf8("gb_vblank_layout"));
        vblank = new QSlider(gb_vblank);
        vblank->setObjectName(QString::fromUtf8("vblank"));
        vblank->setOrientation(Qt::Horizontal);

        gb_vblank_layout->addWidget(vblank);

        vBlankLayout = new QHBoxLayout();
        vBlankLayout->setObjectName(QString::fromUtf8("vBlankLayout"));
        vblankText = new QLabel(gb_vblank);
        vblankText->setObjectName(QString::fromUtf8("vblankText"));
        vblankText->setAlignment(Qt::AlignCenter);

        vBlankLayout->addWidget(vblankText);

        vblankReset = new QPushButton(gb_vblank);
        vblankReset->setObjectName(QString::fromUtf8("vblankReset"));

        vBlankLayout->addWidget(vblankReset);

        vBlankLayout->setStretch(0, 1);

        gb_vblank_layout->addLayout(vBlankLayout);


        advancedTabLayoutRight->addWidget(gb_vblank);

        gb_clockScale = new QGroupBox(advancedTab);
        gb_clockScale->setObjectName(QString::fromUtf8("gb_clockScale"));
        sizePolicy1.setHeightForWidth(gb_clockScale->sizePolicy().hasHeightForWidth());
        gb_clockScale->setSizePolicy(sizePolicy1);
        gb_clockScale_layout = new QVBoxLayout(gb_clockScale);
        gb_clockScale_layout->setObjectName(QString::fromUtf8("gb_clockScale_layout"));
        clockScale = new QSlider(gb_clockScale);
        clockScale->setObjectName(QString::fromUtf8("clockScale"));
        clockScale->setOrientation(Qt::Horizontal);

        gb_clockScale_layout->addWidget(clockScale);

        clockScaleLayout = new QHBoxLayout();
        clockScaleLayout->setObjectName(QString::fromUtf8("clockScaleLayout"));
        clockScaleText = new QLabel(gb_clockScale);
        clockScaleText->setObjectName(QString::fromUtf8("clockScaleText"));
        clockScaleText->setAlignment(Qt::AlignCenter);

        clockScaleLayout->addWidget(clockScaleText);

        clockScaleReset = new QPushButton(gb_clockScale);
        clockScaleReset->setObjectName(QString::fromUtf8("clockScaleReset"));

        clockScaleLayout->addWidget(clockScaleReset);

        clockScaleLayout->setStretch(0, 1);

        gb_clockScale_layout->addLayout(clockScaleLayout);


        advancedTabLayoutRight->addWidget(gb_clockScale);

        advancedTabSpacerRight = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        advancedTabLayoutRight->addItem(advancedTabSpacerRight);


        advancedTabLayout->addLayout(advancedTabLayoutRight);

        advancedTabLayout->setStretch(0, 1);
        advancedTabLayout->setStretch(1, 1);
        advancedTabLayout->setStretch(2, 1);

        advancedTab_layout->addLayout(advancedTabLayout);

        advancedTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        advancedTab_layout->addItem(advancedTabSpacer);

        gb_description_advanced = new QGroupBox(advancedTab);
        gb_description_advanced->setObjectName(QString::fromUtf8("gb_description_advanced"));
        gb_description_advanced_layout = new QVBoxLayout(gb_description_advanced);
        gb_description_advanced_layout->setObjectName(QString::fromUtf8("gb_description_advanced_layout"));
        description_advanced = new QLabel(gb_description_advanced);
        description_advanced->setObjectName(QString::fromUtf8("description_advanced"));
        description_advanced->setTextFormat(Qt::PlainText);
        description_advanced->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_advanced->setWordWrap(true);

        gb_description_advanced_layout->addWidget(description_advanced);


        advancedTab_layout->addWidget(gb_description_advanced);

        advancedTab_layout->setStretch(0, 1);
        tab_widget_settings->addTab(advancedTab, QString());
        emulatorTab = new QWidget();
        emulatorTab->setObjectName(QString::fromUtf8("emulatorTab"));
        emulatorTab_layout = new QVBoxLayout(emulatorTab);
        emulatorTab_layout->setObjectName(QString::fromUtf8("emulatorTab_layout"));
        emulatorTabLayout = new QHBoxLayout();
        emulatorTabLayout->setObjectName(QString::fromUtf8("emulatorTabLayout"));
        emulatorTabLayoutLeft = new QVBoxLayout();
        emulatorTabLayoutLeft->setObjectName(QString::fromUtf8("emulatorTabLayoutLeft"));
        gb_emu_settings = new QGroupBox(emulatorTab);
        gb_emu_settings->setObjectName(QString::fromUtf8("gb_emu_settings"));
        gb_emu_settings_layout = new QVBoxLayout(gb_emu_settings);
        gb_emu_settings_layout->setObjectName(QString::fromUtf8("gb_emu_settings_layout"));
        exitOnStop = new QCheckBox(gb_emu_settings);
        exitOnStop->setObjectName(QString::fromUtf8("exitOnStop"));

        gb_emu_settings_layout->addWidget(exitOnStop);

        alwaysStart = new QCheckBox(gb_emu_settings);
        alwaysStart->setObjectName(QString::fromUtf8("alwaysStart"));

        gb_emu_settings_layout->addWidget(alwaysStart);

        startGameFullscreen = new QCheckBox(gb_emu_settings);
        startGameFullscreen->setObjectName(QString::fromUtf8("startGameFullscreen"));

        gb_emu_settings_layout->addWidget(startGameFullscreen);

        preventDisplaySleep = new QCheckBox(gb_emu_settings);
        preventDisplaySleep->setObjectName(QString::fromUtf8("preventDisplaySleep"));

        gb_emu_settings_layout->addWidget(preventDisplaySleep);

        showTrophyPopups = new QCheckBox(gb_emu_settings);
        showTrophyPopups->setObjectName(QString::fromUtf8("showTrophyPopups"));

        gb_emu_settings_layout->addWidget(showTrophyPopups);

        useNativeInterface = new QCheckBox(gb_emu_settings);
        useNativeInterface->setObjectName(QString::fromUtf8("useNativeInterface"));

        gb_emu_settings_layout->addWidget(useNativeInterface);

        showShaderCompilationHint = new QCheckBox(gb_emu_settings);
        showShaderCompilationHint->setObjectName(QString::fromUtf8("showShaderCompilationHint"));

        gb_emu_settings_layout->addWidget(showShaderCompilationHint);

        emulatorTabSpacerLeft = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_emu_settings_layout->addItem(emulatorTabSpacerLeft);


        emulatorTabLayoutLeft->addWidget(gb_emu_settings);

        gb_max_llvm = new QGroupBox(emulatorTab);
        gb_max_llvm->setObjectName(QString::fromUtf8("gb_max_llvm"));
        gb_max_llvm_layout = new QVBoxLayout(gb_max_llvm);
        gb_max_llvm_layout->setObjectName(QString::fromUtf8("gb_max_llvm_layout"));
        maxLLVMThreads = new QComboBox(gb_max_llvm);
        maxLLVMThreads->setObjectName(QString::fromUtf8("maxLLVMThreads"));

        gb_max_llvm_layout->addWidget(maxLLVMThreads);


        emulatorTabLayoutLeft->addWidget(gb_max_llvm);


        emulatorTabLayout->addLayout(emulatorTabLayoutLeft);

        emulatorTabLayoutMiddle = new QVBoxLayout();
        emulatorTabLayoutMiddle->setObjectName(QString::fromUtf8("emulatorTabLayoutMiddle"));
        gb_viewport = new QGroupBox(emulatorTab);
        gb_viewport->setObjectName(QString::fromUtf8("gb_viewport"));
        gb_viewport_layout = new QVBoxLayout(gb_viewport);
        gb_viewport_layout->setObjectName(QString::fromUtf8("gb_viewport_layout"));
        gs_disableMouse = new QCheckBox(gb_viewport);
        gs_disableMouse->setObjectName(QString::fromUtf8("gs_disableMouse"));

        gb_viewport_layout->addWidget(gs_disableMouse);

        gs_disableKbHotkeys = new QCheckBox(gb_viewport);
        gs_disableKbHotkeys->setObjectName(QString::fromUtf8("gs_disableKbHotkeys"));

        gb_viewport_layout->addWidget(gs_disableKbHotkeys);

        gs_showMouseInFullscreen = new QCheckBox(gb_viewport);
        gs_showMouseInFullscreen->setObjectName(QString::fromUtf8("gs_showMouseInFullscreen"));

        gb_viewport_layout->addWidget(gs_showMouseInFullscreen);

        gs_lockMouseInFullscreen = new QCheckBox(gb_viewport);
        gs_lockMouseInFullscreen->setObjectName(QString::fromUtf8("gs_lockMouseInFullscreen"));

        gb_viewport_layout->addWidget(gs_lockMouseInFullscreen);

        gs_hideMouseOnIdle_widget = new QWidget(gb_viewport);
        gs_hideMouseOnIdle_widget->setObjectName(QString::fromUtf8("gs_hideMouseOnIdle_widget"));
        gs_hideMouseOnIdle_layout = new QHBoxLayout(gs_hideMouseOnIdle_widget);
        gs_hideMouseOnIdle_layout->setObjectName(QString::fromUtf8("gs_hideMouseOnIdle_layout"));
        gs_hideMouseOnIdle_layout->setContentsMargins(0, 0, 0, 0);
        gs_hideMouseOnIdle = new QCheckBox(gs_hideMouseOnIdle_widget);
        gs_hideMouseOnIdle->setObjectName(QString::fromUtf8("gs_hideMouseOnIdle"));

        gs_hideMouseOnIdle_layout->addWidget(gs_hideMouseOnIdle);

        gs_hideMouseOnIdleTime = new QSpinBox(gs_hideMouseOnIdle_widget);
        gs_hideMouseOnIdleTime->setObjectName(QString::fromUtf8("gs_hideMouseOnIdleTime"));
        gs_hideMouseOnIdleTime->setAccelerated(true);
        gs_hideMouseOnIdleTime->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        gs_hideMouseOnIdleTime->setKeyboardTracking(false);
        gs_hideMouseOnIdleTime->setMinimum(200);
        gs_hideMouseOnIdleTime->setMaximum(99999);
        gs_hideMouseOnIdleTime->setStepType(QAbstractSpinBox::DefaultStepType);
        gs_hideMouseOnIdleTime->setValue(2000);

        gs_hideMouseOnIdle_layout->addWidget(gs_hideMouseOnIdleTime);


        gb_viewport_layout->addWidget(gs_hideMouseOnIdle_widget);

        gs_resizeOnBoot_widget = new QWidget(gb_viewport);
        gs_resizeOnBoot_widget->setObjectName(QString::fromUtf8("gs_resizeOnBoot_widget"));
        gs_resizeOnBoot_layout = new QVBoxLayout(gs_resizeOnBoot_widget);
        gs_resizeOnBoot_layout->setObjectName(QString::fromUtf8("gs_resizeOnBoot_layout"));
        gs_resizeOnBoot_layout->setContentsMargins(0, 0, 0, 0);
        gs_resizeOnBoot = new QCheckBox(gs_resizeOnBoot_widget);
        gs_resizeOnBoot->setObjectName(QString::fromUtf8("gs_resizeOnBoot"));

        gs_resizeOnBoot_layout->addWidget(gs_resizeOnBoot);

        gs_resolution_layout = new QHBoxLayout();
        gs_resolution_layout->setObjectName(QString::fromUtf8("gs_resolution_layout"));
        gb_gs_width = new QGroupBox(gs_resizeOnBoot_widget);
        gb_gs_width->setObjectName(QString::fromUtf8("gb_gs_width"));
        gb_gs_width_layout = new QVBoxLayout(gb_gs_width);
        gb_gs_width_layout->setObjectName(QString::fromUtf8("gb_gs_width_layout"));
        gs_width = new QSpinBox(gb_gs_width);
        gs_width->setObjectName(QString::fromUtf8("gs_width"));
        gs_width->setAccelerated(true);
        gs_width->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        gs_width->setKeyboardTracking(false);
        gs_width->setMinimum(0);
        gs_width->setMaximum(9999);
        gs_width->setValue(0);

        gb_gs_width_layout->addWidget(gs_width);


        gs_resolution_layout->addWidget(gb_gs_width);

        gb_gs_height = new QGroupBox(gs_resizeOnBoot_widget);
        gb_gs_height->setObjectName(QString::fromUtf8("gb_gs_height"));
        gb_gs_height_layout = new QVBoxLayout(gb_gs_height);
        gb_gs_height_layout->setObjectName(QString::fromUtf8("gb_gs_height_layout"));
        gs_height = new QSpinBox(gb_gs_height);
        gs_height->setObjectName(QString::fromUtf8("gs_height"));
        gs_height->setFrame(true);
        gs_height->setAccelerated(true);
        gs_height->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        gs_height->setKeyboardTracking(false);
        gs_height->setMinimum(0);
        gs_height->setMaximum(9999);
        gs_height->setValue(0);

        gb_gs_height_layout->addWidget(gs_height);


        gs_resolution_layout->addWidget(gb_gs_height);


        gs_resizeOnBoot_layout->addLayout(gs_resolution_layout);


        gb_viewport_layout->addWidget(gs_resizeOnBoot_widget);


        emulatorTabLayoutMiddle->addWidget(gb_viewport);

        gb_shader_load = new QGroupBox(emulatorTab);
        gb_shader_load->setObjectName(QString::fromUtf8("gb_shader_load"));
        gb_shader_load_layout = new QVBoxLayout(gb_shader_load);
        gb_shader_load_layout->setObjectName(QString::fromUtf8("gb_shader_load_layout"));
        shaderLoadBgEnabled = new QCheckBox(gb_shader_load);
        shaderLoadBgEnabled->setObjectName(QString::fromUtf8("shaderLoadBgEnabled"));

        gb_shader_load_layout->addWidget(shaderLoadBgEnabled);

        label_shaderLoadBgDarkening = new QLabel(gb_shader_load);
        label_shaderLoadBgDarkening->setObjectName(QString::fromUtf8("label_shaderLoadBgDarkening"));

        gb_shader_load_layout->addWidget(label_shaderLoadBgDarkening);

        shaderLoadBgDarkening = new QSlider(gb_shader_load);
        shaderLoadBgDarkening->setObjectName(QString::fromUtf8("shaderLoadBgDarkening"));
        shaderLoadBgDarkening->setOrientation(Qt::Horizontal);

        gb_shader_load_layout->addWidget(shaderLoadBgDarkening);

        label_shaderLoadBgBlur = new QLabel(gb_shader_load);
        label_shaderLoadBgBlur->setObjectName(QString::fromUtf8("label_shaderLoadBgBlur"));

        gb_shader_load_layout->addWidget(label_shaderLoadBgBlur);

        shaderLoadBgBlur = new QSlider(gb_shader_load);
        shaderLoadBgBlur->setObjectName(QString::fromUtf8("shaderLoadBgBlur"));
        shaderLoadBgBlur->setOrientation(Qt::Horizontal);

        gb_shader_load_layout->addWidget(shaderLoadBgBlur);

        spacer_shader_load = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_shader_load_layout->addItem(spacer_shader_load);


        emulatorTabLayoutMiddle->addWidget(gb_shader_load);

        gb_game_window_title = new QGroupBox(emulatorTab);
        gb_game_window_title->setObjectName(QString::fromUtf8("gb_game_window_title"));
        layout_gb_game_window_title = new QVBoxLayout(gb_game_window_title);
        layout_gb_game_window_title->setObjectName(QString::fromUtf8("layout_gb_game_window_title"));
        label_game_window_title_format = new QLabel(gb_game_window_title);
        label_game_window_title_format->setObjectName(QString::fromUtf8("label_game_window_title_format"));
        label_game_window_title_format->setText(QString::fromUtf8("FPS: 60 | Renderer | Version | Game [ID]"));
        label_game_window_title_format->setAlignment(Qt::AlignCenter);

        layout_gb_game_window_title->addWidget(label_game_window_title_format);

        layout_buttons_game_window_title = new QHBoxLayout();
        layout_buttons_game_window_title->setObjectName(QString::fromUtf8("layout_buttons_game_window_title"));
        reset_button_game_window_title_format = new QPushButton(gb_game_window_title);
        reset_button_game_window_title_format->setObjectName(QString::fromUtf8("reset_button_game_window_title_format"));

        layout_buttons_game_window_title->addWidget(reset_button_game_window_title_format);

        edit_button_game_window_title_format = new QPushButton(gb_game_window_title);
        edit_button_game_window_title_format->setObjectName(QString::fromUtf8("edit_button_game_window_title_format"));

        layout_buttons_game_window_title->addWidget(edit_button_game_window_title_format);


        layout_gb_game_window_title->addLayout(layout_buttons_game_window_title);


        emulatorTabLayoutMiddle->addWidget(gb_game_window_title);


        emulatorTabLayout->addLayout(emulatorTabLayoutMiddle);

        emulatorTabLayoutRight = new QVBoxLayout();
        emulatorTabLayoutRight->setObjectName(QString::fromUtf8("emulatorTabLayoutRight"));
        gb_performance_overlay = new QGroupBox(emulatorTab);
        gb_performance_overlay->setObjectName(QString::fromUtf8("gb_performance_overlay"));
        gb_performance_overlay_layout = new QVBoxLayout(gb_performance_overlay);
        gb_performance_overlay_layout->setObjectName(QString::fromUtf8("gb_performance_overlay_layout"));
        perfOverlayEnabled = new QCheckBox(gb_performance_overlay);
        perfOverlayEnabled->setObjectName(QString::fromUtf8("perfOverlayEnabled"));

        gb_performance_overlay_layout->addWidget(perfOverlayEnabled);

        perfOverlayFramerateGraphEnabled = new QCheckBox(gb_performance_overlay);
        perfOverlayFramerateGraphEnabled->setObjectName(QString::fromUtf8("perfOverlayFramerateGraphEnabled"));

        gb_performance_overlay_layout->addWidget(perfOverlayFramerateGraphEnabled);

        perfOverlayFrametimeGraphEnabled = new QCheckBox(gb_performance_overlay);
        perfOverlayFrametimeGraphEnabled->setObjectName(QString::fromUtf8("perfOverlayFrametimeGraphEnabled"));

        gb_performance_overlay_layout->addWidget(perfOverlayFrametimeGraphEnabled);

        perf_overlay_detail_level = new QWidget(gb_performance_overlay);
        perf_overlay_detail_level->setObjectName(QString::fromUtf8("perf_overlay_detail_level"));
        layout_perf_overlay_detail_level = new QVBoxLayout(perf_overlay_detail_level);
        layout_perf_overlay_detail_level->setObjectName(QString::fromUtf8("layout_perf_overlay_detail_level"));
        layout_perf_overlay_detail_level->setContentsMargins(0, 0, 0, 0);
        label_detail_level = new QLabel(perf_overlay_detail_level);
        label_detail_level->setObjectName(QString::fromUtf8("label_detail_level"));

        layout_perf_overlay_detail_level->addWidget(label_detail_level);

        perfOverlayDetailLevel = new QComboBox(perf_overlay_detail_level);
        perfOverlayDetailLevel->setObjectName(QString::fromUtf8("perfOverlayDetailLevel"));

        layout_perf_overlay_detail_level->addWidget(perfOverlayDetailLevel);


        gb_performance_overlay_layout->addWidget(perf_overlay_detail_level);

        perf_overlay_position = new QWidget(gb_performance_overlay);
        perf_overlay_position->setObjectName(QString::fromUtf8("perf_overlay_position"));
        layout_perf_overlay_position = new QVBoxLayout(perf_overlay_position);
        layout_perf_overlay_position->setObjectName(QString::fromUtf8("layout_perf_overlay_position"));
        layout_perf_overlay_position->setContentsMargins(0, 0, 0, 0);
        label_position = new QLabel(perf_overlay_position);
        label_position->setObjectName(QString::fromUtf8("label_position"));

        layout_perf_overlay_position->addWidget(label_position);

        perfOverlayPosition = new QComboBox(perf_overlay_position);
        perfOverlayPosition->setObjectName(QString::fromUtf8("perfOverlayPosition"));

        layout_perf_overlay_position->addWidget(perfOverlayPosition);


        gb_performance_overlay_layout->addWidget(perf_overlay_position);

        label_margin_x = new QLabel(gb_performance_overlay);
        label_margin_x->setObjectName(QString::fromUtf8("label_margin_x"));

        gb_performance_overlay_layout->addWidget(label_margin_x);

        layout_margin_x = new QHBoxLayout();
        layout_margin_x->setObjectName(QString::fromUtf8("layout_margin_x"));
        perfOverlayCenterX = new QCheckBox(gb_performance_overlay);
        perfOverlayCenterX->setObjectName(QString::fromUtf8("perfOverlayCenterX"));

        layout_margin_x->addWidget(perfOverlayCenterX);

        perfOverlayMarginX = new QSpinBox(gb_performance_overlay);
        perfOverlayMarginX->setObjectName(QString::fromUtf8("perfOverlayMarginX"));

        layout_margin_x->addWidget(perfOverlayMarginX);


        gb_performance_overlay_layout->addLayout(layout_margin_x);

        label_margin_y = new QLabel(gb_performance_overlay);
        label_margin_y->setObjectName(QString::fromUtf8("label_margin_y"));

        gb_performance_overlay_layout->addWidget(label_margin_y);

        layout_margin_y = new QHBoxLayout();
        layout_margin_y->setObjectName(QString::fromUtf8("layout_margin_y"));
        perfOverlayCenterY = new QCheckBox(gb_performance_overlay);
        perfOverlayCenterY->setObjectName(QString::fromUtf8("perfOverlayCenterY"));

        layout_margin_y->addWidget(perfOverlayCenterY);

        perfOverlayMarginY = new QSpinBox(gb_performance_overlay);
        perfOverlayMarginY->setObjectName(QString::fromUtf8("perfOverlayMarginY"));

        layout_margin_y->addWidget(perfOverlayMarginY);


        gb_performance_overlay_layout->addLayout(layout_margin_y);

        perf_overlay_update_interval = new QWidget(gb_performance_overlay);
        perf_overlay_update_interval->setObjectName(QString::fromUtf8("perf_overlay_update_interval"));
        layout_perf_overlay_update_interval = new QVBoxLayout(perf_overlay_update_interval);
        layout_perf_overlay_update_interval->setObjectName(QString::fromUtf8("layout_perf_overlay_update_interval"));
        layout_perf_overlay_update_interval->setContentsMargins(0, 0, 0, 0);
        label_update_interval = new QLabel(perf_overlay_update_interval);
        label_update_interval->setObjectName(QString::fromUtf8("label_update_interval"));

        layout_perf_overlay_update_interval->addWidget(label_update_interval);

        perfOverlayUpdateInterval = new QSlider(perf_overlay_update_interval);
        perfOverlayUpdateInterval->setObjectName(QString::fromUtf8("perfOverlayUpdateInterval"));
        perfOverlayUpdateInterval->setSingleStep(10);
        perfOverlayUpdateInterval->setPageStep(100);
        perfOverlayUpdateInterval->setOrientation(Qt::Horizontal);

        layout_perf_overlay_update_interval->addWidget(perfOverlayUpdateInterval);


        gb_performance_overlay_layout->addWidget(perf_overlay_update_interval);

        perf_overlay_font_size = new QWidget(gb_performance_overlay);
        perf_overlay_font_size->setObjectName(QString::fromUtf8("perf_overlay_font_size"));
        layout_perf_overlay_font_size = new QVBoxLayout(perf_overlay_font_size);
        layout_perf_overlay_font_size->setObjectName(QString::fromUtf8("layout_perf_overlay_font_size"));
        layout_perf_overlay_font_size->setContentsMargins(0, 0, 0, 0);
        label_font_size = new QLabel(perf_overlay_font_size);
        label_font_size->setObjectName(QString::fromUtf8("label_font_size"));

        layout_perf_overlay_font_size->addWidget(label_font_size);

        perfOverlayFontSize = new QSlider(perf_overlay_font_size);
        perfOverlayFontSize->setObjectName(QString::fromUtf8("perfOverlayFontSize"));
        perfOverlayFontSize->setOrientation(Qt::Horizontal);

        layout_perf_overlay_font_size->addWidget(perfOverlayFontSize);


        gb_performance_overlay_layout->addWidget(perf_overlay_font_size);

        perf_overlay_opacity = new QWidget(gb_performance_overlay);
        perf_overlay_opacity->setObjectName(QString::fromUtf8("perf_overlay_opacity"));
        layout_perf_overlay_opacity = new QVBoxLayout(perf_overlay_opacity);
        layout_perf_overlay_opacity->setObjectName(QString::fromUtf8("layout_perf_overlay_opacity"));
        layout_perf_overlay_opacity->setContentsMargins(0, 0, 0, 0);
        label_opacity = new QLabel(perf_overlay_opacity);
        label_opacity->setObjectName(QString::fromUtf8("label_opacity"));

        layout_perf_overlay_opacity->addWidget(label_opacity);

        perfOverlayOpacity = new QSlider(perf_overlay_opacity);
        perfOverlayOpacity->setObjectName(QString::fromUtf8("perfOverlayOpacity"));
        perfOverlayOpacity->setOrientation(Qt::Horizontal);

        layout_perf_overlay_opacity->addWidget(perfOverlayOpacity);


        gb_performance_overlay_layout->addWidget(perf_overlay_opacity);

        perf_overlay_framerate_datapoints = new QWidget(gb_performance_overlay);
        perf_overlay_framerate_datapoints->setObjectName(QString::fromUtf8("perf_overlay_framerate_datapoints"));
        layout_perf_overlay_framerate_datapoints = new QVBoxLayout(perf_overlay_framerate_datapoints);
        layout_perf_overlay_framerate_datapoints->setObjectName(QString::fromUtf8("layout_perf_overlay_framerate_datapoints"));
        layout_perf_overlay_framerate_datapoints->setContentsMargins(0, 0, -1, 0);
        label_framerate_datapoints = new QLabel(perf_overlay_framerate_datapoints);
        label_framerate_datapoints->setObjectName(QString::fromUtf8("label_framerate_datapoints"));

        layout_perf_overlay_framerate_datapoints->addWidget(label_framerate_datapoints);

        slider_framerate_datapoints = new QSlider(perf_overlay_framerate_datapoints);
        slider_framerate_datapoints->setObjectName(QString::fromUtf8("slider_framerate_datapoints"));
        slider_framerate_datapoints->setOrientation(Qt::Horizontal);

        layout_perf_overlay_framerate_datapoints->addWidget(slider_framerate_datapoints);


        gb_performance_overlay_layout->addWidget(perf_overlay_framerate_datapoints);

        perf_overlay_frametime_datapoints = new QWidget(gb_performance_overlay);
        perf_overlay_frametime_datapoints->setObjectName(QString::fromUtf8("perf_overlay_frametime_datapoints"));
        layout_perf_overlay_frametime_datapoints = new QVBoxLayout(perf_overlay_frametime_datapoints);
        layout_perf_overlay_frametime_datapoints->setObjectName(QString::fromUtf8("layout_perf_overlay_frametime_datapoints"));
        layout_perf_overlay_frametime_datapoints->setContentsMargins(0, 0, -1, 0);
        label_frametime_datapoints = new QLabel(perf_overlay_frametime_datapoints);
        label_frametime_datapoints->setObjectName(QString::fromUtf8("label_frametime_datapoints"));

        layout_perf_overlay_frametime_datapoints->addWidget(label_frametime_datapoints);

        slider_frametime_datapoints = new QSlider(perf_overlay_frametime_datapoints);
        slider_frametime_datapoints->setObjectName(QString::fromUtf8("slider_frametime_datapoints"));
        slider_frametime_datapoints->setOrientation(Qt::Horizontal);

        layout_perf_overlay_frametime_datapoints->addWidget(slider_frametime_datapoints);


        gb_performance_overlay_layout->addWidget(perf_overlay_frametime_datapoints);

        emulatorTabSpacerRight = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_performance_overlay_layout->addItem(emulatorTabSpacerRight);


        emulatorTabLayoutRight->addWidget(gb_performance_overlay);


        emulatorTabLayout->addLayout(emulatorTabLayoutRight);

        emulatorTabLayout->setStretch(0, 1);
        emulatorTabLayout->setStretch(1, 1);
        emulatorTabLayout->setStretch(2, 1);

        emulatorTab_layout->addLayout(emulatorTabLayout);

        emulatorTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        emulatorTab_layout->addItem(emulatorTabSpacer);

        gb_description_emulator = new QGroupBox(emulatorTab);
        gb_description_emulator->setObjectName(QString::fromUtf8("gb_description_emulator"));
        gb_description_emulator_layout = new QVBoxLayout(gb_description_emulator);
        gb_description_emulator_layout->setObjectName(QString::fromUtf8("gb_description_emulator_layout"));
        description_emulator = new QLabel(gb_description_emulator);
        description_emulator->setObjectName(QString::fromUtf8("description_emulator"));
        description_emulator->setTextFormat(Qt::PlainText);
        description_emulator->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_emulator->setWordWrap(true);

        gb_description_emulator_layout->addWidget(description_emulator);


        emulatorTab_layout->addWidget(gb_description_emulator);

        emulatorTab_layout->setStretch(1, 1);
        tab_widget_settings->addTab(emulatorTab, QString());
        guiTab = new QWidget();
        guiTab->setObjectName(QString::fromUtf8("guiTab"));
        guiTab_layout = new QVBoxLayout(guiTab);
        guiTab_layout->setObjectName(QString::fromUtf8("guiTab_layout"));
        guiTabLayout = new QHBoxLayout();
        guiTabLayout->setObjectName(QString::fromUtf8("guiTabLayout"));
        guiTabLayoutLeft = new QVBoxLayout();
        guiTabLayoutLeft->setObjectName(QString::fromUtf8("guiTabLayoutLeft"));
        gb_stylesheets = new QGroupBox(guiTab);
        gb_stylesheets->setObjectName(QString::fromUtf8("gb_stylesheets"));
        gb_stylesheets_layout = new QVBoxLayout(gb_stylesheets);
        gb_stylesheets_layout->setObjectName(QString::fromUtf8("gb_stylesheets_layout"));
        combo_stylesheets = new QComboBox(gb_stylesheets);
        combo_stylesheets->setObjectName(QString::fromUtf8("combo_stylesheets"));

        gb_stylesheets_layout->addWidget(combo_stylesheets);

        pb_apply_stylesheet = new QPushButton(gb_stylesheets);
        pb_apply_stylesheet->setObjectName(QString::fromUtf8("pb_apply_stylesheet"));

        gb_stylesheets_layout->addWidget(pb_apply_stylesheet);


        guiTabLayoutLeft->addWidget(gb_stylesheets);

        gb_colors = new QGroupBox(guiTab);
        gb_colors->setObjectName(QString::fromUtf8("gb_colors"));
        gb_colors_layout = new QVBoxLayout(gb_colors);
        gb_colors_layout->setObjectName(QString::fromUtf8("gb_colors_layout"));
        gb_colors_layout->setContentsMargins(9, 9, 9, 9);
        cb_custom_colors = new QCheckBox(gb_colors);
        cb_custom_colors->setObjectName(QString::fromUtf8("cb_custom_colors"));

        gb_colors_layout->addWidget(cb_custom_colors);

        pb_gl_icon_color = new QPushButton(gb_colors);
        pb_gl_icon_color->setObjectName(QString::fromUtf8("pb_gl_icon_color"));

        gb_colors_layout->addWidget(pb_gl_icon_color);

        pb_sd_icon_color = new QPushButton(gb_colors);
        pb_sd_icon_color->setObjectName(QString::fromUtf8("pb_sd_icon_color"));

        gb_colors_layout->addWidget(pb_sd_icon_color);

        pb_tr_icon_color = new QPushButton(gb_colors);
        pb_tr_icon_color->setObjectName(QString::fromUtf8("pb_tr_icon_color"));

        gb_colors_layout->addWidget(pb_tr_icon_color);


        guiTabLayoutLeft->addWidget(gb_colors);

        guiTabSpacerLeft = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        guiTabLayoutLeft->addItem(guiTabSpacerLeft);


        guiTabLayout->addLayout(guiTabLayoutLeft);

        guiTabLayoutMiddle = new QVBoxLayout();
        guiTabLayoutMiddle->setObjectName(QString::fromUtf8("guiTabLayoutMiddle"));
        gb_log = new QGroupBox(guiTab);
        gb_log->setObjectName(QString::fromUtf8("gb_log"));
        gb_log_layout = new QVBoxLayout(gb_log);
        gb_log_layout->setObjectName(QString::fromUtf8("gb_log_layout"));
        log_limit = new QWidget(gb_log);
        log_limit->setObjectName(QString::fromUtf8("log_limit"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(log_limit->sizePolicy().hasHeightForWidth());
        log_limit->setSizePolicy(sizePolicy6);
        layout_log_limit = new QVBoxLayout(log_limit);
        layout_log_limit->setObjectName(QString::fromUtf8("layout_log_limit"));
        layout_log_limit->setContentsMargins(0, 0, 0, 0);
        label_log_limit = new QLabel(log_limit);
        label_log_limit->setObjectName(QString::fromUtf8("label_log_limit"));

        layout_log_limit->addWidget(label_log_limit);

        spinbox_log_limit = new QSpinBox(log_limit);
        spinbox_log_limit->setObjectName(QString::fromUtf8("spinbox_log_limit"));
        spinbox_log_limit->setMinimum(0);
        spinbox_log_limit->setMaximum(999999999);

        layout_log_limit->addWidget(spinbox_log_limit);


        gb_log_layout->addWidget(log_limit);

        tty_limit = new QWidget(gb_log);
        tty_limit->setObjectName(QString::fromUtf8("tty_limit"));
        layout_tty_limit = new QVBoxLayout(tty_limit);
        layout_tty_limit->setObjectName(QString::fromUtf8("layout_tty_limit"));
        layout_tty_limit->setContentsMargins(0, 0, 0, 0);
        label_tty_limit = new QLabel(tty_limit);
        label_tty_limit->setObjectName(QString::fromUtf8("label_tty_limit"));

        layout_tty_limit->addWidget(label_tty_limit);

        spinbox_tty_limit = new QSpinBox(tty_limit);
        spinbox_tty_limit->setObjectName(QString::fromUtf8("spinbox_tty_limit"));
        spinbox_tty_limit->setMaximum(999999999);

        layout_tty_limit->addWidget(spinbox_tty_limit);


        gb_log_layout->addWidget(tty_limit);


        guiTabLayoutMiddle->addWidget(gb_log);

        guiTabSpacerMiddle = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        guiTabLayoutMiddle->addItem(guiTabSpacerMiddle);


        guiTabLayout->addLayout(guiTabLayoutMiddle);

        guiTabLayoutRight = new QVBoxLayout();
        guiTabLayoutRight->setObjectName(QString::fromUtf8("guiTabLayoutRight"));
        gb_gui_options = new QGroupBox(guiTab);
        gb_gui_options->setObjectName(QString::fromUtf8("gb_gui_options"));
        gb_gui_options_layout = new QVBoxLayout(gb_gui_options);
        gb_gui_options_layout->setObjectName(QString::fromUtf8("gb_gui_options_layout"));
        cb_show_welcome = new QCheckBox(gb_gui_options);
        cb_show_welcome->setObjectName(QString::fromUtf8("cb_show_welcome"));

        gb_gui_options_layout->addWidget(cb_show_welcome);

        cb_show_exit_game = new QCheckBox(gb_gui_options);
        cb_show_exit_game->setObjectName(QString::fromUtf8("cb_show_exit_game"));

        gb_gui_options_layout->addWidget(cb_show_exit_game);

        cb_show_boot_game = new QCheckBox(gb_gui_options);
        cb_show_boot_game->setObjectName(QString::fromUtf8("cb_show_boot_game"));

        gb_gui_options_layout->addWidget(cb_show_boot_game);

        cb_show_pkg_install = new QCheckBox(gb_gui_options);
        cb_show_pkg_install->setObjectName(QString::fromUtf8("cb_show_pkg_install"));

        gb_gui_options_layout->addWidget(cb_show_pkg_install);

        cb_show_pup_install = new QCheckBox(gb_gui_options);
        cb_show_pup_install->setObjectName(QString::fromUtf8("cb_show_pup_install"));

        gb_gui_options_layout->addWidget(cb_show_pup_install);

        cb_show_obsolete_cfg_dialog = new QCheckBox(gb_gui_options);
        cb_show_obsolete_cfg_dialog->setObjectName(QString::fromUtf8("cb_show_obsolete_cfg_dialog"));

        gb_gui_options_layout->addWidget(cb_show_obsolete_cfg_dialog);

        cb_show_same_buttons_dialog = new QCheckBox(gb_gui_options);
        cb_show_same_buttons_dialog->setObjectName(QString::fromUtf8("cb_show_same_buttons_dialog"));

        gb_gui_options_layout->addWidget(cb_show_same_buttons_dialog);

        guiTabSpacerRight = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_gui_options_layout->addItem(guiTabSpacerRight);


        guiTabLayoutRight->addWidget(gb_gui_options);

        gb_updates = new QGroupBox(guiTab);
        gb_updates->setObjectName(QString::fromUtf8("gb_updates"));
        layout_gb_updates = new QVBoxLayout(gb_updates);
        layout_gb_updates->setObjectName(QString::fromUtf8("layout_gb_updates"));
        combo_updates = new QComboBox(gb_updates);
        combo_updates->setObjectName(QString::fromUtf8("combo_updates"));

        layout_gb_updates->addWidget(combo_updates);


        guiTabLayoutRight->addWidget(gb_updates);

        gb_discord = new QGroupBox(guiTab);
        gb_discord->setObjectName(QString::fromUtf8("gb_discord"));
        gb_discord_layout = new QVBoxLayout(gb_discord);
        gb_discord_layout->setObjectName(QString::fromUtf8("gb_discord_layout"));
        useRichPresence = new QCheckBox(gb_discord);
        useRichPresence->setObjectName(QString::fromUtf8("useRichPresence"));

        gb_discord_layout->addWidget(useRichPresence);

        label_discordState = new QLabel(gb_discord);
        label_discordState->setObjectName(QString::fromUtf8("label_discordState"));

        gb_discord_layout->addWidget(label_discordState);

        discordState = new QLineEdit(gb_discord);
        discordState->setObjectName(QString::fromUtf8("discordState"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(discordState->sizePolicy().hasHeightForWidth());
        discordState->setSizePolicy(sizePolicy7);
        discordState->setMaxLength(128);

        gb_discord_layout->addWidget(discordState);


        guiTabLayoutRight->addWidget(gb_discord);


        guiTabLayout->addLayout(guiTabLayoutRight);

        guiTabLayout->setStretch(0, 1);
        guiTabLayout->setStretch(1, 1);
        guiTabLayout->setStretch(2, 1);

        guiTab_layout->addLayout(guiTabLayout);

        guiTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        guiTab_layout->addItem(guiTabSpacer);

        gb_description_gui = new QGroupBox(guiTab);
        gb_description_gui->setObjectName(QString::fromUtf8("gb_description_gui"));
        gb_description_gui_layout = new QVBoxLayout(gb_description_gui);
        gb_description_gui_layout->setObjectName(QString::fromUtf8("gb_description_gui_layout"));
        description_gui = new QLabel(gb_description_gui);
        description_gui->setObjectName(QString::fromUtf8("description_gui"));
        description_gui->setTextFormat(Qt::PlainText);
        description_gui->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_gui->setWordWrap(true);

        gb_description_gui_layout->addWidget(description_gui);


        guiTab_layout->addWidget(gb_description_gui);

        guiTab_layout->setStretch(1, 1);
        tab_widget_settings->addTab(guiTab, QString());
        debugTab = new QWidget();
        debugTab->setObjectName(QString::fromUtf8("debugTab"));
        debugTab_layout = new QVBoxLayout(debugTab);
        debugTab_layout->setObjectName(QString::fromUtf8("debugTab_layout"));
        debugTabLayout = new QHBoxLayout();
        debugTabLayout->setObjectName(QString::fromUtf8("debugTabLayout"));
        gb_debug_gpu = new QGroupBox(debugTab);
        gb_debug_gpu->setObjectName(QString::fromUtf8("gb_debug_gpu"));
        gb_debug_gpu->setEnabled(true);
        gb_debug_gpu->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gb_debug_gpu_layout = new QVBoxLayout(gb_debug_gpu);
        gb_debug_gpu_layout->setObjectName(QString::fromUtf8("gb_debug_gpu_layout"));
        renderdocCompatibility = new QCheckBox(gb_debug_gpu);
        renderdocCompatibility->setObjectName(QString::fromUtf8("renderdocCompatibility"));
        renderdocCompatibility->setEnabled(true);

        gb_debug_gpu_layout->addWidget(renderdocCompatibility, 0, Qt::AlignTop);

        debugOutput = new QCheckBox(gb_debug_gpu);
        debugOutput->setObjectName(QString::fromUtf8("debugOutput"));

        gb_debug_gpu_layout->addWidget(debugOutput, 0, Qt::AlignTop);

        debugOverlay = new QCheckBox(gb_debug_gpu);
        debugOverlay->setObjectName(QString::fromUtf8("debugOverlay"));

        gb_debug_gpu_layout->addWidget(debugOverlay);

        logProg = new QCheckBox(gb_debug_gpu);
        logProg->setObjectName(QString::fromUtf8("logProg"));

        gb_debug_gpu_layout->addWidget(logProg);

        forceHighpZ = new QCheckBox(gb_debug_gpu);
        forceHighpZ->setObjectName(QString::fromUtf8("forceHighpZ"));

        gb_debug_gpu_layout->addWidget(forceHighpZ, 0, Qt::AlignTop);

        disableHwOcclusionQueries = new QCheckBox(gb_debug_gpu);
        disableHwOcclusionQueries->setObjectName(QString::fromUtf8("disableHwOcclusionQueries"));

        gb_debug_gpu_layout->addWidget(disableHwOcclusionQueries);

        forceCpuBlitEmulation = new QCheckBox(gb_debug_gpu);
        forceCpuBlitEmulation->setObjectName(QString::fromUtf8("forceCpuBlitEmulation"));

        gb_debug_gpu_layout->addWidget(forceCpuBlitEmulation);

        disableVulkanMemAllocator = new QCheckBox(gb_debug_gpu);
        disableVulkanMemAllocator->setObjectName(QString::fromUtf8("disableVulkanMemAllocator"));

        gb_debug_gpu_layout->addWidget(disableVulkanMemAllocator);

        disableVulkanFence = new QCheckBox(gb_debug_gpu);
        disableVulkanFence->setObjectName(QString::fromUtf8("disableVulkanFence"));

        gb_debug_gpu_layout->addWidget(disableVulkanFence);

        disableFIFOReordering = new QCheckBox(gb_debug_gpu);
        disableFIFOReordering->setObjectName(QString::fromUtf8("disableFIFOReordering"));

        gb_debug_gpu_layout->addWidget(disableFIFOReordering);

        strictTextureFlushing = new QCheckBox(gb_debug_gpu);
        strictTextureFlushing->setObjectName(QString::fromUtf8("strictTextureFlushing"));

        gb_debug_gpu_layout->addWidget(strictTextureFlushing);

        gpuTextureScaling = new QCheckBox(gb_debug_gpu);
        gpuTextureScaling->setObjectName(QString::fromUtf8("gpuTextureScaling"));

        gb_debug_gpu_layout->addWidget(gpuTextureScaling);

        verticalSpacerDebugGPU = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_debug_gpu_layout->addItem(verticalSpacerDebugGPU);


        debugTabLayout->addWidget(gb_debug_gpu);

        gb_debug_core = new QGroupBox(debugTab);
        gb_debug_core->setObjectName(QString::fromUtf8("gb_debug_core"));
        gb_debug_core_layout = new QVBoxLayout(gb_debug_core);
        gb_debug_core_layout->setObjectName(QString::fromUtf8("gb_debug_core_layout"));
        ppuDebug = new QCheckBox(gb_debug_core);
        ppuDebug->setObjectName(QString::fromUtf8("ppuDebug"));

        gb_debug_core_layout->addWidget(ppuDebug);

        spuDebug = new QCheckBox(gb_debug_core);
        spuDebug->setObjectName(QString::fromUtf8("spuDebug"));

        gb_debug_core_layout->addWidget(spuDebug);

        mfcDebug = new QCheckBox(gb_debug_core);
        mfcDebug->setObjectName(QString::fromUtf8("mfcDebug"));

        gb_debug_core_layout->addWidget(mfcDebug);

        setDAZandFTZ = new QCheckBox(gb_debug_core);
        setDAZandFTZ->setObjectName(QString::fromUtf8("setDAZandFTZ"));

        gb_debug_core_layout->addWidget(setDAZandFTZ);

        accurateGETLLAR = new QCheckBox(gb_debug_core);
        accurateGETLLAR->setObjectName(QString::fromUtf8("accurateGETLLAR"));

        gb_debug_core_layout->addWidget(accurateGETLLAR);

        accurateSpuDMA = new QCheckBox(gb_debug_core);
        accurateSpuDMA->setObjectName(QString::fromUtf8("accurateSpuDMA"));

        gb_debug_core_layout->addWidget(accurateSpuDMA);

        accurateClineStores = new QCheckBox(gb_debug_core);
        accurateClineStores->setObjectName(QString::fromUtf8("accurateClineStores"));

        gb_debug_core_layout->addWidget(accurateClineStores);

        hookStFunc = new QCheckBox(gb_debug_core);
        hookStFunc->setObjectName(QString::fromUtf8("hookStFunc"));

        gb_debug_core_layout->addWidget(hookStFunc);

        perfReport = new QCheckBox(gb_debug_core);
        perfReport->setObjectName(QString::fromUtf8("perfReport"));

        gb_debug_core_layout->addWidget(perfReport);

        verticalSpacerDebugCore = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gb_debug_core_layout->addItem(verticalSpacerDebugCore);


        debugTabLayout->addWidget(gb_debug_core);

        debug_more_stuff = new QWidget(debugTab);
        debug_more_stuff->setObjectName(QString::fromUtf8("debug_more_stuff"));
        debug_more_stuff_layout = new QVBoxLayout(debug_more_stuff);
        debug_more_stuff_layout->setObjectName(QString::fromUtf8("debug_more_stuff_layout"));
        debug_more_stuff_layout->setContentsMargins(0, 0, 0, 0);
        gb_accurate_ppu_128 = new QGroupBox(debug_more_stuff);
        gb_accurate_ppu_128->setObjectName(QString::fromUtf8("gb_accurate_ppu_128"));
        gb_accurate_ppu_128_layout = new QVBoxLayout(gb_accurate_ppu_128);
        gb_accurate_ppu_128_layout->setObjectName(QString::fromUtf8("gb_accurate_ppu_128_layout"));
        combo_accurate_ppu_128 = new QComboBox(gb_accurate_ppu_128);
        combo_accurate_ppu_128->setObjectName(QString::fromUtf8("combo_accurate_ppu_128"));

        gb_accurate_ppu_128_layout->addWidget(combo_accurate_ppu_128);


        debug_more_stuff_layout->addWidget(gb_accurate_ppu_128);

        gb_num_ppu_threads = new QGroupBox(debug_more_stuff);
        gb_num_ppu_threads->setObjectName(QString::fromUtf8("gb_num_ppu_threads"));
        vbl_num_ppu_threads = new QVBoxLayout(gb_num_ppu_threads);
        vbl_num_ppu_threads->setObjectName(QString::fromUtf8("vbl_num_ppu_threads"));
        combo_num_ppu_threads = new QComboBox(gb_num_ppu_threads);
        combo_num_ppu_threads->setObjectName(QString::fromUtf8("combo_num_ppu_threads"));

        vbl_num_ppu_threads->addWidget(combo_num_ppu_threads);


        debug_more_stuff_layout->addWidget(gb_num_ppu_threads);

        verticalSpacerDebugMore = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        debug_more_stuff_layout->addItem(verticalSpacerDebugMore);


        debugTabLayout->addWidget(debug_more_stuff);

        debugTabLayout->setStretch(0, 1);
        debugTabLayout->setStretch(1, 1);
        debugTabLayout->setStretch(2, 1);

        debugTab_layout->addLayout(debugTabLayout);

        debugTabSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        debugTab_layout->addItem(debugTabSpacer);

        gb_description_debug = new QGroupBox(debugTab);
        gb_description_debug->setObjectName(QString::fromUtf8("gb_description_debug"));
        gb_description_debug_layout = new QVBoxLayout(gb_description_debug);
        gb_description_debug_layout->setObjectName(QString::fromUtf8("gb_description_debug_layout"));
        description_debug = new QLabel(gb_description_debug);
        description_debug->setObjectName(QString::fromUtf8("description_debug"));
        description_debug->setTextFormat(Qt::PlainText);
        description_debug->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description_debug->setWordWrap(true);

        gb_description_debug_layout->addWidget(description_debug);


        debugTab_layout->addWidget(gb_description_debug);

        debugTab_layout->setStretch(1, 1);
        tab_widget_settings->addTab(debugTab, QString());
        scrollArea->setWidget(tab_widget_settings);

        settings_dialog_layout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(settings_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        settings_dialog_layout->addWidget(buttonBox);


        retranslateUi(settings_dialog);

        tab_widget_settings->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(settings_dialog);
    } // setupUi

    void retranslateUi(QDialog *settings_dialog)
    {
        settings_dialog->setWindowTitle(QCoreApplication::translate("settings_dialog", "Settings", nullptr));
        gb_ppu->setTitle(QCoreApplication::translate("settings_dialog", "PPU Decoder", nullptr));
        gb_spu->setTitle(QCoreApplication::translate("settings_dialog", "SPU Decoder", nullptr));
        checkboxes->setTitle(QCoreApplication::translate("settings_dialog", "Additional Settings", nullptr));
        spuLoopDetection->setText(QCoreApplication::translate("settings_dialog", "Enable SPU loop detection", nullptr));
        accurateXFloat->setText(QCoreApplication::translate("settings_dialog", "Accurate xfloat", nullptr));
        approximateXFloat->setText(QCoreApplication::translate("settings_dialog", "Approximate xfloat", nullptr));
        fullWidthAVX512->setText(QCoreApplication::translate("settings_dialog", "Full Width AVX-512", nullptr));
        gb_tsx->setTitle(QCoreApplication::translate("settings_dialog", "TSX Instructions", nullptr));
        gb_spuBlockSize->setTitle(QCoreApplication::translate("settings_dialog", "SPU Block Size", nullptr));
        gb_spu_threads->setTitle(QCoreApplication::translate("settings_dialog", "Preferred SPU Threads", nullptr));
        gb_threadsched->setTitle(QCoreApplication::translate("settings_dialog", "Thread Scheduler", nullptr));
        gb_description_cpu->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_cpu->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(coreTab), QCoreApplication::translate("settings_dialog", "CPU", nullptr));
        gb_renderer->setTitle(QCoreApplication::translate("settings_dialog", "Renderer", nullptr));
        gb_graphicsAdapter->setTitle(QCoreApplication::translate("settings_dialog", "Graphics Device", nullptr));
        gb_aspectRatio->setTitle(QCoreApplication::translate("settings_dialog", "Aspect Ratio", nullptr));
        gb_frameLimit->setTitle(QCoreApplication::translate("settings_dialog", "Framelimit", nullptr));
        gb_anisotropicFilter->setTitle(QCoreApplication::translate("settings_dialog", "Anisotropic Filter", nullptr));
        gb_antiAliasing->setTitle(QCoreApplication::translate("settings_dialog", "Anti-Aliasing", nullptr));
        gbZCULL->setTitle(QCoreApplication::translate("settings_dialog", "ZCULL Accuracy", nullptr));
        gb_default_resolution->setTitle(QCoreApplication::translate("settings_dialog", "Default Resolution", nullptr));
        gb_resolutionScale->setTitle(QCoreApplication::translate("settings_dialog", "Resolution Scale (Disable Strict Mode)", nullptr));
        resolutionScaleMin->setText(QCoreApplication::translate("settings_dialog", "50", nullptr));
        resolutionScaleMax->setText(QCoreApplication::translate("settings_dialog", "800", nullptr));
        resolutionScaleVal->setText(QCoreApplication::translate("settings_dialog", "0", nullptr));
        resolutionScaleReset->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_minimumScalableDimension->setTitle(QCoreApplication::translate("settings_dialog", "Resolution Scale Threshold", nullptr));
        minimumScalableDimensionMin->setText(QCoreApplication::translate("settings_dialog", "1", nullptr));
        minimumScalableDimensionMax->setText(QCoreApplication::translate("settings_dialog", "1024", nullptr));
        minimumScalableDimensionVal->setText(QCoreApplication::translate("settings_dialog", "1x1", nullptr));
        minimumScalableDimensionReset->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_Upscaling->setTitle(QCoreApplication::translate("settings_dialog", "Upscaling", nullptr));
        fsrUpscalingEnable->setText(QCoreApplication::translate("settings_dialog", "Enable FSR Upscaling", nullptr));
        fsrSharpeningStrengthLabel->setText(QCoreApplication::translate("settings_dialog", "RCAS Sharpening Strength", nullptr));
        minSharpeningVal->setText(QCoreApplication::translate("settings_dialog", "0", nullptr));
        maxSharpeningVal->setText(QCoreApplication::translate("settings_dialog", "100", nullptr));
        fsrSharpeningStrengthVal->setText(QCoreApplication::translate("settings_dialog", "0", nullptr));
        fsrSharpeningStrengthReset->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_shader_mode->setTitle(QCoreApplication::translate("settings_dialog", "Shader Mode", nullptr));
        gb_shader_compiler_threads->setTitle(QCoreApplication::translate("settings_dialog", "Number of Shader Compiler Threads", nullptr));
        gb_additional_settings->setTitle(QCoreApplication::translate("settings_dialog", "Additional Settings", nullptr));
        dumpColor->setText(QCoreApplication::translate("settings_dialog", "Write Color Buffers", nullptr));
        strictModeRendering->setText(QCoreApplication::translate("settings_dialog", "Strict Rendering Mode", nullptr));
        vsync->setText(QCoreApplication::translate("settings_dialog", "VSync", nullptr));
        stretchToDisplayArea->setText(QCoreApplication::translate("settings_dialog", "Stretch To Display Area", nullptr));
        Enable3D->setText(QCoreApplication::translate("settings_dialog", "Enable 3D", nullptr));
        disableVertexCache->setText(QCoreApplication::translate("settings_dialog", "Disable Vertex Cache", nullptr));
        multithreadedRSX->setText(QCoreApplication::translate("settings_dialog", "Multithreaded RSX", nullptr));
        asyncTextureStreaming->setText(QCoreApplication::translate("settings_dialog", "Asynchronous Texture Streaming", nullptr));
        gb_description_gpu->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_gpu->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(gpuTab), QCoreApplication::translate("settings_dialog", "GPU", nullptr));
        gb_audio_out->setTitle(QCoreApplication::translate("settings_dialog", "Audio Out", nullptr));
        gb_audio_downmix->setTitle(QCoreApplication::translate("settings_dialog", "Audio Channels", nullptr));
        gb_audio_settings->setTitle(QCoreApplication::translate("settings_dialog", "Audio Settings", nullptr));
        audioDump->setText(QCoreApplication::translate("settings_dialog", "Dump to File", nullptr));
        convert->setText(QCoreApplication::translate("settings_dialog", "Convert to 16-bit", nullptr));
        gb_audio_volume->setTitle(QCoreApplication::translate("settings_dialog", "Volume", nullptr));
        masterVolumeLabel->setText(QCoreApplication::translate("settings_dialog", "Master: 0%", nullptr));
        gb_audio_buffering->setTitle(QCoreApplication::translate("settings_dialog", "Buffering", nullptr));
        enableBuffering->setText(QCoreApplication::translate("settings_dialog", "Enable Buffering", nullptr));
        audioBufferDurationLabel->setText(QCoreApplication::translate("settings_dialog", "Audio Buffer Duration: 0ms", nullptr));
        enableTimeStretching->setText(QCoreApplication::translate("settings_dialog", "Enable Time Stretching", nullptr));
        timeStretchingThresholdLabel->setText(QCoreApplication::translate("settings_dialog", "Time Stretching Threshold: 0%", nullptr));
        gb_microphone_settings->setTitle(QCoreApplication::translate("settings_dialog", "Microphone Settings", nullptr));
        microphoneLabel->setText(QCoreApplication::translate("settings_dialog", "Microphone Type:", nullptr));
        microphone1Label->setText(QCoreApplication::translate("settings_dialog", "Mic1:", nullptr));
        microphone3Label->setText(QCoreApplication::translate("settings_dialog", "Mic3:", nullptr));
        microphone2Label->setText(QCoreApplication::translate("settings_dialog", "Mic2:", nullptr));
        microphone4Label->setText(QCoreApplication::translate("settings_dialog", "Mic4:", nullptr));
        gb_description_audio->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_audio->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(audioTab), QCoreApplication::translate("settings_dialog", "Audio", nullptr));
        gb_turntable_emulated->setTitle(QCoreApplication::translate("settings_dialog", "DJ Hero emulated turntable", nullptr));
        gb_mouse_handler->setTitle(QCoreApplication::translate("settings_dialog", "Mouse Handler", nullptr));
        gb_camera_type->setTitle(QCoreApplication::translate("settings_dialog", "Camera Input", nullptr));
        gb_move_handler->setTitle(QCoreApplication::translate("settings_dialog", "Move Handler", nullptr));
        gb_keyboard_handler->setTitle(QCoreApplication::translate("settings_dialog", "Keyboard Handler", nullptr));
        gb_buzz_emulated->setTitle(QCoreApplication::translate("settings_dialog", "Buzz! emulated controller", nullptr));
        gb_camera_flip->setTitle(QCoreApplication::translate("settings_dialog", "Camera Flip", nullptr));
        gb_camera_setting->setTitle(QCoreApplication::translate("settings_dialog", "Camera Handler", nullptr));
        gb_ghltar_emulated->setTitle(QCoreApplication::translate("settings_dialog", "Guitar Hero Live emulated guitar", nullptr));
        gb_camera_id->setTitle(QCoreApplication::translate("settings_dialog", "Camera", nullptr));
        gb_pad_mode->setTitle(QCoreApplication::translate("settings_dialog", "Pad Handler Mode", nullptr));
        gb_description_io->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_io->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(inputTab), QCoreApplication::translate("settings_dialog", "I/O", nullptr));
        gb_sysLang->setTitle(QCoreApplication::translate("settings_dialog", "Console Language", nullptr));
        gb_keyboardType->setTitle(QCoreApplication::translate("settings_dialog", "Keyboard Type", nullptr));
        gb_homebrew->setTitle(QCoreApplication::translate("settings_dialog", "Homebrew", nullptr));
        enableHostRoot->setText(QCoreApplication::translate("settings_dialog", "Enable /host_root/", nullptr));
        gb_console_region->setTitle(QCoreApplication::translate("settings_dialog", "Console Region", nullptr));
        gb_console_time->setTitle(QCoreApplication::translate("settings_dialog", "Console Time", nullptr));
        console_time_reset->setText(QCoreApplication::translate("settings_dialog", "Set to Now", nullptr));
        gb_enterButtonAssignment->setTitle(QCoreApplication::translate("settings_dialog", "Enter Button Assignment", nullptr));
        gb_DiskCacheClearing->setTitle(QCoreApplication::translate("settings_dialog", "Disk cache", nullptr));
        enableCacheClearing->setText(QCoreApplication::translate("settings_dialog", "Clear cache automatically", nullptr));
        maximumCacheSizeLabel->setText(QCoreApplication::translate("settings_dialog", "Cache size: 3072 MB", nullptr));
        gb_description_system->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_system->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(systemTab), QCoreApplication::translate("settings_dialog", "System", nullptr));
        gb_network_status->setTitle(QCoreApplication::translate("settings_dialog", "Network Configuration", nullptr));
        gb_netStatusBox->setTitle(QCoreApplication::translate("settings_dialog", "Network Status", nullptr));
        gb_edit_dns->setTitle(QCoreApplication::translate("settings_dialog", "DNS", nullptr));
        gb_edit_swaps->setTitle(QCoreApplication::translate("settings_dialog", "IP/Hosts switches", nullptr));
        gb_psn_config->setTitle(QCoreApplication::translate("settings_dialog", "PSN Configuration", nullptr));
        gb_psnStatusBox->setTitle(QCoreApplication::translate("settings_dialog", "PSN Status", nullptr));
        gb_description_network->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_network->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(networkTab), QCoreApplication::translate("settings_dialog", "Network", nullptr));
        gb_advanced_core->setTitle(QCoreApplication::translate("settings_dialog", "Core", nullptr));
        debugConsoleMode->setText(QCoreApplication::translate("settings_dialog", "Debug Console Mode", nullptr));
        accurateDFMA->setText(QCoreApplication::translate("settings_dialog", "Accurate DFMA", nullptr));
        accurateRSXAccess->setText(QCoreApplication::translate("settings_dialog", "Accurate RSX reservation access", nullptr));
        ppuNJFixup->setText(QCoreApplication::translate("settings_dialog", "PPU Non-Java Mode Fixup", nullptr));
        accuratePPUSAT->setText(QCoreApplication::translate("settings_dialog", "Accurate PPU Saturation Bit", nullptr));
        accuratePPUNJ->setText(QCoreApplication::translate("settings_dialog", "Accurate PPU Non-Java Mode", nullptr));
        fixupPPUVNAN->setText(QCoreApplication::translate("settings_dialog", "PPU Vector NaN Fixup", nullptr));
        accuratePPUVNAN->setText(QCoreApplication::translate("settings_dialog", "Accurate PPU Vector NaN Handling", nullptr));
        accuratePPUFPCC->setText(QCoreApplication::translate("settings_dialog", "Accurate PPU Float Condition Control", nullptr));
        ppuPrecompilation->setText(QCoreApplication::translate("settings_dialog", "PPU LLVM Precompilation", nullptr));
        mfcDelayCommand->setText(QCoreApplication::translate("settings_dialog", "Delay each odd MFC Command", nullptr));
        silenceAllLogs->setText(QCoreApplication::translate("settings_dialog", "Silence All Logs", nullptr));
        gb_sleep_timers_accuracy->setTitle(QCoreApplication::translate("settings_dialog", "Sleep Timers Accuracy", nullptr));
        gb_max_spurs_threads->setTitle(QCoreApplication::translate("settings_dialog", "Maximum Number of SPURS Threads", nullptr));
        gb_libs->setTitle(QCoreApplication::translate("settings_dialog", "Firmware Libraries", nullptr));
        resetLleList->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_advanced_gpu->setTitle(QCoreApplication::translate("settings_dialog", "GPU", nullptr));
        readDepth->setText(QCoreApplication::translate("settings_dialog", "Read Depth Buffers", nullptr));
        dumpDepth->setText(QCoreApplication::translate("settings_dialog", "Write Depth Buffers", nullptr));
        readColor->setText(QCoreApplication::translate("settings_dialog", "Read Color Buffers", nullptr));
        disableOnDiskShaderCache->setText(QCoreApplication::translate("settings_dialog", "Disable On-Disk Shader Cache", nullptr));
        DisableNativefp16->setText(QCoreApplication::translate("settings_dialog", "Disable native float16 support", nullptr));
        gb_vulkansched->setTitle(QCoreApplication::translate("settings_dialog", "Vulkan Queue Scheduler", nullptr));
        gb_wakeupDelay->setTitle(QCoreApplication::translate("settings_dialog", "Driver Wake-Up Delay", nullptr));
        wakeupText->setText(QCoreApplication::translate("settings_dialog", "1 \302\265s", nullptr));
        wakeupReset->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_vblank->setTitle(QCoreApplication::translate("settings_dialog", "VBlank Frequency", nullptr));
        vblankText->setText(QCoreApplication::translate("settings_dialog", "60 Hz", nullptr));
        vblankReset->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_clockScale->setTitle(QCoreApplication::translate("settings_dialog", "Clocks Scale", nullptr));
        clockScaleText->setText(QCoreApplication::translate("settings_dialog", "100%", nullptr));
        clockScaleReset->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
        gb_description_advanced->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_advanced->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(advancedTab), QCoreApplication::translate("settings_dialog", "Advanced", nullptr));
        gb_emu_settings->setTitle(QCoreApplication::translate("settings_dialog", "Emulator Settings", nullptr));
        exitOnStop->setText(QCoreApplication::translate("settings_dialog", "Exit RPCS3 when process finishes", nullptr));
        alwaysStart->setText(QCoreApplication::translate("settings_dialog", "Automatically start games after boot", nullptr));
        startGameFullscreen->setText(QCoreApplication::translate("settings_dialog", "Start games in Fullscreen mode", nullptr));
        preventDisplaySleep->setText(QCoreApplication::translate("settings_dialog", "Prevent display sleep while running games", nullptr));
        showTrophyPopups->setText(QCoreApplication::translate("settings_dialog", "Show trophy popups", nullptr));
        useNativeInterface->setText(QCoreApplication::translate("settings_dialog", "Use native user interface", nullptr));
        showShaderCompilationHint->setText(QCoreApplication::translate("settings_dialog", "Show shader compilation hint", nullptr));
        gb_max_llvm->setTitle(QCoreApplication::translate("settings_dialog", "Max LLVM Compile Threads", nullptr));
        gb_viewport->setTitle(QCoreApplication::translate("settings_dialog", "Viewport", nullptr));
        gs_disableMouse->setText(QCoreApplication::translate("settings_dialog", "Ignore doubleclicks for Fullscreen", nullptr));
        gs_disableKbHotkeys->setText(QCoreApplication::translate("settings_dialog", "Ignore keyboard hotkeys", nullptr));
        gs_showMouseInFullscreen->setText(QCoreApplication::translate("settings_dialog", "Show mouse cursor in Fullscreen", nullptr));
        gs_lockMouseInFullscreen->setText(QCoreApplication::translate("settings_dialog", "Lock mouse cursor in Fullscreen", nullptr));
        gs_hideMouseOnIdle->setText(QCoreApplication::translate("settings_dialog", "Hide mouse cursor if idle", nullptr));
        gs_hideMouseOnIdleTime->setSuffix(QCoreApplication::translate("settings_dialog", "ms", nullptr));
        gs_resizeOnBoot->setText(QCoreApplication::translate("settings_dialog", "Resize game window on boot", nullptr));
        gb_gs_width->setTitle(QCoreApplication::translate("settings_dialog", "Width", nullptr));
        gb_gs_height->setTitle(QCoreApplication::translate("settings_dialog", "Height", nullptr));
        gb_shader_load->setTitle(QCoreApplication::translate("settings_dialog", "Shader Loading Screen", nullptr));
        shaderLoadBgEnabled->setText(QCoreApplication::translate("settings_dialog", "Allow custom background", nullptr));
        label_shaderLoadBgDarkening->setText(QCoreApplication::translate("settings_dialog", "Background darkening:", nullptr));
        label_shaderLoadBgBlur->setText(QCoreApplication::translate("settings_dialog", "Background blur:", nullptr));
        gb_game_window_title->setTitle(QCoreApplication::translate("settings_dialog", "Game Window Title", nullptr));
#if QT_CONFIG(tooltip)
        reset_button_game_window_title_format->setToolTip(QCoreApplication::translate("settings_dialog", "Reset the game window title to default", nullptr));
#endif // QT_CONFIG(tooltip)
        reset_button_game_window_title_format->setText(QCoreApplication::translate("settings_dialog", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        edit_button_game_window_title_format->setToolTip(QCoreApplication::translate("settings_dialog", "Edit the game window title", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_button_game_window_title_format->setText(QCoreApplication::translate("settings_dialog", "Edit", nullptr));
        gb_performance_overlay->setTitle(QCoreApplication::translate("settings_dialog", "Performance Overlay", nullptr));
        perfOverlayEnabled->setText(QCoreApplication::translate("settings_dialog", "Enable performance overlay", nullptr));
        perfOverlayFramerateGraphEnabled->setText(QCoreApplication::translate("settings_dialog", "Show framerate graph", nullptr));
        perfOverlayFrametimeGraphEnabled->setText(QCoreApplication::translate("settings_dialog", "Show frametime graph", nullptr));
        label_detail_level->setText(QCoreApplication::translate("settings_dialog", "Detail Level:", nullptr));
        label_position->setText(QCoreApplication::translate("settings_dialog", "Position:", nullptr));
        label_margin_x->setText(QCoreApplication::translate("settings_dialog", "Horizontal Margin:", nullptr));
        perfOverlayCenterX->setText(QCoreApplication::translate("settings_dialog", "Centered", nullptr));
        label_margin_y->setText(QCoreApplication::translate("settings_dialog", "Vertical Margin:", nullptr));
        perfOverlayCenterY->setText(QCoreApplication::translate("settings_dialog", "Centered", nullptr));
        label_update_interval->setText(QCoreApplication::translate("settings_dialog", "Update Interval:", nullptr));
        label_font_size->setText(QCoreApplication::translate("settings_dialog", "Font Size: ", nullptr));
        label_opacity->setText(QCoreApplication::translate("settings_dialog", "Opacity:", nullptr));
        label_framerate_datapoints->setText(QCoreApplication::translate("settings_dialog", "Framerate datapoints:", nullptr));
        label_frametime_datapoints->setText(QCoreApplication::translate("settings_dialog", "Frametime datapoints:", nullptr));
        gb_description_emulator->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_emulator->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(emulatorTab), QCoreApplication::translate("settings_dialog", "Emulator", nullptr));
        gb_stylesheets->setTitle(QCoreApplication::translate("settings_dialog", "UI Stylesheets", nullptr));
        pb_apply_stylesheet->setText(QCoreApplication::translate("settings_dialog", "Apply", nullptr));
        gb_colors->setTitle(QCoreApplication::translate("settings_dialog", "UI Colors", nullptr));
        cb_custom_colors->setText(QCoreApplication::translate("settings_dialog", "Use custom UI Colors", nullptr));
        pb_gl_icon_color->setText(QCoreApplication::translate("settings_dialog", "Gamelist icons", nullptr));
        pb_sd_icon_color->setText(QCoreApplication::translate("settings_dialog", "Save manager icons", nullptr));
        pb_tr_icon_color->setText(QCoreApplication::translate("settings_dialog", "Trophy manager icons", nullptr));
        gb_log->setTitle(QCoreApplication::translate("settings_dialog", "Log", nullptr));
        label_log_limit->setText(QCoreApplication::translate("settings_dialog", "Maximum log blocks", nullptr));
        label_tty_limit->setText(QCoreApplication::translate("settings_dialog", "Maximum TTY blocks", nullptr));
        gb_gui_options->setTitle(QCoreApplication::translate("settings_dialog", "UI Options", nullptr));
        cb_show_welcome->setText(QCoreApplication::translate("settings_dialog", "Show Welcome Screen", nullptr));
        cb_show_exit_game->setText(QCoreApplication::translate("settings_dialog", "Show Exit Game Dialog", nullptr));
        cb_show_boot_game->setText(QCoreApplication::translate("settings_dialog", "Show Boot Game Dialog", nullptr));
        cb_show_pkg_install->setText(QCoreApplication::translate("settings_dialog", "Show PKG Installation Dialog", nullptr));
        cb_show_pup_install->setText(QCoreApplication::translate("settings_dialog", "Show PUP Installation Dialog", nullptr));
        cb_show_obsolete_cfg_dialog->setText(QCoreApplication::translate("settings_dialog", "Show Obsolete Settings Dialog", nullptr));
        cb_show_same_buttons_dialog->setText(QCoreApplication::translate("settings_dialog", "Show Duplicate Buttons Dialog", nullptr));
        gb_updates->setTitle(QCoreApplication::translate("settings_dialog", "Check for updates on startup", nullptr));
        gb_discord->setTitle(QCoreApplication::translate("settings_dialog", "Discord", nullptr));
        useRichPresence->setText(QCoreApplication::translate("settings_dialog", "Use Discord Rich Presence", nullptr));
        label_discordState->setText(QCoreApplication::translate("settings_dialog", "Discord Status:", nullptr));
        gb_description_gui->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_gui->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(guiTab), QCoreApplication::translate("settings_dialog", "GUI", nullptr));
        gb_debug_gpu->setTitle(QCoreApplication::translate("settings_dialog", "GPU", nullptr));
        renderdocCompatibility->setText(QCoreApplication::translate("settings_dialog", "Renderdoc Compatibility Mode", nullptr));
        debugOutput->setText(QCoreApplication::translate("settings_dialog", "Debug Output", nullptr));
        debugOverlay->setText(QCoreApplication::translate("settings_dialog", "Debug Overlay", nullptr));
        logProg->setText(QCoreApplication::translate("settings_dialog", "Log Shader Programs", nullptr));
        forceHighpZ->setText(QCoreApplication::translate("settings_dialog", "Use High Precision Z-buffer", nullptr));
        disableHwOcclusionQueries->setText(QCoreApplication::translate("settings_dialog", "Disable ZCull Occlusion Queries", nullptr));
        forceCpuBlitEmulation->setText(QCoreApplication::translate("settings_dialog", "Force CPU blit emulation", nullptr));
        disableVulkanMemAllocator->setText(QCoreApplication::translate("settings_dialog", "Disable Vulkan Memory Allocator", nullptr));
        disableVulkanFence->setText(QCoreApplication::translate("settings_dialog", "Disable Vulkan Fence", nullptr));
        disableFIFOReordering->setText(QCoreApplication::translate("settings_dialog", "Disable FIFO Reordering", nullptr));
        strictTextureFlushing->setText(QCoreApplication::translate("settings_dialog", "Strict Texture Flushing", nullptr));
        gpuTextureScaling->setText(QCoreApplication::translate("settings_dialog", "Use GPU Texture Scaling", nullptr));
        gb_debug_core->setTitle(QCoreApplication::translate("settings_dialog", "Core", nullptr));
        ppuDebug->setText(QCoreApplication::translate("settings_dialog", "PPU Debug", nullptr));
        spuDebug->setText(QCoreApplication::translate("settings_dialog", "SPU Debug", nullptr));
        mfcDebug->setText(QCoreApplication::translate("settings_dialog", "MFC Debug", nullptr));
        setDAZandFTZ->setText(QCoreApplication::translate("settings_dialog", "Set DAZ and FTZ", nullptr));
        accurateGETLLAR->setText(QCoreApplication::translate("settings_dialog", "Accurate GETLLAR", nullptr));
        accurateSpuDMA->setText(QCoreApplication::translate("settings_dialog", "Accurate SPU DMA", nullptr));
        accurateClineStores->setText(QCoreApplication::translate("settings_dialog", "Accurate Cache Line Stores", nullptr));
        hookStFunc->setText(QCoreApplication::translate("settings_dialog", "Hook static functions", nullptr));
        perfReport->setText(QCoreApplication::translate("settings_dialog", "Enable Performance Report", nullptr));
        gb_accurate_ppu_128->setTitle(QCoreApplication::translate("settings_dialog", "Accurate PPU 128 Reservations", nullptr));
        gb_num_ppu_threads->setTitle(QCoreApplication::translate("settings_dialog", "PPU Thread Count", nullptr));
        gb_description_debug->setTitle(QCoreApplication::translate("settings_dialog", "Description", nullptr));
        description_debug->setText(QCoreApplication::translate("settings_dialog", "Point your mouse at an option to display a description in here.\n"
"\n"
"\n"
"", nullptr));
        tab_widget_settings->setTabText(tab_widget_settings->indexOf(debugTab), QCoreApplication::translate("settings_dialog", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings_dialog: public Ui_settings_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_DIALOG_H
