
QMAKE_CXXFLAGS_RELEASE += -O3 -Wno-deprecated-declarations -Wno-unused-local-typedefs -Wno-unused-parameter
QMAKE_CXXFLAGS_DEBUG += -O0 -Wno-deprecated-declarations -Wno-unused-local-typedefs -Wno-unused-parameter
#MOC_DIR = ./tmp
#OBJECTS_DIR = ./tmp
QT += network opengl uitools multimedia
DEPENDPATH += .

INCLUDEPATH += \
    irc/include \
    .

LIBLUA = -llua5.1
#!exists(/usr/lib/x86_64-linux-gnu/liblua5.1.a):LIBLUA = -llua

# Current Mudlet Version, unfortunately the Qt documentation suggests that only
# a #.#.# form without any other alphanumberic suffixes is required:
VERSION = 3.0.1
# Leave the value of the following empty (it is NOT a Qt built-in variable)
# for a release build or, if you are distributing modified code, it might be
# useful if you could put something to distinguish your version  8-) :
BUILD = -rc2-slysven
# Changing the above pair of values affects: ctelnet.cpp, main.cpp, mudlet.cpp
# & dlgAboutDialog.cpp.  It does NOT cause those files to be automatically rebuilt
# you will need to 'touch' them...!
# Use APP_VERSION & APP_BUILD in code if needed.
DEFINES += APP_VERSION=\\\"$$VERSION\\\"
DEFINES += APP_BUILD=\\\"$$BUILD\\\"
# automatically link to LuaJIT if it exists
#exists(/usr/lib/x86_64-linux-gnu/libluajit-5.1.a):LIBLUA = -L/usr/lib/x86_64-linux-gnu/ -lluajit-5.1

unix:LIBS += \
    -L/usr/local/lib/ \
    -lpcre \
    $$LIBLUA \
    -lhunspell \
    -lyajl \
    -lGLU \
    -lzip \
    -lz

win32:LIBS += -L"C:\\mudlet5_package" \
    -llua51 \
    -lpcre \
    -lhunspell \
    -llibzip \
    -lzlib \
    -llibzip \
    -L"C:\\mudlet5_package\\yajl-master\\yajl-2.0.5\\lib" \
    -lyajl

unix:INCLUDEPATH += \
    /usr/local/include \
    /usr/include/lua5.1

win32:INCLUDEPATH += "c:\\mudlet_package_MINGW\\Lua_src\\include" \
    "c:\\mudlet_package_MINGW\\zlib-1.2.5" \
    "C:\\mudlet5_package\\boost_1_54_0" \
    "c:\\mudlet_package_MINGW\\pcre-8.0-lib\\include" \
    "C:\\mudlet5_package\\yajl-master\\yajl-2.0.5\\include" \
    "C:\\mudlet5_package\\libzip-0.11.1\\lib" \
    "C:\\mudlet_package_MINGW\\hunspell-1.3.1\\src"

unix:isEmpty( INSTALL_PREFIX ):INSTALL_PREFIX = /usr/local
unix: {
    SHARE_DIR = /usr/local/share/mudlet
    BIN_DIR = $$INSTALL_PREFIX/bin
}

# Sorted into case insensitive order to make it easier to find changes (also
# makes it a bit easier to track (re)compilation progress for those users for
# whom a full one might take a while!)
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
    glWidget.cpp \
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
    TAction.cpp \
    TAlias.cpp \
    TArea.cpp \
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

win32:SOURCES += lua_yajl.c

unix:SOURCES += lua-yajl2-linux.c

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
    dlgRoomExits.h \
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
    FontManager.h \
    glWidget.h \
    Host.h \
    HostManager.h \
    HostPool.h \
    irc/include/irc.h \
    irc/include/ircbuffer.h \
    irc/include/ircsession.h \
    irc/include/ircutil.h \
    KeyUnit.h \
    LuaInterface.h \
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
    ui/options_area_filters.ui \
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




TEMPLATE = app
TARGET = mudlet
RESOURCES = mudlet_alpha.qrc

OTHER_FILES += \
    Mudlet_Programming_Reference.txt \
    mudlet_documentation.html \
    mudlet_documentation.txt \
    mudlet_manual.txt \
    doc/Mudlet_API_Reference.pdf \
    doc/Mudlet_API_Reference.odt \
    doc/Mudlet_API_Reference.html \
    ../COPYING

LUA_FILES = \
    mudlet-lua/lua/GMCP.lua \
    mudlet-lua/lua/GUIUtils.lua \
    mudlet-lua/lua/DB.lua \
    mudlet-lua/lua/DebugTools.lua \
    mudlet-lua/lua/TableUtils.lua \
    mudlet-lua/lua/StringUtils.lua \
    mudlet-lua/lua/Other.lua \
    mudlet-lua/lua/LuaGlobal.lua

LUA_GEYSER_FILES = \
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
    mudlet-lua/lua/geyser/Geyser.lua


# (Common, shareable on Linux) XML file collection
# Currently generic_mapper_script.xml is NOT used, perhaps it evolved into
# mudlet_mapper.xml
xml.files = \
    xml/3k-mapper.xml \
    xml/deleteOldProfiles.xml \
    xml/echo.xml \
    xml/generic_mapper_script.xml \
    xml/mudlet_mapper.xml \
    xml/run-lua-code-v4.xml \
    vzyor.mpackage


# Keep these as part of the collection of files:
NON_INSTALL_FILES += \
    ../README \
    ../COMPILE \
    ../Doxyfile

# Must append the above files that we hived off into their own collection
# otherwise the Qt Creator IDE doesn't see them...
OTHER_FILES += \
    $$LUA_FILES \
    $$LUA_GEYSER_FILES \
    $$NON_INSTALL_FILES


