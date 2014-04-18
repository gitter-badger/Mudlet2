/********************************************************************************
** Form generated from reading UI file 'profile_preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_PREFERENCES_H
#define UI_PROFILE_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile_preferences
{
public:
    QVBoxLayout *verticalLayout_profile_preferences;
    QTabWidget *tabWidget_main;
    QWidget *tab_General;
    QGridLayout *gridLayout_19;
    QGroupBox *groupBox_Icon_sizes;
    QGridLayout *gridLayout_Icon_sizes;
    QLabel *label_MainIconSize;
    QSpinBox *MainIconSize;
    QLabel *label_TEFolderIconSize;
    QSpinBox *TEFolderIconSize;
    QCheckBox *showMenuBar;
    QCheckBox *showToolbar;
    QGroupBox *groupBox_Misc;
    QVBoxLayout *verticalLayout_Misc;
    QCheckBox *mAlertOnNewData;
    QCheckBox *mFORCE_SAVE_ON_EXIT;
    QCheckBox *mRawStreamDump;
    QCheckBox *acceptServerGUI;
    QGroupBox *groupBox_GMCP;
    QGridLayout *gridLayout_GMCP;
    QCheckBox *mEnableGMCP;
    QLabel *need_reconnect_for_gmcp;
    QSpacerItem *verticalSpacer_General;
    QGroupBox *groupBox_IRC;
    QHBoxLayout *horizontalLayout_IRC;
    QLabel *label_ircNick;
    QLineEdit *ircNick;
    QWidget *tab_input_line;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_Input;
    QGridLayout *gridLayout_Input;
    QCheckBox *USE_UNIX_EOL;
    QCheckBox *show_sent_text_checkbox;
    QCheckBox *auto_clear_input_line_checkbox;
    QLabel *label_command_separator;
    QLineEdit *command_separator_lineedit;
    QLabel *label_commandLineMinimumHeight;
    QSpinBox *commandLineMinimumHeight;
    QGroupBox *groupBox_Spell_check;
    QGridLayout *gridLayout_Spell_check;
    QLabel *label_dictList;
    QListWidget *dictList;
    QCheckBox *enableSpellCheck;
    QSpacerItem *verticalSpacer_Input_line;
    QWidget *tab_Main_display;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBox_Display_Border;
    QGridLayout *gridLayout_Display_Border;
    QLabel *label_topBorderHeight;
    QSpinBox *topBorderHeight;
    QLabel *label_leftBorderWidth;
    QSpinBox *leftBorderWidth;
    QLabel *label_bottomBorderHeight;
    QSpinBox *bottomBorderHeight;
    QLabel *label_rightBorderWidth;
    QSpinBox *rightBorderWidth;
    QPushButton *pushButtonBorderColor;
    QPushButton *pushButtonBorderImage;
    QGroupBox *groupBox_Word_wrapping;
    QHBoxLayout *horizontalLayout_Word_wrapping;
    QFrame *frame_Wrap_at;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pre_wrap_at;
    QSpinBox *wrap_at_spinBox;
    QLabel *label_post_wrap_at;
    QFrame *frame_Indent_wrapped;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_pre_Indent_wrapped;
    QSpinBox *indent_wrapped_spinBox;
    QLabel *label_post_indent_wrapped;
    QGroupBox *groupBox_Display_workarounds;
    QVBoxLayout *verticalLayout_Display_workarounds;
    QCheckBox *checkBox_USE_IRE_DRIVER_BUGFIX;
    QCheckBox *checkBox_USE_SMALL_SCREEN;
    QSpacerItem *verticalSpacer_Main_display;
    QGroupBox *groupBox_Font;
    QGridLayout *gridLayout_Font;
    QLabel *label_fontComboBox;
    QFontComboBox *fontComboBox;
    QLabel *label_fontSize;
    QComboBox *fontSize;
    QCheckBox *mNoAntiAlias;
    QGroupBox *groupbox_Doubleclick;
    QHBoxLayout *horizontalLayout_Doubleclick;
    QLabel *label_doubleclick_ignore;
    QLineEdit *doubleclick_ignore_lineedit;
    QWidget *tab_Color_view;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_Color_view;
    QGridLayout *gridLayout_Color_view;
    QLabel *label_pushButton_command_line_background_color;
    QLabel *label_pushButton_foreground_color;
    QPushButton *pushButton_foreground_color;
    QLabel *label_pushButton_background_color;
    QPushButton *pushButton_background_color;
    QLabel *label_pushButton_command_line_foreground_color;
    QPushButton *pushButton_command_line_foreground_color;
    QPushButton *pushButton_command_line_background_color;
    QLabel *label_pushButton_command_foreground_color;
    QPushButton *pushButton_command_foreground_color;
    QLabel *label_pushButton_command_background_color;
    QPushButton *pushButton_command_background_color;
    QGridLayout *gridLayout_Color_view_colors;
    QLabel *label_pushButton_black;
    QLabel *label_pushButton_red;
    QLabel *label_pushButton_green;
    QLabel *label_pushButton_blue;
    QLabel *label_pushButton_magenta;
    QLabel *label_pushButton_cyan;
    QLabel *label_pushButton_white;
    QPushButton *pushButton_black;
    QPushButton *pushButton_red;
    QPushButton *pushButton_green;
    QPushButton *pushButton_yellow;
    QPushButton *pushButton_blue;
    QPushButton *pushButton_magenta;
    QPushButton *pushButton_cyan;
    QPushButton *pushButton_white;
    QLabel *label_pushButton_yellow;
    QGridLayout *gridLayout_Color_view_Lcolors;
    QLabel *label_pushButton_Lblack;
    QLabel *label_pushButton_Lred;
    QLabel *label_pushButton_Lgreen;
    QLabel *label_pushButton_Lyellow;
    QLabel *label_pushButton_Lblue;
    QLabel *label_pushButton_Lmagenta;
    QLabel *label_pushButton_Lcyan;
    QLabel *label_pushButton_Lwhite;
    QPushButton *pushButton_Lblack;
    QPushButton *pushButton_Lred;
    QPushButton *pushButton_Lgreen;
    QPushButton *pushButton_Lyellow;
    QPushButton *pushButton_Lblue;
    QPushButton *pushButton_Lmagenta;
    QPushButton *pushButton_Lcyan;
    QPushButton *pushButton_Lwhite;
    QSpacerItem *verticalSpacer_Color_view;
    QLabel *label_groupBox_Color_view;
    QPushButton *reset_colors_button;
    QWidget *tab_Mapper;
    QGridLayout *gridLayout_24;
    QGroupBox *groupBox_Map_files;
    QGridLayout *gridLayout_Map_files;
    QLabel *label_load_map_button;
    QPushButton *load_map_button;
    QComboBox *combobox_mapper_profiles;
    QPushButton *copy_map_profile;
    QLabel *label_combobox_mapper_profiles;
    QPushButton *save_map_button;
    QLabel *label_save_map_button;
    QLabel *map_file_action;
    QGroupBox *groupBox_Map_download;
    QGridLayout *gridLayout_Map_download;
    QLabel *label_pushButton_DownloadMap;
    QPushButton *pushButton_DownloadMap;
    QGroupBox *groupBox_Map_backups;
    QGridLayout *gridLayout_Map_backups;
    QLabel *label_pre_comboBox_Map_backups;
    QComboBox *comboBox_Map_backups;
    QLabel *label_post_comboBox_Map_backups;
    QGroupBox *groupBox_Map_view;
    QGridLayout *gridLayout_Map_view;
    QCheckBox *mMapperUseAntiAlias;
    QSpacerItem *verticalSpacer_Mapper;
    QWidget *tab_Mapper_colors;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_Mapper_colors;
    QGridLayout *gridLayout_Mapper_colors_2;
    QSpacerItem *verticalSpacer_Mapper_colors;
    QPushButton *pushButton_background_color_2;
    QLabel *label_pushButton_foreground_color_2;
    QPushButton *pushButton_foreground_color_2;
    QLabel *label_pushButton_background_color_2;
    QGridLayout *gridLayout_Mapper_colors;
    QLabel *label_pushButton_black_2;
    QLabel *label_pushButton_red_2;
    QLabel *label_pushButton_green_2;
    QLabel *label_pushButton_blue_2;
    QLabel *label_pushButton_magenta_2;
    QLabel *label_pushButton_cyan_2;
    QLabel *label_pushButton_white_2;
    QPushButton *pushButton_black_2;
    QPushButton *pushButton_red_2;
    QPushButton *pushButton_green_2;
    QPushButton *pushButton_yellow_2;
    QPushButton *pushButton_blue_2;
    QPushButton *pushButton_magenta_2;
    QPushButton *pushButton_cyan_2;
    QPushButton *pushButton_white_2;
    QLabel *label_pushButton_yellow_2;
    QGridLayout *gridLayout_Mapper_Lcolors;
    QLabel *label_pushButton_Lblack_2;
    QLabel *label_pushButton_Lred_2;
    QLabel *label_pushButton_Lgreen_2;
    QLabel *label_pushButton_Lyellow_2;
    QLabel *label_pushButton_Lblue_2;
    QLabel *label_pushButton_Lmagenta_2;
    QLabel *label_pushButton_Lcyan_2;
    QLabel *label_pushButton_Lwhite_2;
    QPushButton *pushButton_Lblack_2;
    QPushButton *pushButton_Lred_2;
    QPushButton *pushButton_Lgreen_2;
    QPushButton *pushButton_Lyellow_2;
    QPushButton *pushButton_Lblue_2;
    QPushButton *pushButton_Lmagenta_2;
    QPushButton *pushButton_Lcyan_2;
    QPushButton *pushButton_Lwhite_2;
    QPushButton *reset_colors_button_2;
    QWidget *tab_Special_options;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_Special_options;
    QGroupBox *groupBox_Special_options;
    QVBoxLayout *verticalLayout_Special_options;
    QCheckBox *mFORCE_MCCP_OFF;
    QCheckBox *mFORCE_GA_OFF;
    QCheckBox *checkBox_mUSE_FORCE_LF_AFTER_PROMPT;
    QCheckBox *mFORCE_MXP_NEGOTIATION_OFF;
    QLabel *need_reconnect_for_specialoption;
    QGroupBox *groupBox_Debug;
    QVBoxLayout *verticalLayout_debug;
    QWidget *widget_bottomButtons;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *profile_preferences)
    {
        if (profile_preferences->objectName().isEmpty())
            profile_preferences->setObjectName(QStringLiteral("profile_preferences"));
        profile_preferences->resize(763, 586);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(profile_preferences->sizePolicy().hasHeightForWidth());
        profile_preferences->setSizePolicy(sizePolicy);
        verticalLayout_profile_preferences = new QVBoxLayout(profile_preferences);
        verticalLayout_profile_preferences->setObjectName(QStringLiteral("verticalLayout_profile_preferences"));
        tabWidget_main = new QTabWidget(profile_preferences);
        tabWidget_main->setObjectName(QStringLiteral("tabWidget_main"));
        tabWidget_main->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget_main->sizePolicy().hasHeightForWidth());
        tabWidget_main->setSizePolicy(sizePolicy1);
        tabWidget_main->setStyleSheet(QStringLiteral(""));
        tabWidget_main->setTabPosition(QTabWidget::North);
        tabWidget_main->setTabShape(QTabWidget::Rounded);
        tab_General = new QWidget();
        tab_General->setObjectName(QStringLiteral("tab_General"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab_General->sizePolicy().hasHeightForWidth());
        tab_General->setSizePolicy(sizePolicy2);
        gridLayout_19 = new QGridLayout(tab_General);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        groupBox_Icon_sizes = new QGroupBox(tab_General);
        groupBox_Icon_sizes->setObjectName(QStringLiteral("groupBox_Icon_sizes"));
        sizePolicy2.setHeightForWidth(groupBox_Icon_sizes->sizePolicy().hasHeightForWidth());
        groupBox_Icon_sizes->setSizePolicy(sizePolicy2);
        gridLayout_Icon_sizes = new QGridLayout(groupBox_Icon_sizes);
        gridLayout_Icon_sizes->setObjectName(QStringLiteral("gridLayout_Icon_sizes"));
        label_MainIconSize = new QLabel(groupBox_Icon_sizes);
        label_MainIconSize->setObjectName(QStringLiteral("label_MainIconSize"));

        gridLayout_Icon_sizes->addWidget(label_MainIconSize, 0, 0, 1, 1);

        MainIconSize = new QSpinBox(groupBox_Icon_sizes);
        MainIconSize->setObjectName(QStringLiteral("MainIconSize"));
        MainIconSize->setMinimum(1);
        MainIconSize->setMaximum(4);
        MainIconSize->setValue(3);

        gridLayout_Icon_sizes->addWidget(MainIconSize, 0, 1, 1, 1);

        label_TEFolderIconSize = new QLabel(groupBox_Icon_sizes);
        label_TEFolderIconSize->setObjectName(QStringLiteral("label_TEFolderIconSize"));

        gridLayout_Icon_sizes->addWidget(label_TEFolderIconSize, 1, 0, 1, 1);

        TEFolderIconSize = new QSpinBox(groupBox_Icon_sizes);
        TEFolderIconSize->setObjectName(QStringLiteral("TEFolderIconSize"));
        TEFolderIconSize->setMinimum(1);
        TEFolderIconSize->setMaximum(4);
        TEFolderIconSize->setValue(3);

        gridLayout_Icon_sizes->addWidget(TEFolderIconSize, 1, 1, 1, 1);

        showMenuBar = new QCheckBox(groupBox_Icon_sizes);
        showMenuBar->setObjectName(QStringLiteral("showMenuBar"));

        gridLayout_Icon_sizes->addWidget(showMenuBar, 2, 0, 1, 1);

        showToolbar = new QCheckBox(groupBox_Icon_sizes);
        showToolbar->setObjectName(QStringLiteral("showToolbar"));

        gridLayout_Icon_sizes->addWidget(showToolbar, 3, 0, 1, 1);


        gridLayout_19->addWidget(groupBox_Icon_sizes, 0, 0, 1, 1);

        groupBox_Misc = new QGroupBox(tab_General);
        groupBox_Misc->setObjectName(QStringLiteral("groupBox_Misc"));
        verticalLayout_Misc = new QVBoxLayout(groupBox_Misc);
        verticalLayout_Misc->setObjectName(QStringLiteral("verticalLayout_Misc"));
        mAlertOnNewData = new QCheckBox(groupBox_Misc);
        mAlertOnNewData->setObjectName(QStringLiteral("mAlertOnNewData"));

        verticalLayout_Misc->addWidget(mAlertOnNewData);

        mFORCE_SAVE_ON_EXIT = new QCheckBox(groupBox_Misc);
        mFORCE_SAVE_ON_EXIT->setObjectName(QStringLiteral("mFORCE_SAVE_ON_EXIT"));

        verticalLayout_Misc->addWidget(mFORCE_SAVE_ON_EXIT);

        mRawStreamDump = new QCheckBox(groupBox_Misc);
        mRawStreamDump->setObjectName(QStringLiteral("mRawStreamDump"));

        verticalLayout_Misc->addWidget(mRawStreamDump);

        acceptServerGUI = new QCheckBox(groupBox_Misc);
        acceptServerGUI->setObjectName(QStringLiteral("acceptServerGUI"));

        verticalLayout_Misc->addWidget(acceptServerGUI);


        gridLayout_19->addWidget(groupBox_Misc, 1, 0, 1, 1);

        groupBox_GMCP = new QGroupBox(tab_General);
        groupBox_GMCP->setObjectName(QStringLiteral("groupBox_GMCP"));
        gridLayout_GMCP = new QGridLayout(groupBox_GMCP);
        gridLayout_GMCP->setObjectName(QStringLiteral("gridLayout_GMCP"));
        mEnableGMCP = new QCheckBox(groupBox_GMCP);
        mEnableGMCP->setObjectName(QStringLiteral("mEnableGMCP"));

        gridLayout_GMCP->addWidget(mEnableGMCP, 0, 0, 1, 1);

        need_reconnect_for_gmcp = new QLabel(groupBox_GMCP);
        need_reconnect_for_gmcp->setObjectName(QStringLiteral("need_reconnect_for_gmcp"));
        need_reconnect_for_gmcp->setEnabled(true);
        QFont font;
        font.setPointSize(8);
        need_reconnect_for_gmcp->setFont(font);
        need_reconnect_for_gmcp->setMouseTracking(false);
        need_reconnect_for_gmcp->setTextFormat(Qt::AutoText);
        need_reconnect_for_gmcp->setWordWrap(true);

        gridLayout_GMCP->addWidget(need_reconnect_for_gmcp, 1, 0, 1, 1);


        gridLayout_19->addWidget(groupBox_GMCP, 3, 0, 1, 1);

        verticalSpacer_General = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_General, 6, 0, 1, 1);

        groupBox_IRC = new QGroupBox(tab_General);
        groupBox_IRC->setObjectName(QStringLiteral("groupBox_IRC"));
        horizontalLayout_IRC = new QHBoxLayout(groupBox_IRC);
        horizontalLayout_IRC->setObjectName(QStringLiteral("horizontalLayout_IRC"));
        label_ircNick = new QLabel(groupBox_IRC);
        label_ircNick->setObjectName(QStringLiteral("label_ircNick"));

        horizontalLayout_IRC->addWidget(label_ircNick);

        ircNick = new QLineEdit(groupBox_IRC);
        ircNick->setObjectName(QStringLiteral("ircNick"));

        horizontalLayout_IRC->addWidget(ircNick);

        ircNick->raise();
        label_ircNick->raise();

        gridLayout_19->addWidget(groupBox_IRC, 4, 0, 1, 1);

        tabWidget_main->addTab(tab_General, QString());
        tab_input_line = new QWidget();
        tab_input_line->setObjectName(QStringLiteral("tab_input_line"));
        sizePolicy2.setHeightForWidth(tab_input_line->sizePolicy().hasHeightForWidth());
        tab_input_line->setSizePolicy(sizePolicy2);
        gridLayout_11 = new QGridLayout(tab_input_line);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBox_Input = new QGroupBox(tab_input_line);
        groupBox_Input->setObjectName(QStringLiteral("groupBox_Input"));
        groupBox_Input->setEnabled(true);
        gridLayout_Input = new QGridLayout(groupBox_Input);
        gridLayout_Input->setObjectName(QStringLiteral("gridLayout_Input"));
        USE_UNIX_EOL = new QCheckBox(groupBox_Input);
        USE_UNIX_EOL->setObjectName(QStringLiteral("USE_UNIX_EOL"));
        USE_UNIX_EOL->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_Input->addWidget(USE_UNIX_EOL, 0, 0, 1, 2);

        show_sent_text_checkbox = new QCheckBox(groupBox_Input);
        show_sent_text_checkbox->setObjectName(QStringLiteral("show_sent_text_checkbox"));
        show_sent_text_checkbox->setEnabled(true);

        gridLayout_Input->addWidget(show_sent_text_checkbox, 1, 0, 1, 2);

        auto_clear_input_line_checkbox = new QCheckBox(groupBox_Input);
        auto_clear_input_line_checkbox->setObjectName(QStringLiteral("auto_clear_input_line_checkbox"));
        auto_clear_input_line_checkbox->setEnabled(true);

        gridLayout_Input->addWidget(auto_clear_input_line_checkbox, 2, 0, 1, 3);

        label_command_separator = new QLabel(groupBox_Input);
        label_command_separator->setObjectName(QStringLiteral("label_command_separator"));

        gridLayout_Input->addWidget(label_command_separator, 3, 0, 1, 1);

        command_separator_lineedit = new QLineEdit(groupBox_Input);
        command_separator_lineedit->setObjectName(QStringLiteral("command_separator_lineedit"));
        command_separator_lineedit->setEnabled(true);

        gridLayout_Input->addWidget(command_separator_lineedit, 3, 1, 1, 2);

        label_commandLineMinimumHeight = new QLabel(groupBox_Input);
        label_commandLineMinimumHeight->setObjectName(QStringLiteral("label_commandLineMinimumHeight"));

        gridLayout_Input->addWidget(label_commandLineMinimumHeight, 4, 0, 1, 1);

        commandLineMinimumHeight = new QSpinBox(groupBox_Input);
        commandLineMinimumHeight->setObjectName(QStringLiteral("commandLineMinimumHeight"));
        commandLineMinimumHeight->setMaximum(300);

        gridLayout_Input->addWidget(commandLineMinimumHeight, 4, 1, 1, 2);


        gridLayout_11->addWidget(groupBox_Input, 0, 0, 1, 1);

        groupBox_Spell_check = new QGroupBox(tab_input_line);
        groupBox_Spell_check->setObjectName(QStringLiteral("groupBox_Spell_check"));
        gridLayout_Spell_check = new QGridLayout(groupBox_Spell_check);
        gridLayout_Spell_check->setObjectName(QStringLiteral("gridLayout_Spell_check"));
        label_dictList = new QLabel(groupBox_Spell_check);
        label_dictList->setObjectName(QStringLiteral("label_dictList"));

        gridLayout_Spell_check->addWidget(label_dictList, 0, 0, 1, 1);

        dictList = new QListWidget(groupBox_Spell_check);
        dictList->setObjectName(QStringLiteral("dictList"));

        gridLayout_Spell_check->addWidget(dictList, 0, 1, 1, 1);

        enableSpellCheck = new QCheckBox(groupBox_Spell_check);
        enableSpellCheck->setObjectName(QStringLiteral("enableSpellCheck"));
        enableSpellCheck->setChecked(true);

        gridLayout_Spell_check->addWidget(enableSpellCheck, 1, 0, 1, 2);


        gridLayout_11->addWidget(groupBox_Spell_check, 1, 0, 1, 1);

        verticalSpacer_Input_line = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_Input_line, 2, 0, 1, 1);

        tabWidget_main->addTab(tab_input_line, QString());
        tab_Main_display = new QWidget();
        tab_Main_display->setObjectName(QStringLiteral("tab_Main_display"));
        sizePolicy2.setHeightForWidth(tab_Main_display->sizePolicy().hasHeightForWidth());
        tab_Main_display->setSizePolicy(sizePolicy2);
        gridLayout_17 = new QGridLayout(tab_Main_display);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        groupBox_Display_Border = new QGroupBox(tab_Main_display);
        groupBox_Display_Border->setObjectName(QStringLiteral("groupBox_Display_Border"));
        sizePolicy2.setHeightForWidth(groupBox_Display_Border->sizePolicy().hasHeightForWidth());
        groupBox_Display_Border->setSizePolicy(sizePolicy2);
        gridLayout_Display_Border = new QGridLayout(groupBox_Display_Border);
        gridLayout_Display_Border->setObjectName(QStringLiteral("gridLayout_Display_Border"));
        label_topBorderHeight = new QLabel(groupBox_Display_Border);
        label_topBorderHeight->setObjectName(QStringLiteral("label_topBorderHeight"));
        sizePolicy1.setHeightForWidth(label_topBorderHeight->sizePolicy().hasHeightForWidth());
        label_topBorderHeight->setSizePolicy(sizePolicy1);
        label_topBorderHeight->setMaximumSize(QSize(200, 16777215));

        gridLayout_Display_Border->addWidget(label_topBorderHeight, 0, 0, 1, 1);

        topBorderHeight = new QSpinBox(groupBox_Display_Border);
        topBorderHeight->setObjectName(QStringLiteral("topBorderHeight"));
        sizePolicy.setHeightForWidth(topBorderHeight->sizePolicy().hasHeightForWidth());
        topBorderHeight->setSizePolicy(sizePolicy);
        topBorderHeight->setMinimum(0);
        topBorderHeight->setMaximum(2000);
        topBorderHeight->setValue(0);

        gridLayout_Display_Border->addWidget(topBorderHeight, 0, 1, 1, 1);

        label_leftBorderWidth = new QLabel(groupBox_Display_Border);
        label_leftBorderWidth->setObjectName(QStringLiteral("label_leftBorderWidth"));
        sizePolicy1.setHeightForWidth(label_leftBorderWidth->sizePolicy().hasHeightForWidth());
        label_leftBorderWidth->setSizePolicy(sizePolicy1);
        label_leftBorderWidth->setMaximumSize(QSize(200, 16777215));

        gridLayout_Display_Border->addWidget(label_leftBorderWidth, 0, 2, 1, 1);

        leftBorderWidth = new QSpinBox(groupBox_Display_Border);
        leftBorderWidth->setObjectName(QStringLiteral("leftBorderWidth"));
        sizePolicy.setHeightForWidth(leftBorderWidth->sizePolicy().hasHeightForWidth());
        leftBorderWidth->setSizePolicy(sizePolicy);
        leftBorderWidth->setMinimum(0);
        leftBorderWidth->setMaximum(2000);
        leftBorderWidth->setValue(0);

        gridLayout_Display_Border->addWidget(leftBorderWidth, 0, 3, 1, 1);

        label_bottomBorderHeight = new QLabel(groupBox_Display_Border);
        label_bottomBorderHeight->setObjectName(QStringLiteral("label_bottomBorderHeight"));
        sizePolicy1.setHeightForWidth(label_bottomBorderHeight->sizePolicy().hasHeightForWidth());
        label_bottomBorderHeight->setSizePolicy(sizePolicy1);
        label_bottomBorderHeight->setMaximumSize(QSize(200, 16777215));

        gridLayout_Display_Border->addWidget(label_bottomBorderHeight, 1, 0, 1, 1);

        bottomBorderHeight = new QSpinBox(groupBox_Display_Border);
        bottomBorderHeight->setObjectName(QStringLiteral("bottomBorderHeight"));
        sizePolicy.setHeightForWidth(bottomBorderHeight->sizePolicy().hasHeightForWidth());
        bottomBorderHeight->setSizePolicy(sizePolicy);
        bottomBorderHeight->setMinimum(0);
        bottomBorderHeight->setMaximum(2000);
        bottomBorderHeight->setValue(0);

        gridLayout_Display_Border->addWidget(bottomBorderHeight, 1, 1, 1, 1);

        label_rightBorderWidth = new QLabel(groupBox_Display_Border);
        label_rightBorderWidth->setObjectName(QStringLiteral("label_rightBorderWidth"));
        sizePolicy1.setHeightForWidth(label_rightBorderWidth->sizePolicy().hasHeightForWidth());
        label_rightBorderWidth->setSizePolicy(sizePolicy1);
        label_rightBorderWidth->setMaximumSize(QSize(200, 16777215));

        gridLayout_Display_Border->addWidget(label_rightBorderWidth, 1, 2, 1, 1);

        rightBorderWidth = new QSpinBox(groupBox_Display_Border);
        rightBorderWidth->setObjectName(QStringLiteral("rightBorderWidth"));
        sizePolicy.setHeightForWidth(rightBorderWidth->sizePolicy().hasHeightForWidth());
        rightBorderWidth->setSizePolicy(sizePolicy);
        rightBorderWidth->setMinimum(0);
        rightBorderWidth->setMaximum(2000);
        rightBorderWidth->setValue(0);

        gridLayout_Display_Border->addWidget(rightBorderWidth, 1, 3, 1, 1);

        pushButtonBorderColor = new QPushButton(groupBox_Display_Border);
        pushButtonBorderColor->setObjectName(QStringLiteral("pushButtonBorderColor"));
        pushButtonBorderColor->setEnabled(false);

        gridLayout_Display_Border->addWidget(pushButtonBorderColor, 2, 0, 1, 2);

        pushButtonBorderImage = new QPushButton(groupBox_Display_Border);
        pushButtonBorderImage->setObjectName(QStringLiteral("pushButtonBorderImage"));
        pushButtonBorderImage->setEnabled(false);

        gridLayout_Display_Border->addWidget(pushButtonBorderImage, 2, 2, 1, 2);


        gridLayout_17->addWidget(groupBox_Display_Border, 1, 0, 1, 1);

        groupBox_Word_wrapping = new QGroupBox(tab_Main_display);
        groupBox_Word_wrapping->setObjectName(QStringLiteral("groupBox_Word_wrapping"));
        sizePolicy2.setHeightForWidth(groupBox_Word_wrapping->sizePolicy().hasHeightForWidth());
        groupBox_Word_wrapping->setSizePolicy(sizePolicy2);
        groupBox_Word_wrapping->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_Word_wrapping = new QHBoxLayout(groupBox_Word_wrapping);
        horizontalLayout_Word_wrapping->setObjectName(QStringLiteral("horizontalLayout_Word_wrapping"));
        frame_Wrap_at = new QFrame(groupBox_Word_wrapping);
        frame_Wrap_at->setObjectName(QStringLiteral("frame_Wrap_at"));
        frame_Wrap_at->setFrameShape(QFrame::NoFrame);
        horizontalLayout_3 = new QHBoxLayout(frame_Wrap_at);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_pre_wrap_at = new QLabel(frame_Wrap_at);
        label_pre_wrap_at->setObjectName(QStringLiteral("label_pre_wrap_at"));
        sizePolicy.setHeightForWidth(label_pre_wrap_at->sizePolicy().hasHeightForWidth());
        label_pre_wrap_at->setSizePolicy(sizePolicy);
        label_pre_wrap_at->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(label_pre_wrap_at);

        wrap_at_spinBox = new QSpinBox(frame_Wrap_at);
        wrap_at_spinBox->setObjectName(QStringLiteral("wrap_at_spinBox"));
        wrap_at_spinBox->setMinimum(1);
        wrap_at_spinBox->setMaximum(999999);
        wrap_at_spinBox->setValue(90);

        horizontalLayout_3->addWidget(wrap_at_spinBox);

        label_post_wrap_at = new QLabel(frame_Wrap_at);
        label_post_wrap_at->setObjectName(QStringLiteral("label_post_wrap_at"));

        horizontalLayout_3->addWidget(label_post_wrap_at);


        horizontalLayout_Word_wrapping->addWidget(frame_Wrap_at);

        frame_Indent_wrapped = new QFrame(groupBox_Word_wrapping);
        frame_Indent_wrapped->setObjectName(QStringLiteral("frame_Indent_wrapped"));
        frame_Indent_wrapped->setFrameShape(QFrame::NoFrame);
        horizontalLayout_5 = new QHBoxLayout(frame_Indent_wrapped);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_pre_Indent_wrapped = new QLabel(frame_Indent_wrapped);
        label_pre_Indent_wrapped->setObjectName(QStringLiteral("label_pre_Indent_wrapped"));
        sizePolicy.setHeightForWidth(label_pre_Indent_wrapped->sizePolicy().hasHeightForWidth());
        label_pre_Indent_wrapped->setSizePolicy(sizePolicy);
        label_pre_Indent_wrapped->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(label_pre_Indent_wrapped);

        indent_wrapped_spinBox = new QSpinBox(frame_Indent_wrapped);
        indent_wrapped_spinBox->setObjectName(QStringLiteral("indent_wrapped_spinBox"));
        indent_wrapped_spinBox->setMinimum(0);
        indent_wrapped_spinBox->setMaximum(99999);
        indent_wrapped_spinBox->setValue(0);

        horizontalLayout_5->addWidget(indent_wrapped_spinBox);

        label_post_indent_wrapped = new QLabel(frame_Indent_wrapped);
        label_post_indent_wrapped->setObjectName(QStringLiteral("label_post_indent_wrapped"));

        horizontalLayout_5->addWidget(label_post_indent_wrapped);


        horizontalLayout_Word_wrapping->addWidget(frame_Indent_wrapped);


        gridLayout_17->addWidget(groupBox_Word_wrapping, 2, 0, 1, 1);

        groupBox_Display_workarounds = new QGroupBox(tab_Main_display);
        groupBox_Display_workarounds->setObjectName(QStringLiteral("groupBox_Display_workarounds"));
        verticalLayout_Display_workarounds = new QVBoxLayout(groupBox_Display_workarounds);
        verticalLayout_Display_workarounds->setObjectName(QStringLiteral("verticalLayout_Display_workarounds"));
        checkBox_USE_IRE_DRIVER_BUGFIX = new QCheckBox(groupBox_Display_workarounds);
        checkBox_USE_IRE_DRIVER_BUGFIX->setObjectName(QStringLiteral("checkBox_USE_IRE_DRIVER_BUGFIX"));

        verticalLayout_Display_workarounds->addWidget(checkBox_USE_IRE_DRIVER_BUGFIX);

        checkBox_USE_SMALL_SCREEN = new QCheckBox(groupBox_Display_workarounds);
        checkBox_USE_SMALL_SCREEN->setObjectName(QStringLiteral("checkBox_USE_SMALL_SCREEN"));

        verticalLayout_Display_workarounds->addWidget(checkBox_USE_SMALL_SCREEN);


        gridLayout_17->addWidget(groupBox_Display_workarounds, 4, 0, 1, 1);

        verticalSpacer_Main_display = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_Main_display, 5, 0, 1, 1);

        groupBox_Font = new QGroupBox(tab_Main_display);
        groupBox_Font->setObjectName(QStringLiteral("groupBox_Font"));
        sizePolicy2.setHeightForWidth(groupBox_Font->sizePolicy().hasHeightForWidth());
        groupBox_Font->setSizePolicy(sizePolicy2);
        gridLayout_Font = new QGridLayout(groupBox_Font);
        gridLayout_Font->setObjectName(QStringLiteral("gridLayout_Font"));
        label_fontComboBox = new QLabel(groupBox_Font);
        label_fontComboBox->setObjectName(QStringLiteral("label_fontComboBox"));

        gridLayout_Font->addWidget(label_fontComboBox, 0, 0, 1, 1);

        fontComboBox = new QFontComboBox(groupBox_Font);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy3);
        fontComboBox->setEditable(false);
        fontComboBox->setFontFilters(QFontComboBox::MonospacedFonts);

        gridLayout_Font->addWidget(fontComboBox, 0, 1, 1, 1);

        label_fontSize = new QLabel(groupBox_Font);
        label_fontSize->setObjectName(QStringLiteral("label_fontSize"));

        gridLayout_Font->addWidget(label_fontSize, 0, 2, 1, 1);

        fontSize = new QComboBox(groupBox_Font);
        fontSize->setObjectName(QStringLiteral("fontSize"));

        gridLayout_Font->addWidget(fontSize, 0, 3, 1, 1);

        mNoAntiAlias = new QCheckBox(groupBox_Font);
        mNoAntiAlias->setObjectName(QStringLiteral("mNoAntiAlias"));

        gridLayout_Font->addWidget(mNoAntiAlias, 1, 0, 1, 2);


        gridLayout_17->addWidget(groupBox_Font, 0, 0, 1, 1);

        groupbox_Doubleclick = new QGroupBox(tab_Main_display);
        groupbox_Doubleclick->setObjectName(QStringLiteral("groupbox_Doubleclick"));
        horizontalLayout_Doubleclick = new QHBoxLayout(groupbox_Doubleclick);
        horizontalLayout_Doubleclick->setObjectName(QStringLiteral("horizontalLayout_Doubleclick"));
        label_doubleclick_ignore = new QLabel(groupbox_Doubleclick);
        label_doubleclick_ignore->setObjectName(QStringLiteral("label_doubleclick_ignore"));

        horizontalLayout_Doubleclick->addWidget(label_doubleclick_ignore);

        doubleclick_ignore_lineedit = new QLineEdit(groupbox_Doubleclick);
        doubleclick_ignore_lineedit->setObjectName(QStringLiteral("doubleclick_ignore_lineedit"));

        horizontalLayout_Doubleclick->addWidget(doubleclick_ignore_lineedit);


        gridLayout_17->addWidget(groupbox_Doubleclick, 3, 0, 1, 1);

        tabWidget_main->addTab(tab_Main_display, QString());
        tab_Color_view = new QWidget();
        tab_Color_view->setObjectName(QStringLiteral("tab_Color_view"));
        gridLayout_2 = new QGridLayout(tab_Color_view);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_Color_view = new QGroupBox(tab_Color_view);
        groupBox_Color_view->setObjectName(QStringLiteral("groupBox_Color_view"));
        gridLayout_Color_view = new QGridLayout(groupBox_Color_view);
        gridLayout_Color_view->setObjectName(QStringLiteral("gridLayout_Color_view"));
        label_pushButton_command_line_background_color = new QLabel(groupBox_Color_view);
        label_pushButton_command_line_background_color->setObjectName(QStringLiteral("label_pushButton_command_line_background_color"));

        gridLayout_Color_view->addWidget(label_pushButton_command_line_background_color, 1, 2, 1, 1);

        label_pushButton_foreground_color = new QLabel(groupBox_Color_view);
        label_pushButton_foreground_color->setObjectName(QStringLiteral("label_pushButton_foreground_color"));

        gridLayout_Color_view->addWidget(label_pushButton_foreground_color, 0, 0, 1, 1);

        pushButton_foreground_color = new QPushButton(groupBox_Color_view);
        pushButton_foreground_color->setObjectName(QStringLiteral("pushButton_foreground_color"));
        pushButton_foreground_color->setAutoFillBackground(true);
        pushButton_foreground_color->setStyleSheet(QStringLiteral(""));

        gridLayout_Color_view->addWidget(pushButton_foreground_color, 0, 1, 1, 1);

        label_pushButton_background_color = new QLabel(groupBox_Color_view);
        label_pushButton_background_color->setObjectName(QStringLiteral("label_pushButton_background_color"));

        gridLayout_Color_view->addWidget(label_pushButton_background_color, 0, 2, 1, 1);

        pushButton_background_color = new QPushButton(groupBox_Color_view);
        pushButton_background_color->setObjectName(QStringLiteral("pushButton_background_color"));
        pushButton_background_color->setAutoFillBackground(true);

        gridLayout_Color_view->addWidget(pushButton_background_color, 0, 3, 1, 1);

        label_pushButton_command_line_foreground_color = new QLabel(groupBox_Color_view);
        label_pushButton_command_line_foreground_color->setObjectName(QStringLiteral("label_pushButton_command_line_foreground_color"));

        gridLayout_Color_view->addWidget(label_pushButton_command_line_foreground_color, 1, 0, 1, 1);

        pushButton_command_line_foreground_color = new QPushButton(groupBox_Color_view);
        pushButton_command_line_foreground_color->setObjectName(QStringLiteral("pushButton_command_line_foreground_color"));

        gridLayout_Color_view->addWidget(pushButton_command_line_foreground_color, 1, 1, 1, 1);

        pushButton_command_line_background_color = new QPushButton(groupBox_Color_view);
        pushButton_command_line_background_color->setObjectName(QStringLiteral("pushButton_command_line_background_color"));

        gridLayout_Color_view->addWidget(pushButton_command_line_background_color, 1, 3, 1, 1);

        label_pushButton_command_foreground_color = new QLabel(groupBox_Color_view);
        label_pushButton_command_foreground_color->setObjectName(QStringLiteral("label_pushButton_command_foreground_color"));

        gridLayout_Color_view->addWidget(label_pushButton_command_foreground_color, 2, 0, 1, 1);

        pushButton_command_foreground_color = new QPushButton(groupBox_Color_view);
        pushButton_command_foreground_color->setObjectName(QStringLiteral("pushButton_command_foreground_color"));
        pushButton_command_foreground_color->setAutoFillBackground(true);

        gridLayout_Color_view->addWidget(pushButton_command_foreground_color, 2, 1, 1, 1);

        label_pushButton_command_background_color = new QLabel(groupBox_Color_view);
        label_pushButton_command_background_color->setObjectName(QStringLiteral("label_pushButton_command_background_color"));

        gridLayout_Color_view->addWidget(label_pushButton_command_background_color, 2, 2, 1, 1);

        pushButton_command_background_color = new QPushButton(groupBox_Color_view);
        pushButton_command_background_color->setObjectName(QStringLiteral("pushButton_command_background_color"));
        pushButton_command_background_color->setAutoFillBackground(true);

        gridLayout_Color_view->addWidget(pushButton_command_background_color, 2, 3, 1, 1);

        gridLayout_Color_view_colors = new QGridLayout();
        gridLayout_Color_view_colors->setObjectName(QStringLiteral("gridLayout_Color_view_colors"));
        label_pushButton_black = new QLabel(groupBox_Color_view);
        label_pushButton_black->setObjectName(QStringLiteral("label_pushButton_black"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_black, 0, 0, 1, 1);

        label_pushButton_red = new QLabel(groupBox_Color_view);
        label_pushButton_red->setObjectName(QStringLiteral("label_pushButton_red"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_red, 1, 0, 1, 1);

        label_pushButton_green = new QLabel(groupBox_Color_view);
        label_pushButton_green->setObjectName(QStringLiteral("label_pushButton_green"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_green, 2, 0, 1, 1);

        label_pushButton_blue = new QLabel(groupBox_Color_view);
        label_pushButton_blue->setObjectName(QStringLiteral("label_pushButton_blue"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_blue, 4, 0, 1, 1);

        label_pushButton_magenta = new QLabel(groupBox_Color_view);
        label_pushButton_magenta->setObjectName(QStringLiteral("label_pushButton_magenta"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_magenta, 5, 0, 1, 1);

        label_pushButton_cyan = new QLabel(groupBox_Color_view);
        label_pushButton_cyan->setObjectName(QStringLiteral("label_pushButton_cyan"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_cyan, 6, 0, 1, 1);

        label_pushButton_white = new QLabel(groupBox_Color_view);
        label_pushButton_white->setObjectName(QStringLiteral("label_pushButton_white"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_white, 7, 0, 1, 1);

        pushButton_black = new QPushButton(groupBox_Color_view);
        pushButton_black->setObjectName(QStringLiteral("pushButton_black"));
        pushButton_black->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_black, 0, 1, 1, 1);

        pushButton_red = new QPushButton(groupBox_Color_view);
        pushButton_red->setObjectName(QStringLiteral("pushButton_red"));
        pushButton_red->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_red, 1, 1, 1, 1);

        pushButton_green = new QPushButton(groupBox_Color_view);
        pushButton_green->setObjectName(QStringLiteral("pushButton_green"));
        pushButton_green->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_green, 2, 1, 1, 1);

        pushButton_yellow = new QPushButton(groupBox_Color_view);
        pushButton_yellow->setObjectName(QStringLiteral("pushButton_yellow"));
        pushButton_yellow->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_yellow, 3, 1, 1, 1);

        pushButton_blue = new QPushButton(groupBox_Color_view);
        pushButton_blue->setObjectName(QStringLiteral("pushButton_blue"));
        pushButton_blue->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_blue, 4, 1, 1, 1);

        pushButton_magenta = new QPushButton(groupBox_Color_view);
        pushButton_magenta->setObjectName(QStringLiteral("pushButton_magenta"));
        pushButton_magenta->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_magenta, 5, 1, 1, 1);

        pushButton_cyan = new QPushButton(groupBox_Color_view);
        pushButton_cyan->setObjectName(QStringLiteral("pushButton_cyan"));
        pushButton_cyan->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_cyan, 6, 1, 1, 1);

        pushButton_white = new QPushButton(groupBox_Color_view);
        pushButton_white->setObjectName(QStringLiteral("pushButton_white"));
        pushButton_white->setAutoFillBackground(true);

        gridLayout_Color_view_colors->addWidget(pushButton_white, 7, 1, 1, 1);

        label_pushButton_yellow = new QLabel(groupBox_Color_view);
        label_pushButton_yellow->setObjectName(QStringLiteral("label_pushButton_yellow"));

        gridLayout_Color_view_colors->addWidget(label_pushButton_yellow, 3, 0, 1, 1);


        gridLayout_Color_view->addLayout(gridLayout_Color_view_colors, 4, 0, 1, 2);

        gridLayout_Color_view_Lcolors = new QGridLayout();
        gridLayout_Color_view_Lcolors->setObjectName(QStringLiteral("gridLayout_Color_view_Lcolors"));
        label_pushButton_Lblack = new QLabel(groupBox_Color_view);
        label_pushButton_Lblack->setObjectName(QStringLiteral("label_pushButton_Lblack"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lblack, 0, 0, 1, 1);

        label_pushButton_Lred = new QLabel(groupBox_Color_view);
        label_pushButton_Lred->setObjectName(QStringLiteral("label_pushButton_Lred"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lred, 1, 0, 1, 1);

        label_pushButton_Lgreen = new QLabel(groupBox_Color_view);
        label_pushButton_Lgreen->setObjectName(QStringLiteral("label_pushButton_Lgreen"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lgreen, 2, 0, 1, 1);

        label_pushButton_Lyellow = new QLabel(groupBox_Color_view);
        label_pushButton_Lyellow->setObjectName(QStringLiteral("label_pushButton_Lyellow"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lyellow, 3, 0, 1, 1);

        label_pushButton_Lblue = new QLabel(groupBox_Color_view);
        label_pushButton_Lblue->setObjectName(QStringLiteral("label_pushButton_Lblue"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lblue, 4, 0, 1, 1);

        label_pushButton_Lmagenta = new QLabel(groupBox_Color_view);
        label_pushButton_Lmagenta->setObjectName(QStringLiteral("label_pushButton_Lmagenta"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lmagenta, 5, 0, 1, 1);

        label_pushButton_Lcyan = new QLabel(groupBox_Color_view);
        label_pushButton_Lcyan->setObjectName(QStringLiteral("label_pushButton_Lcyan"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lcyan, 6, 0, 1, 1);

        label_pushButton_Lwhite = new QLabel(groupBox_Color_view);
        label_pushButton_Lwhite->setObjectName(QStringLiteral("label_pushButton_Lwhite"));

        gridLayout_Color_view_Lcolors->addWidget(label_pushButton_Lwhite, 7, 0, 1, 1);

        pushButton_Lblack = new QPushButton(groupBox_Color_view);
        pushButton_Lblack->setObjectName(QStringLiteral("pushButton_Lblack"));
        pushButton_Lblack->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lblack, 0, 1, 1, 1);

        pushButton_Lred = new QPushButton(groupBox_Color_view);
        pushButton_Lred->setObjectName(QStringLiteral("pushButton_Lred"));
        pushButton_Lred->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lred, 1, 1, 1, 1);

        pushButton_Lgreen = new QPushButton(groupBox_Color_view);
        pushButton_Lgreen->setObjectName(QStringLiteral("pushButton_Lgreen"));
        pushButton_Lgreen->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lgreen, 2, 1, 1, 1);

        pushButton_Lyellow = new QPushButton(groupBox_Color_view);
        pushButton_Lyellow->setObjectName(QStringLiteral("pushButton_Lyellow"));
        pushButton_Lyellow->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lyellow, 3, 1, 1, 1);

        pushButton_Lblue = new QPushButton(groupBox_Color_view);
        pushButton_Lblue->setObjectName(QStringLiteral("pushButton_Lblue"));
        pushButton_Lblue->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lblue, 4, 1, 1, 1);

        pushButton_Lmagenta = new QPushButton(groupBox_Color_view);
        pushButton_Lmagenta->setObjectName(QStringLiteral("pushButton_Lmagenta"));
        pushButton_Lmagenta->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lmagenta, 5, 1, 1, 1);

        pushButton_Lcyan = new QPushButton(groupBox_Color_view);
        pushButton_Lcyan->setObjectName(QStringLiteral("pushButton_Lcyan"));
        pushButton_Lcyan->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lcyan, 6, 1, 1, 1);

        pushButton_Lwhite = new QPushButton(groupBox_Color_view);
        pushButton_Lwhite->setObjectName(QStringLiteral("pushButton_Lwhite"));
        pushButton_Lwhite->setAutoFillBackground(true);

        gridLayout_Color_view_Lcolors->addWidget(pushButton_Lwhite, 7, 1, 1, 1);


        gridLayout_Color_view->addLayout(gridLayout_Color_view_Lcolors, 4, 2, 1, 2);

        verticalSpacer_Color_view = new QSpacerItem(678, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_Color_view->addItem(verticalSpacer_Color_view, 6, 0, 1, 4);

        label_groupBox_Color_view = new QLabel(groupBox_Color_view);
        label_groupBox_Color_view->setObjectName(QStringLiteral("label_groupBox_Color_view"));
        sizePolicy.setHeightForWidth(label_groupBox_Color_view->sizePolicy().hasHeightForWidth());
        label_groupBox_Color_view->setSizePolicy(sizePolicy);
        label_groupBox_Color_view->setWordWrap(true);

        gridLayout_Color_view->addWidget(label_groupBox_Color_view, 3, 0, 1, 4);

        reset_colors_button = new QPushButton(groupBox_Color_view);
        reset_colors_button->setObjectName(QStringLiteral("reset_colors_button"));

        gridLayout_Color_view->addWidget(reset_colors_button, 5, 2, 1, 2);


        gridLayout_2->addWidget(groupBox_Color_view, 0, 0, 1, 1);

        tabWidget_main->addTab(tab_Color_view, QString());
        tab_Mapper = new QWidget();
        tab_Mapper->setObjectName(QStringLiteral("tab_Mapper"));
        gridLayout_24 = new QGridLayout(tab_Mapper);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        groupBox_Map_files = new QGroupBox(tab_Mapper);
        groupBox_Map_files->setObjectName(QStringLiteral("groupBox_Map_files"));
        gridLayout_Map_files = new QGridLayout(groupBox_Map_files);
        gridLayout_Map_files->setObjectName(QStringLiteral("gridLayout_Map_files"));
        label_load_map_button = new QLabel(groupBox_Map_files);
        label_load_map_button->setObjectName(QStringLiteral("label_load_map_button"));

        gridLayout_Map_files->addWidget(label_load_map_button, 1, 0, 1, 1);

        load_map_button = new QPushButton(groupBox_Map_files);
        load_map_button->setObjectName(QStringLiteral("load_map_button"));

        gridLayout_Map_files->addWidget(load_map_button, 1, 1, 1, 2);

        combobox_mapper_profiles = new QComboBox(groupBox_Map_files);
        combobox_mapper_profiles->setObjectName(QStringLiteral("combobox_mapper_profiles"));

        gridLayout_Map_files->addWidget(combobox_mapper_profiles, 2, 1, 1, 2);

        copy_map_profile = new QPushButton(groupBox_Map_files);
        copy_map_profile->setObjectName(QStringLiteral("copy_map_profile"));

        gridLayout_Map_files->addWidget(copy_map_profile, 2, 3, 1, 1);

        label_combobox_mapper_profiles = new QLabel(groupBox_Map_files);
        label_combobox_mapper_profiles->setObjectName(QStringLiteral("label_combobox_mapper_profiles"));

        gridLayout_Map_files->addWidget(label_combobox_mapper_profiles, 2, 0, 1, 1);

        save_map_button = new QPushButton(groupBox_Map_files);
        save_map_button->setObjectName(QStringLiteral("save_map_button"));

        gridLayout_Map_files->addWidget(save_map_button, 0, 1, 1, 2);

        label_save_map_button = new QLabel(groupBox_Map_files);
        label_save_map_button->setObjectName(QStringLiteral("label_save_map_button"));

        gridLayout_Map_files->addWidget(label_save_map_button, 0, 0, 1, 1);

        map_file_action = new QLabel(groupBox_Map_files);
        map_file_action->setObjectName(QStringLiteral("map_file_action"));
        map_file_action->setFont(font);

        gridLayout_Map_files->addWidget(map_file_action, 3, 0, 1, 4);


        gridLayout_24->addWidget(groupBox_Map_files, 0, 0, 1, 1);

        groupBox_Map_download = new QGroupBox(tab_Mapper);
        groupBox_Map_download->setObjectName(QStringLiteral("groupBox_Map_download"));
        gridLayout_Map_download = new QGridLayout(groupBox_Map_download);
        gridLayout_Map_download->setObjectName(QStringLiteral("gridLayout_Map_download"));
        label_pushButton_DownloadMap = new QLabel(groupBox_Map_download);
        label_pushButton_DownloadMap->setObjectName(QStringLiteral("label_pushButton_DownloadMap"));

        gridLayout_Map_download->addWidget(label_pushButton_DownloadMap, 0, 0, 1, 1);

        pushButton_DownloadMap = new QPushButton(groupBox_Map_download);
        pushButton_DownloadMap->setObjectName(QStringLiteral("pushButton_DownloadMap"));

        gridLayout_Map_download->addWidget(pushButton_DownloadMap, 0, 1, 1, 1);


        gridLayout_24->addWidget(groupBox_Map_download, 1, 0, 1, 1);

        groupBox_Map_backups = new QGroupBox(tab_Mapper);
        groupBox_Map_backups->setObjectName(QStringLiteral("groupBox_Map_backups"));
        groupBox_Map_backups->setEnabled(false);
        gridLayout_Map_backups = new QGridLayout(groupBox_Map_backups);
        gridLayout_Map_backups->setObjectName(QStringLiteral("gridLayout_Map_backups"));
        label_pre_comboBox_Map_backups = new QLabel(groupBox_Map_backups);
        label_pre_comboBox_Map_backups->setObjectName(QStringLiteral("label_pre_comboBox_Map_backups"));

        gridLayout_Map_backups->addWidget(label_pre_comboBox_Map_backups, 0, 0, 1, 1);

        comboBox_Map_backups = new QComboBox(groupBox_Map_backups);
        comboBox_Map_backups->setObjectName(QStringLiteral("comboBox_Map_backups"));
        comboBox_Map_backups->setFrame(true);

        gridLayout_Map_backups->addWidget(comboBox_Map_backups, 0, 1, 1, 1);

        label_post_comboBox_Map_backups = new QLabel(groupBox_Map_backups);
        label_post_comboBox_Map_backups->setObjectName(QStringLiteral("label_post_comboBox_Map_backups"));

        gridLayout_Map_backups->addWidget(label_post_comboBox_Map_backups, 0, 2, 1, 1);


        gridLayout_24->addWidget(groupBox_Map_backups, 2, 0, 1, 1);

        groupBox_Map_view = new QGroupBox(tab_Mapper);
        groupBox_Map_view->setObjectName(QStringLiteral("groupBox_Map_view"));
        gridLayout_Map_view = new QGridLayout(groupBox_Map_view);
        gridLayout_Map_view->setObjectName(QStringLiteral("gridLayout_Map_view"));
        mMapperUseAntiAlias = new QCheckBox(groupBox_Map_view);
        mMapperUseAntiAlias->setObjectName(QStringLiteral("mMapperUseAntiAlias"));

        gridLayout_Map_view->addWidget(mMapperUseAntiAlias, 0, 0, 1, 1);


        gridLayout_24->addWidget(groupBox_Map_view, 3, 0, 1, 1);

        verticalSpacer_Mapper = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_24->addItem(verticalSpacer_Mapper, 4, 0, 1, 1);

        tabWidget_main->addTab(tab_Mapper, QString());
        tab_Mapper_colors = new QWidget();
        tab_Mapper_colors->setObjectName(QStringLiteral("tab_Mapper_colors"));
        gridLayout_18 = new QGridLayout(tab_Mapper_colors);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        groupBox_Mapper_colors = new QGroupBox(tab_Mapper_colors);
        groupBox_Mapper_colors->setObjectName(QStringLiteral("groupBox_Mapper_colors"));
        gridLayout_Mapper_colors_2 = new QGridLayout(groupBox_Mapper_colors);
        gridLayout_Mapper_colors_2->setObjectName(QStringLiteral("gridLayout_Mapper_colors_2"));
        verticalSpacer_Mapper_colors = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_Mapper_colors_2->addItem(verticalSpacer_Mapper_colors, 7, 0, 1, 2);

        pushButton_background_color_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_background_color_2->setObjectName(QStringLiteral("pushButton_background_color_2"));
        pushButton_background_color_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors_2->addWidget(pushButton_background_color_2, 1, 1, 1, 1);

        label_pushButton_foreground_color_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_foreground_color_2->setObjectName(QStringLiteral("label_pushButton_foreground_color_2"));

        gridLayout_Mapper_colors_2->addWidget(label_pushButton_foreground_color_2, 0, 0, 1, 1);

        pushButton_foreground_color_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_foreground_color_2->setObjectName(QStringLiteral("pushButton_foreground_color_2"));
        pushButton_foreground_color_2->setAutoFillBackground(true);
        pushButton_foreground_color_2->setStyleSheet(QStringLiteral(""));

        gridLayout_Mapper_colors_2->addWidget(pushButton_foreground_color_2, 0, 1, 1, 1);

        label_pushButton_background_color_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_background_color_2->setObjectName(QStringLiteral("label_pushButton_background_color_2"));

        gridLayout_Mapper_colors_2->addWidget(label_pushButton_background_color_2, 1, 0, 1, 1);

        gridLayout_Mapper_colors = new QGridLayout();
        gridLayout_Mapper_colors->setObjectName(QStringLiteral("gridLayout_Mapper_colors"));
        label_pushButton_black_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_black_2->setObjectName(QStringLiteral("label_pushButton_black_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_black_2, 0, 0, 1, 1);

        label_pushButton_red_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_red_2->setObjectName(QStringLiteral("label_pushButton_red_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_red_2, 1, 0, 1, 1);

        label_pushButton_green_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_green_2->setObjectName(QStringLiteral("label_pushButton_green_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_green_2, 2, 0, 1, 1);

        label_pushButton_blue_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_blue_2->setObjectName(QStringLiteral("label_pushButton_blue_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_blue_2, 4, 0, 1, 1);

        label_pushButton_magenta_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_magenta_2->setObjectName(QStringLiteral("label_pushButton_magenta_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_magenta_2, 5, 0, 1, 1);

        label_pushButton_cyan_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_cyan_2->setObjectName(QStringLiteral("label_pushButton_cyan_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_cyan_2, 6, 0, 1, 1);

        label_pushButton_white_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_white_2->setObjectName(QStringLiteral("label_pushButton_white_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_white_2, 7, 0, 1, 1);

        pushButton_black_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_black_2->setObjectName(QStringLiteral("pushButton_black_2"));
        pushButton_black_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_black_2, 0, 1, 1, 1);

        pushButton_red_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_red_2->setObjectName(QStringLiteral("pushButton_red_2"));
        pushButton_red_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_red_2, 1, 1, 1, 1);

        pushButton_green_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_green_2->setObjectName(QStringLiteral("pushButton_green_2"));
        pushButton_green_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_green_2, 2, 1, 1, 1);

        pushButton_yellow_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_yellow_2->setObjectName(QStringLiteral("pushButton_yellow_2"));
        pushButton_yellow_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_yellow_2, 3, 1, 1, 1);

        pushButton_blue_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_blue_2->setObjectName(QStringLiteral("pushButton_blue_2"));
        pushButton_blue_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_blue_2, 4, 1, 1, 1);

        pushButton_magenta_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_magenta_2->setObjectName(QStringLiteral("pushButton_magenta_2"));
        pushButton_magenta_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_magenta_2, 5, 1, 1, 1);

        pushButton_cyan_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_cyan_2->setObjectName(QStringLiteral("pushButton_cyan_2"));
        pushButton_cyan_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_cyan_2, 6, 1, 1, 1);

        pushButton_white_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_white_2->setObjectName(QStringLiteral("pushButton_white_2"));
        pushButton_white_2->setAutoFillBackground(true);

        gridLayout_Mapper_colors->addWidget(pushButton_white_2, 7, 1, 1, 1);

        label_pushButton_yellow_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_yellow_2->setObjectName(QStringLiteral("label_pushButton_yellow_2"));

        gridLayout_Mapper_colors->addWidget(label_pushButton_yellow_2, 3, 0, 1, 1);


        gridLayout_Mapper_colors_2->addLayout(gridLayout_Mapper_colors, 4, 0, 1, 1);

        gridLayout_Mapper_Lcolors = new QGridLayout();
        gridLayout_Mapper_Lcolors->setObjectName(QStringLiteral("gridLayout_Mapper_Lcolors"));
        label_pushButton_Lblack_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lblack_2->setObjectName(QStringLiteral("label_pushButton_Lblack_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lblack_2, 0, 0, 1, 1);

        label_pushButton_Lred_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lred_2->setObjectName(QStringLiteral("label_pushButton_Lred_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lred_2, 1, 0, 1, 1);

        label_pushButton_Lgreen_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lgreen_2->setObjectName(QStringLiteral("label_pushButton_Lgreen_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lgreen_2, 2, 0, 1, 1);

        label_pushButton_Lyellow_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lyellow_2->setObjectName(QStringLiteral("label_pushButton_Lyellow_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lyellow_2, 3, 0, 1, 1);

        label_pushButton_Lblue_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lblue_2->setObjectName(QStringLiteral("label_pushButton_Lblue_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lblue_2, 4, 0, 1, 1);

        label_pushButton_Lmagenta_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lmagenta_2->setObjectName(QStringLiteral("label_pushButton_Lmagenta_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lmagenta_2, 5, 0, 1, 1);

        label_pushButton_Lcyan_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lcyan_2->setObjectName(QStringLiteral("label_pushButton_Lcyan_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lcyan_2, 6, 0, 1, 1);

        label_pushButton_Lwhite_2 = new QLabel(groupBox_Mapper_colors);
        label_pushButton_Lwhite_2->setObjectName(QStringLiteral("label_pushButton_Lwhite_2"));

        gridLayout_Mapper_Lcolors->addWidget(label_pushButton_Lwhite_2, 7, 0, 1, 1);

        pushButton_Lblack_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lblack_2->setObjectName(QStringLiteral("pushButton_Lblack_2"));
        pushButton_Lblack_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lblack_2, 0, 1, 1, 1);

        pushButton_Lred_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lred_2->setObjectName(QStringLiteral("pushButton_Lred_2"));
        pushButton_Lred_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lred_2, 1, 1, 1, 1);

        pushButton_Lgreen_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lgreen_2->setObjectName(QStringLiteral("pushButton_Lgreen_2"));
        pushButton_Lgreen_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lgreen_2, 2, 1, 1, 1);

        pushButton_Lyellow_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lyellow_2->setObjectName(QStringLiteral("pushButton_Lyellow_2"));
        pushButton_Lyellow_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lyellow_2, 3, 1, 1, 1);

        pushButton_Lblue_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lblue_2->setObjectName(QStringLiteral("pushButton_Lblue_2"));
        pushButton_Lblue_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lblue_2, 4, 1, 1, 1);

        pushButton_Lmagenta_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lmagenta_2->setObjectName(QStringLiteral("pushButton_Lmagenta_2"));
        pushButton_Lmagenta_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lmagenta_2, 5, 1, 1, 1);

        pushButton_Lcyan_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lcyan_2->setObjectName(QStringLiteral("pushButton_Lcyan_2"));
        pushButton_Lcyan_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lcyan_2, 6, 1, 1, 1);

        pushButton_Lwhite_2 = new QPushButton(groupBox_Mapper_colors);
        pushButton_Lwhite_2->setObjectName(QStringLiteral("pushButton_Lwhite_2"));
        pushButton_Lwhite_2->setAutoFillBackground(true);

        gridLayout_Mapper_Lcolors->addWidget(pushButton_Lwhite_2, 7, 1, 1, 1);


        gridLayout_Mapper_colors_2->addLayout(gridLayout_Mapper_Lcolors, 4, 1, 1, 1);

        reset_colors_button_2 = new QPushButton(groupBox_Mapper_colors);
        reset_colors_button_2->setObjectName(QStringLiteral("reset_colors_button_2"));

        gridLayout_Mapper_colors_2->addWidget(reset_colors_button_2, 6, 1, 1, 1);


        gridLayout_18->addWidget(groupBox_Mapper_colors, 0, 0, 1, 1);

        tabWidget_main->addTab(tab_Mapper_colors, QString());
        tab_Special_options = new QWidget();
        tab_Special_options->setObjectName(QStringLiteral("tab_Special_options"));
        gridLayout_7 = new QGridLayout(tab_Special_options);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalSpacer_Special_options = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_7->addItem(verticalSpacer_Special_options, 2, 0, 1, 1);

        groupBox_Special_options = new QGroupBox(tab_Special_options);
        groupBox_Special_options->setObjectName(QStringLiteral("groupBox_Special_options"));
        verticalLayout_Special_options = new QVBoxLayout(groupBox_Special_options);
        verticalLayout_Special_options->setObjectName(QStringLiteral("verticalLayout_Special_options"));
        mFORCE_MCCP_OFF = new QCheckBox(groupBox_Special_options);
        mFORCE_MCCP_OFF->setObjectName(QStringLiteral("mFORCE_MCCP_OFF"));

        verticalLayout_Special_options->addWidget(mFORCE_MCCP_OFF);

        mFORCE_GA_OFF = new QCheckBox(groupBox_Special_options);
        mFORCE_GA_OFF->setObjectName(QStringLiteral("mFORCE_GA_OFF"));

        verticalLayout_Special_options->addWidget(mFORCE_GA_OFF);

        checkBox_mUSE_FORCE_LF_AFTER_PROMPT = new QCheckBox(groupBox_Special_options);
        checkBox_mUSE_FORCE_LF_AFTER_PROMPT->setObjectName(QStringLiteral("checkBox_mUSE_FORCE_LF_AFTER_PROMPT"));

        verticalLayout_Special_options->addWidget(checkBox_mUSE_FORCE_LF_AFTER_PROMPT);

        mFORCE_MXP_NEGOTIATION_OFF = new QCheckBox(groupBox_Special_options);
        mFORCE_MXP_NEGOTIATION_OFF->setObjectName(QStringLiteral("mFORCE_MXP_NEGOTIATION_OFF"));

        verticalLayout_Special_options->addWidget(mFORCE_MXP_NEGOTIATION_OFF);

        need_reconnect_for_specialoption = new QLabel(groupBox_Special_options);
        need_reconnect_for_specialoption->setObjectName(QStringLiteral("need_reconnect_for_specialoption"));
        need_reconnect_for_specialoption->setEnabled(true);
        need_reconnect_for_specialoption->setFont(font);
        need_reconnect_for_specialoption->setMouseTracking(false);
        need_reconnect_for_specialoption->setTextFormat(Qt::AutoText);
        need_reconnect_for_specialoption->setWordWrap(true);

        verticalLayout_Special_options->addWidget(need_reconnect_for_specialoption);


        gridLayout_7->addWidget(groupBox_Special_options, 0, 0, 1, 1);

        groupBox_Debug = new QGroupBox(tab_Special_options);
        groupBox_Debug->setObjectName(QStringLiteral("groupBox_Debug"));
        groupBox_Debug->setEnabled(true);
        sizePolicy.setHeightForWidth(groupBox_Debug->sizePolicy().hasHeightForWidth());
        groupBox_Debug->setSizePolicy(sizePolicy);
        groupBox_Debug->setMinimumSize(QSize(0, 0));
        groupBox_Debug->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_debug = new QVBoxLayout(groupBox_Debug);
        verticalLayout_debug->setObjectName(QStringLiteral("verticalLayout_debug"));

        gridLayout_7->addWidget(groupBox_Debug, 1, 0, 1, 1);

        tabWidget_main->addTab(tab_Special_options, QString());

        verticalLayout_profile_preferences->addWidget(tabWidget_main);

        widget_bottomButtons = new QWidget(profile_preferences);
        widget_bottomButtons->setObjectName(QStringLiteral("widget_bottomButtons"));
        sizePolicy3.setHeightForWidth(widget_bottomButtons->sizePolicy().hasHeightForWidth());
        widget_bottomButtons->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(widget_bottomButtons);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(447, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(widget_bottomButtons);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy4);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/dialog-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        horizontalLayout->addWidget(closeButton);


        verticalLayout_profile_preferences->addWidget(widget_bottomButtons);

#ifndef QT_NO_SHORTCUT
        label_MainIconSize->setBuddy(MainIconSize);
        label_TEFolderIconSize->setBuddy(TEFolderIconSize);
        label_ircNick->setBuddy(ircNick);
        label_command_separator->setBuddy(command_separator_lineedit);
        label_commandLineMinimumHeight->setBuddy(commandLineMinimumHeight);
        label_topBorderHeight->setBuddy(topBorderHeight);
        label_leftBorderWidth->setBuddy(leftBorderWidth);
        label_bottomBorderHeight->setBuddy(bottomBorderHeight);
        label_rightBorderWidth->setBuddy(rightBorderWidth);
        label_pre_wrap_at->setBuddy(wrap_at_spinBox);
        label_post_wrap_at->setBuddy(wrap_at_spinBox);
        label_pre_Indent_wrapped->setBuddy(indent_wrapped_spinBox);
        label_post_indent_wrapped->setBuddy(indent_wrapped_spinBox);
        label_fontComboBox->setBuddy(fontComboBox);
        label_fontSize->setBuddy(fontSize);
        label_doubleclick_ignore->setBuddy(doubleclick_ignore_lineedit);
        label_pushButton_command_line_background_color->setBuddy(pushButton_command_line_background_color);
        label_pushButton_foreground_color->setBuddy(pushButton_foreground_color);
        label_pushButton_background_color->setBuddy(pushButton_background_color);
        label_pushButton_command_line_foreground_color->setBuddy(pushButton_command_line_foreground_color);
        label_pushButton_command_foreground_color->setBuddy(pushButton_command_foreground_color);
        label_pushButton_command_background_color->setBuddy(pushButton_command_background_color);
        label_pushButton_black->setBuddy(pushButton_black);
        label_pushButton_red->setBuddy(pushButton_red);
        label_pushButton_green->setBuddy(pushButton_green);
        label_pushButton_blue->setBuddy(pushButton_blue);
        label_pushButton_magenta->setBuddy(pushButton_magenta);
        label_pushButton_cyan->setBuddy(pushButton_cyan);
        label_pushButton_white->setBuddy(pushButton_white);
        label_pushButton_yellow->setBuddy(pushButton_yellow);
        label_pushButton_Lblack->setBuddy(pushButton_Lblack);
        label_pushButton_Lred->setBuddy(pushButton_Lred);
        label_pushButton_Lgreen->setBuddy(pushButton_Lgreen);
        label_pushButton_Lyellow->setBuddy(pushButton_Lyellow);
        label_pushButton_Lblue->setBuddy(pushButton_Lblue);
        label_pushButton_Lmagenta->setBuddy(pushButton_Lmagenta);
        label_pushButton_Lcyan->setBuddy(pushButton_Lcyan);
        label_pushButton_Lwhite->setBuddy(pushButton_Lwhite);
        label_load_map_button->setBuddy(load_map_button);
        label_combobox_mapper_profiles->setBuddy(combobox_mapper_profiles);
        label_save_map_button->setBuddy(save_map_button);
        label_pushButton_DownloadMap->setBuddy(pushButton_DownloadMap);
        label_pre_comboBox_Map_backups->setBuddy(comboBox_Map_backups);
        label_pushButton_foreground_color_2->setBuddy(pushButton_foreground_color_2);
        label_pushButton_background_color_2->setBuddy(pushButton_background_color_2);
        label_pushButton_black_2->setBuddy(pushButton_black_2);
        label_pushButton_red_2->setBuddy(pushButton_red_2);
        label_pushButton_green_2->setBuddy(pushButton_green_2);
        label_pushButton_blue_2->setBuddy(pushButton_blue_2);
        label_pushButton_magenta_2->setBuddy(pushButton_magenta_2);
        label_pushButton_cyan_2->setBuddy(pushButton_cyan_2);
        label_pushButton_white_2->setBuddy(pushButton_white_2);
        label_pushButton_yellow_2->setBuddy(pushButton_yellow_2);
        label_pushButton_Lblack_2->setBuddy(pushButton_Lblack_2);
        label_pushButton_Lred_2->setBuddy(pushButton_Lred_2);
        label_pushButton_Lgreen_2->setBuddy(pushButton_Lgreen_2);
        label_pushButton_Lyellow_2->setBuddy(pushButton_Lyellow_2);
        label_pushButton_Lblue_2->setBuddy(pushButton_Lblue_2);
        label_pushButton_Lmagenta_2->setBuddy(pushButton_Lmagenta_2);
        label_pushButton_Lcyan_2->setBuddy(pushButton_Lcyan_2);
        label_pushButton_Lwhite_2->setBuddy(pushButton_Lwhite_2);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget_main, MainIconSize);
        QWidget::setTabOrder(MainIconSize, TEFolderIconSize);
        QWidget::setTabOrder(TEFolderIconSize, showMenuBar);
        QWidget::setTabOrder(showMenuBar, showToolbar);
        QWidget::setTabOrder(showToolbar, mAlertOnNewData);
        QWidget::setTabOrder(mAlertOnNewData, mFORCE_SAVE_ON_EXIT);
        QWidget::setTabOrder(mFORCE_SAVE_ON_EXIT, mRawStreamDump);
        QWidget::setTabOrder(mRawStreamDump, acceptServerGUI);
        QWidget::setTabOrder(acceptServerGUI, mEnableGMCP);
        QWidget::setTabOrder(mEnableGMCP, ircNick);
        QWidget::setTabOrder(ircNick, USE_UNIX_EOL);
        QWidget::setTabOrder(USE_UNIX_EOL, show_sent_text_checkbox);
        QWidget::setTabOrder(show_sent_text_checkbox, auto_clear_input_line_checkbox);
        QWidget::setTabOrder(auto_clear_input_line_checkbox, command_separator_lineedit);
        QWidget::setTabOrder(command_separator_lineedit, commandLineMinimumHeight);
        QWidget::setTabOrder(commandLineMinimumHeight, dictList);
        QWidget::setTabOrder(dictList, enableSpellCheck);
        QWidget::setTabOrder(enableSpellCheck, fontComboBox);
        QWidget::setTabOrder(fontComboBox, fontSize);
        QWidget::setTabOrder(fontSize, mNoAntiAlias);
        QWidget::setTabOrder(mNoAntiAlias, topBorderHeight);
        QWidget::setTabOrder(topBorderHeight, bottomBorderHeight);
        QWidget::setTabOrder(bottomBorderHeight, leftBorderWidth);
        QWidget::setTabOrder(leftBorderWidth, rightBorderWidth);
        QWidget::setTabOrder(rightBorderWidth, pushButtonBorderColor);
        QWidget::setTabOrder(pushButtonBorderColor, pushButtonBorderImage);
        QWidget::setTabOrder(pushButtonBorderImage, wrap_at_spinBox);
        QWidget::setTabOrder(wrap_at_spinBox, indent_wrapped_spinBox);
        QWidget::setTabOrder(indent_wrapped_spinBox, doubleclick_ignore_lineedit);
        QWidget::setTabOrder(doubleclick_ignore_lineedit, checkBox_USE_IRE_DRIVER_BUGFIX);
        QWidget::setTabOrder(checkBox_USE_IRE_DRIVER_BUGFIX, checkBox_USE_SMALL_SCREEN);
        QWidget::setTabOrder(checkBox_USE_SMALL_SCREEN, pushButton_foreground_color);
        QWidget::setTabOrder(pushButton_foreground_color, pushButton_command_line_foreground_color);
        QWidget::setTabOrder(pushButton_command_line_foreground_color, pushButton_command_foreground_color);
        QWidget::setTabOrder(pushButton_command_foreground_color, pushButton_background_color);
        QWidget::setTabOrder(pushButton_background_color, pushButton_command_line_background_color);
        QWidget::setTabOrder(pushButton_command_line_background_color, pushButton_command_background_color);
        QWidget::setTabOrder(pushButton_command_background_color, pushButton_black);
        QWidget::setTabOrder(pushButton_black, pushButton_red);
        QWidget::setTabOrder(pushButton_red, pushButton_green);
        QWidget::setTabOrder(pushButton_green, pushButton_yellow);
        QWidget::setTabOrder(pushButton_yellow, pushButton_blue);
        QWidget::setTabOrder(pushButton_blue, pushButton_magenta);
        QWidget::setTabOrder(pushButton_magenta, pushButton_cyan);
        QWidget::setTabOrder(pushButton_cyan, pushButton_white);
        QWidget::setTabOrder(pushButton_white, pushButton_Lblack);
        QWidget::setTabOrder(pushButton_Lblack, pushButton_Lred);
        QWidget::setTabOrder(pushButton_Lred, pushButton_Lgreen);
        QWidget::setTabOrder(pushButton_Lgreen, pushButton_Lyellow);
        QWidget::setTabOrder(pushButton_Lyellow, pushButton_Lblue);
        QWidget::setTabOrder(pushButton_Lblue, pushButton_Lmagenta);
        QWidget::setTabOrder(pushButton_Lmagenta, pushButton_Lcyan);
        QWidget::setTabOrder(pushButton_Lcyan, pushButton_Lwhite);
        QWidget::setTabOrder(pushButton_Lwhite, reset_colors_button);
        QWidget::setTabOrder(reset_colors_button, save_map_button);
        QWidget::setTabOrder(save_map_button, load_map_button);
        QWidget::setTabOrder(load_map_button, combobox_mapper_profiles);
        QWidget::setTabOrder(combobox_mapper_profiles, copy_map_profile);
        QWidget::setTabOrder(copy_map_profile, pushButton_DownloadMap);
        QWidget::setTabOrder(pushButton_DownloadMap, comboBox_Map_backups);
        QWidget::setTabOrder(comboBox_Map_backups, mMapperUseAntiAlias);
        QWidget::setTabOrder(mMapperUseAntiAlias, pushButton_foreground_color_2);
        QWidget::setTabOrder(pushButton_foreground_color_2, pushButton_background_color_2);
        QWidget::setTabOrder(pushButton_background_color_2, pushButton_black_2);
        QWidget::setTabOrder(pushButton_black_2, pushButton_red_2);
        QWidget::setTabOrder(pushButton_red_2, pushButton_green_2);
        QWidget::setTabOrder(pushButton_green_2, pushButton_yellow_2);
        QWidget::setTabOrder(pushButton_yellow_2, pushButton_blue_2);
        QWidget::setTabOrder(pushButton_blue_2, pushButton_magenta_2);
        QWidget::setTabOrder(pushButton_magenta_2, pushButton_cyan_2);
        QWidget::setTabOrder(pushButton_cyan_2, pushButton_white_2);
        QWidget::setTabOrder(pushButton_white_2, pushButton_Lblack_2);
        QWidget::setTabOrder(pushButton_Lblack_2, pushButton_Lred_2);
        QWidget::setTabOrder(pushButton_Lred_2, pushButton_Lgreen_2);
        QWidget::setTabOrder(pushButton_Lgreen_2, pushButton_Lyellow_2);
        QWidget::setTabOrder(pushButton_Lyellow_2, pushButton_Lblue_2);
        QWidget::setTabOrder(pushButton_Lblue_2, pushButton_Lmagenta_2);
        QWidget::setTabOrder(pushButton_Lmagenta_2, pushButton_Lcyan_2);
        QWidget::setTabOrder(pushButton_Lcyan_2, pushButton_Lwhite_2);
        QWidget::setTabOrder(pushButton_Lwhite_2, reset_colors_button_2);
        QWidget::setTabOrder(reset_colors_button_2, mFORCE_MCCP_OFF);
        QWidget::setTabOrder(mFORCE_MCCP_OFF, mFORCE_GA_OFF);
        QWidget::setTabOrder(mFORCE_GA_OFF, checkBox_mUSE_FORCE_LF_AFTER_PROMPT);
        QWidget::setTabOrder(checkBox_mUSE_FORCE_LF_AFTER_PROMPT, mFORCE_MXP_NEGOTIATION_OFF);
        QWidget::setTabOrder(mFORCE_MXP_NEGOTIATION_OFF, closeButton);

        retranslateUi(profile_preferences);

        tabWidget_main->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(profile_preferences);
    } // setupUi

    void retranslateUi(QDialog *profile_preferences)
    {
        profile_preferences->setWindowTitle(QApplication::translate("profile_preferences", "Profile preferences", 0));
        groupBox_Icon_sizes->setTitle(QApplication::translate("profile_preferences", "Icon sizes", 0));
        label_MainIconSize->setText(QApplication::translate("profile_preferences", "Icon size toolbars:", 0));
        MainIconSize->setSpecialValueText(QString());
        label_TEFolderIconSize->setText(QApplication::translate("profile_preferences", "Icon size in tree views:", 0));
#ifndef QT_NO_TOOLTIP
        showMenuBar->setToolTip(QApplication::translate("profile_preferences", "Enables the typical menu bar with drop-down menus in the main window. Requires restart to take effect", 0));
#endif // QT_NO_TOOLTIP
        showMenuBar->setText(QApplication::translate("profile_preferences", "Show menu bar", 0));
#ifndef QT_NO_TOOLTIP
        showToolbar->setToolTip(QApplication::translate("profile_preferences", "Enables the default button bar in the main window. Requires restart to take effect", 0));
#endif // QT_NO_TOOLTIP
        showToolbar->setText(QApplication::translate("profile_preferences", "Show main toolbar", 0));
        groupBox_Misc->setTitle(QApplication::translate("profile_preferences", "Misc", 0));
        mAlertOnNewData->setText(QApplication::translate("profile_preferences", "Toolbar notification if Mudlet is minimized and new data arrives", 0));
        mFORCE_SAVE_ON_EXIT->setText(QApplication::translate("profile_preferences", "Force auto save on exit", 0));
#ifndef QT_NO_TOOLTIP
        mRawStreamDump->setToolTip(QApplication::translate("profile_preferences", "Switch log file format from HTML to raw stream dump in logfiles as sent by server. The logfile can then be can be loaded by Mudlet to test your trigger systems offline.", 0));
#endif // QT_NO_TOOLTIP
        mRawStreamDump->setText(QApplication::translate("profile_preferences", "Save log files in html format instead of text only", 0));
        acceptServerGUI->setText(QApplication::translate("profile_preferences", "Allow server to install scrpt packages", 0));
        groupBox_GMCP->setTitle(QApplication::translate("profile_preferences", "GMCP", 0));
#ifndef QT_NO_TOOLTIP
        mEnableGMCP->setToolTip(QApplication::translate("profile_preferences", "Note: On IRE games, because Rapture is buggy, if you enable GMCP it will stop sending you ATCP", 0));
#endif // QT_NO_TOOLTIP
        mEnableGMCP->setText(QApplication::translate("profile_preferences", "Enable GMCP", 0));
        need_reconnect_for_gmcp->setText(QApplication::translate("profile_preferences", "Please reconnect to your game for GMCP to take effect", 0));
        groupBox_IRC->setTitle(QApplication::translate("profile_preferences", "IRC", 0));
        label_ircNick->setText(QApplication::translate("profile_preferences", "Nick name in mudlet IRC channel:", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_General), QApplication::translate("profile_preferences", "General", 0));
        groupBox_Input->setTitle(QApplication::translate("profile_preferences", "Input", 0));
#ifndef QT_NO_TOOLTIP
        USE_UNIX_EOL->setToolTip(QApplication::translate("profile_preferences", "use strict UNIX line endings on commands for old UNIX servers that can't handle windows line endings correctly", 0));
#endif // QT_NO_TOOLTIP
        USE_UNIX_EOL->setText(QApplication::translate("profile_preferences", "Strict UNIX line endings", 0));
#ifndef QT_NO_TOOLTIP
        show_sent_text_checkbox->setToolTip(QApplication::translate("profile_preferences", "Echo the text you send in the display box", 0));
#endif // QT_NO_TOOLTIP
        show_sent_text_checkbox->setText(QApplication::translate("profile_preferences", "Show the text you sent", 0));
        auto_clear_input_line_checkbox->setText(QApplication::translate("profile_preferences", "Auto clear the input line after you sent text", 0));
#ifndef QT_NO_TOOLTIP
        label_command_separator->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_command_separator->setText(QApplication::translate("profile_preferences", "Command separator:", 0));
#ifndef QT_NO_TOOLTIP
        label_commandLineMinimumHeight->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_commandLineMinimumHeight->setText(QApplication::translate("profile_preferences", "Command line minimum height in pixels:", 0));
        groupBox_Spell_check->setTitle(QApplication::translate("profile_preferences", "Spell check", 0));
        label_dictList->setText(QApplication::translate("profile_preferences", "Chose spell check dictionary:", 0));
        enableSpellCheck->setText(QApplication::translate("profile_preferences", "Enable spell check", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_input_line), QApplication::translate("profile_preferences", "Input line", 0));
        groupBox_Display_Border->setTitle(QApplication::translate("profile_preferences", "Display Border", 0));
        label_topBorderHeight->setText(QApplication::translate("profile_preferences", "Top border height:", 0));
        label_leftBorderWidth->setText(QApplication::translate("profile_preferences", "Left border width:", 0));
        label_bottomBorderHeight->setText(QApplication::translate("profile_preferences", "Bottom border height:", 0));
        label_rightBorderWidth->setText(QApplication::translate("profile_preferences", "Right border width:", 0));
        pushButtonBorderColor->setText(QApplication::translate("profile_preferences", "Pick border color", 0));
        pushButtonBorderImage->setText(QApplication::translate("profile_preferences", "Border background image", 0));
        groupBox_Word_wrapping->setTitle(QApplication::translate("profile_preferences", "Word wrapping", 0));
        label_pre_wrap_at->setText(QApplication::translate("profile_preferences", "Wrap lines at:", 0));
        label_post_wrap_at->setText(QApplication::translate("profile_preferences", "characters", 0));
        label_pre_Indent_wrapped->setText(QApplication::translate("profile_preferences", "Indent wrapped lines by:", 0));
        label_post_indent_wrapped->setText(QApplication::translate("profile_preferences", "characters", 0));
        groupBox_Display_workarounds->setTitle(QApplication::translate("profile_preferences", "Display workarounds", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_USE_IRE_DRIVER_BUGFIX->setToolTip(QApplication::translate("profile_preferences", "Some MUDs (notably all IRE ones) suffer from a bug where they don't properly\n"
"communicate with the client on where a newline should be. Enable this to fix text\n"
"from getting appended to the previous prompt line", 0));
#endif // QT_NO_TOOLTIP
        checkBox_USE_IRE_DRIVER_BUGFIX->setText(QApplication::translate("profile_preferences", "Fix unnecessary linebreaks on GA servers", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_USE_SMALL_SCREEN->setToolTip(QApplication::translate("profile_preferences", "Select this option for better compatability if you are using a netbook, \n"
"or some other computer model that has a small screen.", 0));
#endif // QT_NO_TOOLTIP
        checkBox_USE_SMALL_SCREEN->setText(QApplication::translate("profile_preferences", "Use Mudlet on a netbook with a small screen", 0));
        groupBox_Font->setTitle(QApplication::translate("profile_preferences", "Font", 0));
        label_fontComboBox->setText(QApplication::translate("profile_preferences", "Font:", 0));
        label_fontSize->setText(QApplication::translate("profile_preferences", "Size:", 0));
#ifndef QT_NO_TOOLTIP
        mNoAntiAlias->setToolTip(QApplication::translate("profile_preferences", "Use anti aliasing on fonts. Smoothes fonts if you have a high screen resolution and you can use larger fonts. Note that on low resolutions and small font sizes, the font gets blurry. ", 0));
#endif // QT_NO_TOOLTIP
        mNoAntiAlias->setText(QApplication::translate("profile_preferences", "Enable anti-aliasing", 0));
        groupbox_Doubleclick->setTitle(QApplication::translate("profile_preferences", "Double-click", 0));
        label_doubleclick_ignore->setText(QApplication::translate("profile_preferences", "Stop selecting a word on these characters:", 0));
#ifndef QT_NO_TOOLTIP
        doubleclick_ignore_lineedit->setToolTip(QApplication::translate("profile_preferences", "<html><head/><body><p>Enter the characters you'd like double-clicking to stop selecting text on here. If you don't enter any, double-clicking on a word will only stop at a space, and will include characters like a double or a single quote. For example, double-clicking on the word <span style=\" font-style:italic;\">Hello</span> in the following will select <span style=\" font-style:italic;\">&quot;</span><span style=\" font-style:italic;\">Hello!&quot;</span></p><p>You say, <span style=\" font-weight:600;\">&quot;Hello!&quot;</span></p><p>If you set the characters in the field to <span style=\" font-weight:600;\">'&quot;! </span>which will mean it should stop selecting on ' <span style=\" font-style:italic;\">or</span> &quot; <span style=\" font-style:italic;\">or</span> ! then double-clicking on <span style=\" font-style:italic;\">Hello</span> will just select <span style=\" font-style:italic;\">Hello</span></p><p>You say, &quot;<span style=\" font-weight:600;\">Hello</span>!&quot;</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        doubleclick_ignore_lineedit->setText(QApplication::translate("profile_preferences", "'\"", 0));
        doubleclick_ignore_lineedit->setPlaceholderText(QApplication::translate("profile_preferences", "<characters to ignore in selection, for example ' or \">", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_Main_display), QApplication::translate("profile_preferences", "Main display", 0));
        groupBox_Color_view->setTitle(QApplication::translate("profile_preferences", "Select your color preferences", 0));
        label_pushButton_command_line_background_color->setText(QApplication::translate("profile_preferences", "Command line background:", 0));
        label_pushButton_foreground_color->setText(QApplication::translate("profile_preferences", "Foreground:", 0));
        pushButton_foreground_color->setText(QString());
        label_pushButton_background_color->setText(QApplication::translate("profile_preferences", "Background:", 0));
        pushButton_background_color->setText(QString());
        label_pushButton_command_line_foreground_color->setText(QApplication::translate("profile_preferences", "Command line foreground:", 0));
        pushButton_command_line_foreground_color->setText(QString());
        pushButton_command_line_background_color->setText(QString());
        label_pushButton_command_foreground_color->setText(QApplication::translate("profile_preferences", "Command foreground:", 0));
        pushButton_command_foreground_color->setText(QString());
        label_pushButton_command_background_color->setText(QApplication::translate("profile_preferences", "Command background:", 0));
        pushButton_command_background_color->setText(QString());
        label_pushButton_black->setText(QApplication::translate("profile_preferences", "Black:", 0));
        label_pushButton_red->setText(QApplication::translate("profile_preferences", "Red:", 0));
        label_pushButton_green->setText(QApplication::translate("profile_preferences", "Green:", 0));
        label_pushButton_blue->setText(QApplication::translate("profile_preferences", "Blue:", 0));
        label_pushButton_magenta->setText(QApplication::translate("profile_preferences", "Magenta:", 0));
        label_pushButton_cyan->setText(QApplication::translate("profile_preferences", "Cyan:", 0));
        label_pushButton_white->setText(QApplication::translate("profile_preferences", "White:", 0));
        pushButton_black->setText(QString());
        pushButton_red->setText(QString());
        pushButton_green->setText(QString());
        pushButton_yellow->setText(QString());
        pushButton_blue->setText(QString());
        pushButton_magenta->setText(QString());
        pushButton_cyan->setText(QString());
        pushButton_white->setText(QString());
        label_pushButton_yellow->setText(QApplication::translate("profile_preferences", "Yellow:", 0));
        label_pushButton_Lblack->setText(QApplication::translate("profile_preferences", "Light black:", 0));
        label_pushButton_Lred->setText(QApplication::translate("profile_preferences", "Light red:", 0));
        label_pushButton_Lgreen->setText(QApplication::translate("profile_preferences", "Light green:", 0));
        label_pushButton_Lyellow->setText(QApplication::translate("profile_preferences", "Light yellow:", 0));
        label_pushButton_Lblue->setText(QApplication::translate("profile_preferences", "Light blue:", 0));
        label_pushButton_Lmagenta->setText(QApplication::translate("profile_preferences", "Light magenta:", 0));
        label_pushButton_Lcyan->setText(QApplication::translate("profile_preferences", "Light cyan:", 0));
        label_pushButton_Lwhite->setText(QApplication::translate("profile_preferences", "Light white:", 0));
        pushButton_Lblack->setText(QString());
        pushButton_Lred->setText(QString());
        pushButton_Lgreen->setText(QString());
        pushButton_Lyellow->setText(QString());
        pushButton_Lblue->setText(QString());
        pushButton_Lmagenta->setText(QString());
        pushButton_Lcyan->setText(QString());
        pushButton_Lwhite->setText(QString());
        label_groupBox_Color_view->setText(QApplication::translate("profile_preferences", "These preferences set how do you want a particular color to be represented visually in the main display", 0));
        reset_colors_button->setText(QApplication::translate("profile_preferences", "Reset all colors to default", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_Color_view), QApplication::translate("profile_preferences", "Color view", 0));
        groupBox_Map_files->setTitle(QApplication::translate("profile_preferences", "Map files", 0));
        label_load_map_button->setText(QApplication::translate("profile_preferences", "Load another map file in:", 0));
        load_map_button->setText(QApplication::translate("profile_preferences", "Pick map file", 0));
        copy_map_profile->setText(QApplication::translate("profile_preferences", "Copy", 0));
        label_combobox_mapper_profiles->setText(QApplication::translate("profile_preferences", "Copy map to another profile:", 0));
        save_map_button->setText(QApplication::translate("profile_preferences", "Pick location", 0));
        label_save_map_button->setText(QApplication::translate("profile_preferences", "Save your current map:", 0));
        map_file_action->setText(QApplication::translate("profile_preferences", "An action above happened", 0));
        groupBox_Map_download->setTitle(QApplication::translate("profile_preferences", "Map download", 0));
#ifndef QT_NO_TOOLTIP
        label_pushButton_DownloadMap->setToolTip(QApplication::translate("profile_preferences", "<html><head/><body><p>On MUDs that provide maps for download (currently IRE games only), you can press this button to get the latest map. Note that this will <span style=\" font-weight:600;\">overwrite</span> any changes you've done to your map, and will use the new map only</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_pushButton_DownloadMap->setText(QApplication::translate("profile_preferences", "Download latest map provided by your MUD:", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_DownloadMap->setToolTip(QApplication::translate("profile_preferences", "<html><head/><body><p>On MUDs that provide maps for download (currently IRE games only), you can press this button to get the latest map. Note that this will <span style=\" font-weight:600;\">overwrite</span> any changes you've done to your map, and will use the new map only</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_DownloadMap->setText(QApplication::translate("profile_preferences", "Download", 0));
        groupBox_Map_backups->setTitle(QApplication::translate("profile_preferences", "Map backups", 0));
        label_pre_comboBox_Map_backups->setText(QApplication::translate("profile_preferences", "Delete map backups older than:", 0));
        label_post_comboBox_Map_backups->setText(QApplication::translate("profile_preferences", "days since today, keeping newer and monthly backups", 0));
        groupBox_Map_view->setTitle(QApplication::translate("profile_preferences", "Map view", 0));
#ifndef QT_NO_WHATSTHIS
        mMapperUseAntiAlias->setWhatsThis(QApplication::translate("profile_preferences", "<html><head/><body><p>This enables anti-aliasing (AA) for tha map view, making it look smother and nicer</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        mMapperUseAntiAlias->setText(QApplication::translate("profile_preferences", "Use high quality graphics (disable on slow computers)", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_Mapper), QApplication::translate("profile_preferences", "Mapper", 0));
        groupBox_Mapper_colors->setTitle(QApplication::translate("profile_preferences", "Select your color preferences for the map display", 0));
        pushButton_background_color_2->setText(QString());
        label_pushButton_foreground_color_2->setText(QApplication::translate("profile_preferences", "Link color", 0));
        pushButton_foreground_color_2->setText(QString());
        label_pushButton_background_color_2->setText(QApplication::translate("profile_preferences", "Background color:", 0));
        label_pushButton_black_2->setText(QApplication::translate("profile_preferences", "Black:", 0));
        label_pushButton_red_2->setText(QApplication::translate("profile_preferences", "Red:", 0));
        label_pushButton_green_2->setText(QApplication::translate("profile_preferences", "Green:", 0));
        label_pushButton_blue_2->setText(QApplication::translate("profile_preferences", "Blue:", 0));
        label_pushButton_magenta_2->setText(QApplication::translate("profile_preferences", "Magenta:", 0));
        label_pushButton_cyan_2->setText(QApplication::translate("profile_preferences", "Cyan:", 0));
        label_pushButton_white_2->setText(QApplication::translate("profile_preferences", "White:", 0));
        pushButton_black_2->setText(QString());
        pushButton_red_2->setText(QString());
        pushButton_green_2->setText(QString());
        pushButton_yellow_2->setText(QString());
        pushButton_blue_2->setText(QString());
        pushButton_magenta_2->setText(QString());
        pushButton_cyan_2->setText(QString());
        pushButton_white_2->setText(QString());
        label_pushButton_yellow_2->setText(QApplication::translate("profile_preferences", "Yellow:", 0));
        label_pushButton_Lblack_2->setText(QApplication::translate("profile_preferences", "Light black:", 0));
        label_pushButton_Lred_2->setText(QApplication::translate("profile_preferences", "Light red:", 0));
        label_pushButton_Lgreen_2->setText(QApplication::translate("profile_preferences", "Light green:", 0));
        label_pushButton_Lyellow_2->setText(QApplication::translate("profile_preferences", "Light yellow:", 0));
        label_pushButton_Lblue_2->setText(QApplication::translate("profile_preferences", "Light blue:", 0));
        label_pushButton_Lmagenta_2->setText(QApplication::translate("profile_preferences", "Light magenta:", 0));
        label_pushButton_Lcyan_2->setText(QApplication::translate("profile_preferences", "Light cyan:", 0));
        label_pushButton_Lwhite_2->setText(QApplication::translate("profile_preferences", "Light white:", 0));
        pushButton_Lblack_2->setText(QString());
        pushButton_Lred_2->setText(QString());
        pushButton_Lgreen_2->setText(QString());
        pushButton_Lyellow_2->setText(QString());
        pushButton_Lblue_2->setText(QString());
        pushButton_Lmagenta_2->setText(QString());
        pushButton_Lcyan_2->setText(QString());
        pushButton_Lwhite_2->setText(QString());
        reset_colors_button_2->setText(QApplication::translate("profile_preferences", "Reset all colors to default", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_Mapper_colors), QApplication::translate("profile_preferences", "Mapper colors", 0));
        groupBox_Special_options->setTitle(QApplication::translate("profile_preferences", "Special options needed for some older MUD drivers (needs client restart to take effect)", 0));
        mFORCE_MCCP_OFF->setText(QApplication::translate("profile_preferences", "Force compression off", 0));
        mFORCE_GA_OFF->setText(QApplication::translate("profile_preferences", "Force telnet GA signal interpretation off", 0));
#ifndef QT_NO_TOOLTIP
        checkBox_mUSE_FORCE_LF_AFTER_PROMPT->setToolTip(QApplication::translate("profile_preferences", "This option adds a line line break <LF> or \"\n"
"\" to your command input on empty commands. This option will rarely be necessary.", 0));
#endif // QT_NO_TOOLTIP
        checkBox_mUSE_FORCE_LF_AFTER_PROMPT->setText(QApplication::translate("profile_preferences", "Force new line on empty commands", 0));
        mFORCE_MXP_NEGOTIATION_OFF->setText(QApplication::translate("profile_preferences", "Force MXP negotiation off", 0));
        need_reconnect_for_specialoption->setText(QApplication::translate("profile_preferences", "Please reconnect to your game for the change to take effect", 0));
        groupBox_Debug->setTitle(QApplication::translate("profile_preferences", "Debug options allowing run-time changes to test/development features.  (Don't change unless you know why!)", 0));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_Special_options), QApplication::translate("profile_preferences", "Special options", 0));
        closeButton->setText(QApplication::translate("profile_preferences", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class profile_preferences: public Ui_profile_preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_PREFERENCES_H
