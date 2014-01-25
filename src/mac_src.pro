CONFIG += release uitools
CONFIG += app_bundle
QMAKE_CXXFLAGS_RELEASE += -O3 -Wno-deprecated -Wno-unused-parameter
QMAKE_CXXFLAGS_DEBUG += -O3 -Wno-deprecated -Wno-unused-parameter
QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.4

MOC_DIR = ./tmp
OBJECTS_DIR = ./tmp
QT += network opengl phonon



macx:INCLUDEPATH += /Users/heikokoehn/Downloads/lua5_1_4_MacOS106_lib/include \
/Users/heikokoehn/Downloads/boost_1_46_1 \
/usr/local/include/yajl/include

macx:LIBS += \
/Users/heikokoehn/lib/liblua.a \
#/usr/local/lib/libluajit-5.1.a \
/usr/local/lib/libzzip.a \
-F../Frameworks \
-L../Frameworks \
-lpcre \
-lhunspell \
-lz \
-lyajl

unix:INCLUDEPATH += /usr/include/lua5.1

INCLUDEPATH += irc/include

SOURCES += \
    ActionUnit.cpp \
    AliasUnit.cpp \
    ctelnet.cpp \
    dlgAboutDialog.cpp \
    dlgActionMainArea.cpp \
    dlgAliasMainArea.cpp \
    dlgColorTrigger.cpp \
    dlgComposer.cpp \
    dlgConnectionProfiles.cpp \
    dlgIRC.cpp \
    dlgKeysMainArea.cpp \
    dlgMapper.cpp \
    dlgNotepad.cpp \
    dlgOptionsAreaAction.cpp \
    dlgOptionsAreaAlias.cpp \
    dlgOptionsAreaScripts.cpp \
    dlgOptionsAreaTimers.cpp \
    dlgOptionsAreaTriggers.cpp \
    dlgPackageExporter.cpp \
    dlgProfilePreferences.cpp \
    dlgRoomExits.cpp \
    dlgScriptsMainArea.cpp \
    dlgSearchArea.cpp \
    dlgSourceEditorArea.cpp \
    dlgSystemMessageArea.cpp \
    dlgTimersMainArea.cpp \
    dlgTriggerEditor.cpp \
    dlgTriggerPatternEdit.cpp \
    dlgTriggersMainArea.cpp \
    dlgVarsMainArea.cpp \
    EAction.cpp \
    exitsTreeWidget.cpp \
    FontManager.cpp \
    glWidget.cpp
    Host.cpp \
    HostManager.cpp \
    HostPool.cpp \
    irc/src/irc.cpp \
    irc/src/ircbuffer.cpp \
    irc/src/ircsession.cpp \
    irc/src/ircutil.cpp \
    KeyUnit.cpp \
    LuaInterface.cpp \
    main.cpp \
    mudlet.cpp \
    ScriptUnit.cpp \
    T2DMap.cpp \
    TArea.cpp \
    TAction.cpp \
    TAlias.cpp \
    TBuffer.cpp \
    TCommandLine.cpp \
    TConsole.cpp \
    TDebug.cpp \
    TEasyButtonBar.cpp \
    TFlipButton.cpp \
    TForkedProcess.cpp \
    THighlighter.cpp \
    TimerUnit.cpp \
    TKey.cpp \
    TLabel.cpp \
    TLuaInterpreter.cpp \
    TMap.cpp \
    TriggerUnit.cpp \
    TRoom.cpp \
    TRoomDB.cpp \
    TScript.cpp \
    TSplitter.cpp \
    TSplitterHandle.cpp \
    TTextEdit.cpp \
    TTimer.cpp \
    TToolBar.cpp \
    TTreeWidget.cpp \
    TTreeWidgetItem.cpp \
    TTrigger.cpp \
    TVar.cpp \
    VarUnit.cpp \
    XMLexport.cpp \
    XMLimport.cpp


HEADERS += \
    ActionUnit.h \
    AliasUnit.h \
    ctelnet.h \
    dlgAboutDialog.h \
    dlgActionMainArea.h \
    dlgAliasMainArea.h \
    dlgColorTrigger.h \
    dlgComposer.h \
    dlgConnectionProfiles.h \
    dlgIRC.h \
    dlgKeysMainArea.h \
    dlgMapper.h \
    dlgNotepad.h \
    dlgOptionsAreaAction.h \
    dlgOptionsAreaAlias.h \
    dlgOptionsAreaScripts.h \
    dlgOptionsAreaTimers.h \
    dlgOptionsAreaTriggers.h \
    dlgPackageExporter.h \
    dlgProfilePreferences.h \
    dlgRoomExits.h
    dlgScriptsMainArea.h \
    dlgSearchArea.h \
    dlgSourceEditorArea.h \
    dlgSystemMessageArea.h \
    dlgTimersMainArea.h \
    dlgTriggerEditor.h \
    dlgTriggerPatternEdit.h \
    dlgTriggersMainArea.h \
    dlgVarsMainArea.h \
    EAction.h \
    exitsTreeWidget.h \
    glWidget.h \
    Host.h \
    HostManager.h \
    HostPool.h \
    irc/include/irc.h \
    irc/include/ircbuffer.h \
    irc/include/ircsession.h \
    irc/include/ircutil.h \
    LuaInterface.h \
    KeyUnit.h \
    mudlet.h \
    ScriptUnit.h \
    T2DMap.h \
    TAction.h \
    TAlias.h \
    TArea.h \
    TAStar.h \
    TBuffer.h \
    TCommandLine.h \
    TConsole.h \
    TDebug.h \
    TEasyButtonBar.h \
    TEvent.h \
    TFlipButton.h \
    TForkedProcess.h \
    THighlighter.h \
    TimerUnit.h \
    TKey.h \
    TLabel.h \
    TLuaInterpreter.h \
    TMap.h \
    TMatchState.h \
    Tree.h \
    TriggerUnit.h \
    TRoom.h \
    TRoomDB.h \
    TScript.h \
    TSplitter.h \
    TSplitterHandle.h \
    TTextEdit.h \
    TTimer.h \
    TToolBar.h \
    TTreeWidget.h \
    TTreeWidgetItem.h \
    TTrigger.h \
    TVar.h \
    VarUnit.h \
    XMLimport.h \
    XMLexport.h


FORMS += \
    ui/about_dialog.ui \
    ui/actions_main_area.ui \
    ui/aliases_main_area.ui \
    ui/color_trigger.ui \
    ui/composer.ui \
    ui/connection_profiles.ui \
    ui/console.ui \
    ui/custom_lines.ui \
    ui/custom_lines_properties.ui \
    ui/delete_profile_confirmation.ui \
    ui/dlgPackageExporter.ui \
    ui/extended_search_area.ui \
    ui/filters_main_area.ui \
    ui/help_dialog.ui \
    ui/irc.ui \
    ui/keybindings_main_area.ui \
    ui/lacking_mapper_script.ui \
    ui/main_window.ui \
    ui/mapper_room_color.ui \
    ui/mapper.ui \
    ui/module_manager.ui \
    ui/notes_editor.ui \
    ui/options_area_actions.ui \
    ui/options_area_aliases.ui \
    ui/options_area_filters.ui
    ui/options_area_scripts.ui \
    ui/options_area_timers.ui \
    ui/options_area_triggers.ui \
    ui/package_manager.ui \
    ui/package_manager_unpack.ui \
    ui/profile_preferences.ui \
    ui/room_exits.ui \
    ui/scripts_main_area.ui \
    ui/set_room_area.ui \
    ui/source_editor_area.ui \
    ui/system_message_area.ui \
    ui/timers_main_area.ui \
    ui/trigger_editor.ui \
    ui/trigger_pattern_edit.ui \
    ui/triggers_main_area.ui \
    ui/vars_main_area.ui


win32: {
    SOURCES += lua_yajl.c
}

unix: {
    SOURCES += lua_yajl1.c
}

TEMPLATE = app
TARGET = mudlet
RESOURCES = mudlet_alpha.qrc
DISTFILES += paragraph.css
unix: {
    luaglobal.path = $$SHARE_DIR
    luaglobal.files = LuaGlobal.lua
    documentation.path = $$SHARE_DIR
    documentation.files = mudlet_documentation.html
    fonts.path = $$SHARE_DIR
    fonts.files = fonts/ttf-bitstream-vera-1.10/*
    target.path = $$BIN_DIR
}
INSTALLS += fonts \
    luaglobal \
    documentation \
    target

OTHER_FILES += \
    Mudlet_Programming_Reference.txt \
    mudlet_documentation.html \
    mudlet_documentation.txt \
    mudlet_manual.txt \
    doc/Mudlet_API_Reference.pdf \
    doc/Mudlet_API_Reference.odt \
    doc/Mudlet_API_Reference.html \
    mudlet-lua/lua/GMCP.lua \
    mudlet-lua/lua/GUIUtils.lua \
    mudlet-lua/lua/DB.lua \
    mudlet-lua/lua/DebugTools.lua \
    mudlet-lua/lua/TableUtils.lua \
    mudlet-lua/lua/StringUtils.lua \
    mudlet-lua/lua/Other.lua \
    mudlet-lua/lua/LuaGlobal.lua \
    mudlet-lua/lua/geyser/GeyserWindow.lua \
    mudlet-lua/lua/geyser/GeyserVBox.lua \
    mudlet-lua/lua/geyser/GeyserUtil.lua \
    mudlet-lua/lua/geyser/GeyserTests.lua \
    mudlet-lua/lua/geyser/GeyserSetConstraints.lua \
    mudlet-lua/lua/geyser/GeyserReposition.lua \
    mudlet-lua/lua/geyser/GeyserMiniConsole.lua \
    mudlet-lua/lua/geyser/GeyserMapper.lua \
    mudlet-lua/lua/geyser/GeyserLabel.lua \
    mudlet-lua/lua/geyser/GeyserHBox.lua \
    mudlet-lua/lua/geyser/GeyserGeyser.lua \
    mudlet-lua/lua/geyser/GeyserGauge.lua \
    mudlet-lua/lua/geyser/GeyserContainer.lua \
    mudlet-lua/lua/geyser/GeyserColor.lua \
    mudlet-lua/lua/geyser/Geyser.lua \
    ../README
