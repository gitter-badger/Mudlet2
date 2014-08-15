lessThan(QT_MAJOR_VERSION, 5): error("Sorry but this version of Mudlet requires Qt5 libraries.")

# disable Qt adding -Wall for us, insert it ourselves so we can add -Wno-* after.
CONFIG += warn_off
# ignore unused parameters, because boost has a ton of them and that is not
# something we need to know.

## Some platforms default the release build optimisation to be set to -O2 and
## some users might want to increase this to -03 (or for a smaller application,
## to -Os) - uncomment the next two lines that converts any -O0, -O1, -O2 or -Os
## already present to -03 and adds it if not; change the last thing on both
## lines if that is not what is wanted:
#QMAKE_CXXFLAGS_RELEASE ~= s/-O[s012]/-O3
#QMAKE_CXXFLAGS_RELEASE *= -O3

QMAKE_CXXFLAGS_RELEASE += -Wall -Wno-deprecated -Wno-unused-local-typedefs -Wno-unused-parameter
QMAKE_CXXFLAGS_DEBUG += -Wall -Wno-deprecated -Wno-unused-local-typedefs -Wno-unused-parameter
# Note: by default windows targets include the "debug_and_release" CONFIG value
# For other platforms this adds it:
CONFIG += debug_and_release
# Note: check the code further down that set the TARGET variable, there is some
# commented out code that changes the name of the debug TARGET so that it has a
# different name, otherwise they will clash if both are built then installed to
# the same location!

# Now set the build type to one of release, debug or build_all (for both)
CONFIG += debug

# Mac specific stuff
macx: {
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.5
# Seen in old mac_src.pro may be helpful, may also be useful on other platforms
    cache()
}

QT += network opengl uitools multimedia

# Set the project type early as it has to effect other things further down!
TEMPLATE = app

# Set the current Mudlet Version, unfortunately the Qt documentation suggests
# that only a #.#.# form without any other alphanumberic suffixes is required:
VERSION = 3.0.1

# Leave the value of the following empty (line should be "BUILD =" without
# quotes) - it is NOT a Qt built-in variable - for a release build or, if you
# are distributing modified code, it would be useful if you could put something
# to distinguish the version:
BUILD = -rc2-dev

# Changing the above pair of values affects: ctelnet.cpp, main.cpp, mudlet.cpp
# dlgAboutDialog.cpp and TLuaInterpreter.cpp.  It does NOT cause those files to
# be automatically rebuilt so you will need to 'touch' them...!

# Use the following APP_VERSION, APP_BUILD and APP_TARGET defines in the source
# code if needed.
# IMPORTANT:
# To insure consistency please ensure the SAME of the first two values are also
# assigned to the "APP_VERSION" and "APP_BUILD" variables in the top level cmake
# project file, i.e. ../CMakeLists.txt
DEFINES += APP_VERSION=\\\"$${VERSION}\\\"
DEFINES += APP_BUILD=\\\"$${BUILD}\\\"
# Capitalize the name for Mudlet, so it appears as 'Mudlet' and not 'mudlet' in
# the .dmg installer:
macx {
    TARGET = Mudlet
} else {
    TARGET = mudlet
}

## If one is building/installing both debug and release versions at the same time
## i.e. if CONFIG includes "debug_and_release" AND "build_all" uncommenting this
## will add a suffix to the debug executable:
#CONFIG(debug, debug|release) {
#    win32 {
#        TARGET = $$join(TARGET,,d)
#    } else {
#        TARGET = $$join(TARGET,,,_debug)
#    }
#}

# Create a record of what the executable will be called by hand NB. "cygwin-g++"
# although a subset of "unix" NOT "win32" DOES create executables with an ".exe"
# extension!
DEFINES += APP_TARGET=\\\"$${TARGET}$${TARGET_EXT}\\\"

DEPENDPATH += .
INCLUDEPATH += .
LIBLUA = -llua5.1
#!exists(/usr/lib/x86_64-linux-gnu/liblua5.1.a):LIBLUA = -llua

# automatically link to LuaJIT if it exists
#exists(/usr/lib/x86_64-linux-gnu/libluajit-5.1.a):LIBLUA = -L/usr/lib/x86_64-linux-gnu/ -lluajit-5.1

# try -O1 —fsanitize=address for AddressSanitizer w/ clang
# use -DDEBUG_TELNET to show telnet commands

# Specify default location for Lua files, in OS specific LUA_DEFAULT_DIR value
# below, if this is not done then a hardcoded default of a ./mudlet-lua/lua
# from the executable's location will be used.  Mudlet will now moan and ask
# the user to find them if the files (and specifically the <10KByte
# "LuaGlobal.lua" one) is not accessable (read access only required) during
# startup.  The precise directory is remembered once found (and stored in the
# Mudlet configuration file as "systemLuaFilePath") but if the installer places
# the files in the place documented here the user will not be bothered by this.
## ABOVE IS NOT TRUE - CODE HAS NOT BEEN PULLED INTO PLACE FOR THIS ***YET***

# (Geyser files should be in a "geyser" subdirectory of this)
unix: {
    macx: {
# use pkg-config whenever possible for linking on a mac
# the same could be done on the Linux platform as well?
# http://stackoverflow.com/a/16972067
# Turn off a default that does NOT use pkg-config:
        QT_CONFIG -= no-pkg-config
        CONFIG += link_pkgconfig
# Packages to use:
        PKGCONFIG += hunspell lua yajl libpcre libzip
        LIBS += \
        -lzip \
        -lz
    }
    !macx: {
# Non-macx (or should that be mac, darwin or osx), i.e. all other *nix builds,
# if something else is required for *BSD {bsd netbsd openbsd}, Solaris {solaris}
# Cygwin {cygwin} etc. then sort it out in another <machine>: { } and add the
# inverse to the above "!macx:" as: "!macx:!<machine>: {"
#
# For Linux at least:
# Distribution packagers would be using PREFIX = /usr but this is accepted
# destination place for local builds for software for all users:
    isEmpty( PREFIX ) PREFIX = /usr/local
    isEmpty( DATAROOTDIR ) DATAROOTDIR = $${PREFIX}/share
    isEmpty( DATADIR ) DATADIR = $${DATAROOTDIR}/mudlet
# According to Linux FHS /usr/local/games is an alternative location for leasure time BINARIES 8-):
    isEmpty( BINDIR ) BINDIR = $${PREFIX}/bin
# Again according to FHS /usr/local/share/games is the corresponding place for locally built games documentation:
    isEmpty( DOCDIR ) DOCDIR = $${DATAROOTDIR}/doc/mudlet
    LIBS += -lpcre \
        $$LIBLUA \
        -lhunspell \
        -L/usr/local/lib/ \
        -lyajl \
        -lGLU \
        -lzip \
        -lz
    INCLUDEPATH += /usr/include/lua5.1
    LUA_DEFAULT_DIR = $${DATADIR}/lua
} else:win32: {
    LIBS += -L"C:\\mudlet5_package" \
        -L"C:\\mingw32\\lib" \
        -llua51 \
        -lpcre \
        -lhunspell \
        -llibzip \
        -lzlib \
        -llibzip \
        -L"C:\\mudlet5_package\\yajl-master\\yajl-2.0.5\\lib" \
        -lyajl
    INCLUDEPATH += "c:\\mudlet_package_MINGW\\Lua_src\\include" \
        "C:\\mingw32\\include" \
        "c:\\mudlet_package_MINGW\\zlib-1.2.5" \
        "C:\\mudlet5_package\\boost_1_54_0" \
        "c:\\mudlet_package_MINGW\\pcre-8.0-lib\\include" \
        "C:\\mudlet5_package\\yajl-master\\yajl-2.0.5\\include" \
        "C:\\mudlet5_package\\libzip-0.11.1\\lib" \
        "C:\\mudlet_package_MINGW\\hunspell-1.3.1\\src"
# Leave this undefined so mudlet::readSettings() preprocessing will fall back to
# hard-coded executable's /mudlet-lua/lua/ subdirectory
#    LUA_DEFAULT_DIR = $$clean_path($$system(echo %ProgramFiles%)/lua)
    }
}

unix {
    !macx: {
#   the "target" install set is handled automagically, just not very well...
        target.path = $${BINDIR}
        message("$${TARGET} will be installed to "$${target.path}"...")
#         DOCS.path = $${DOCS_DIR}
#         message("Documentation will be installed to "$${DOCS.path}"...")
        !isEmpty( LUA_DEFAULT_DIR ) {
# if a directory has been set for the lua files move the detail into the
# installation details for the unix case:
            LUA.path = $${LUA_DEFAULT_DIR}
            LUA_GEYSER.path = $${LUA.path}/geyser
# and define a preprocessor symbol LUA_DEFAULT_PATH with the value:
            DEFINES += LUA_DEFAULT_PATH=\\\"$${LUA_DEFAULT_DIR}\\\"
# and say what will happen:
            message("Lua files will be installed to "$${LUA.path}"...")
            message("Geyser lua files will be installed to "$${LUA_GEYSER.path}"...")
    } else {
#   For MacOs, this should duplicate the previous settings from the old mac_src.pro
        LUA.path = Contents/Resources
        LUA_GEYSER.path = $${LUA.path}/geyser
    }
}

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
    exitstreewidget.cpp \
    FontManager.cpp \
    glwidget.cpp \
    Host.cpp \
    HostManager.cpp \
    HostPool.cpp \
    irc/src/irc.cpp \
    irc/src/ircbuffer.cpp \
    irc/src/ircsession.cpp \
    irc/src/ircutil.cpp \
    KeyUnit.cpp \
    LuaInterface.cpp \
    lua_yajl.c \
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
    exitstreewidget.h \
    glwidget.h \
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
    XMLexport.h \
    XMLimport.h


FORMS += \
    ui/about_dialog.ui \
    ui/actions_main_area.ui \
    ui/aliases_main_area.ui \
    ui/color_trigger.ui \
    ui/composer.ui \
    ui/connection_profiles.ui \
    ui/custom_lines.ui \
    ui/custom_lines_properties.ui \
    ui/delete_profile_confirmation.ui \
    ui/dlgPackageExporter.ui \
    ui/extended_search_area.ui \
    ui/irc.ui \
    ui/keybindings_main_area.ui \
    ui/lacking_mapper_script.ui \
    ui/main_window.ui \
    ui/mapper.ui \
    ui/module_manager.ui \
    ui/notes_editor.ui \
    ui/options_area_actions.ui \
    ui/options_area_aliases.ui \
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
    ui/triggers_main_area.ui \
    ui/trigger_editor.ui \
    ui/trigger_pattern_edit.ui \
    ui/vars_main_area.ui


RESOURCES = mudlet_alpha.qrc


# To use QtCreator as a Unix installer the generated Makefile must have the
# following lists of files EXPLICITLY stated - IT IS NOT WORKABLE IF ONLY
# A PATH IS GIVEN AS AN ENTRY TO THE .files LIST - as was the case for a
# previous incarnation for macs.
#
# Select Qt Creator's "Project" Side tab and under the "Build and Run" top tab
# choose your Build Kit's "Run"->"Run Settings" ensure you have a "Make" step
# that - if you are NOT runnning QT Creator as root, which is the safest way
# (i.e safe = NOT root) - against:
# "Override <path to?>/make" has the entry: "/usr/bin/sudo"
# without the quotes, assuming /usr/bin is the location of "sudo"
# and against:
# "Make arguments" has the entry: "-A sh -c '/usr/bin/make install'"
# without the DOUBLE quotes but with the SINGLE quotes, assuming /usr/bin is the
# location of "make"
#
# This then will run "make install" via sudo with root privileges when you use
# the relevant "Deploy" option on the "Build" menu - and will ask you for YOUR
# password via a GUI dialog if needed - so that the files can be placed in the
# specified system directories to which a normal user (you?) does not have write
# access normally.

# Main lua files:
LUA.files = \
    $${PWD}/mudlet-lua/lua/DB.lua \
    $${PWD}/mudlet-lua/lua/DebugTools.lua \
    $${PWD}/mudlet-lua/lua/GMCP.lua \
    $${PWD}/mudlet-lua/lua/GUIUtils.lua \
    $${PWD}/mudlet-lua/lua/LuaGlobal.lua \
    $${PWD}/mudlet-lua/lua/Other.lua \
    $${PWD}/mudlet-lua/lua/StringUtils.lua \
    $${PWD}/mudlet-lua/lua/TableUtils.lua
LUA.depends = mudlet

# Geyser lua files:
LUA_GEYSER.files = \
    $${PWD}/mudlet-lua/lua/geyser/Geyser.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserColor.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserContainer.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserGauge.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserGeyser.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserHBox.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserLabel.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserMapper.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserMiniConsole.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserReposition.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserSetConstraints.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserTests.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserUtil.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserVBox.lua \
    $${PWD}/mudlet-lua/lua/geyser/GeyserWindow.lua \
LUA_GEYSER.depends = mudlet

# Documentation files:
# DOCS.files =


# Pull the docs and lua files into the project so they show up in the Qt Creator project files list
OTHER_FILES += \
#     ${DOCS.files} \
    ${LUA.files} \
    ${LUA_GEYSER.files} \
    ../README \
    ../COMPILE \
    ../COPYING \
    ../Doxyfile \
    ../INSTALL \
    mudlet_documentation.txt \
    mac-deploy.sh \
    ../mudlet.desktop \
    ../CMakeLists.txt \
    ../README.md \
    ../.travis.yml \
    osx-installer/mudlet-appdmg.json \
    osx-installer/osx.icns \
    osx-installer/mudlet_osx_installer_background.png \
    CMakeLists.txt \
    ../CI/travis.before_install.sh \
    ../CI/travis.install.sh \
    ../CI/travis.linux.before_install.sh \
    ../CI/travis.linux.install.sh \
    ../CI/travis.osx.before_install.sh \
    ../CI/travis.osx.install.sh \
    irc/CMakeLists.txt

# Unix Makefile installer:
# lua file installation, needs install, sudo, and a setting in /etc/sudo.conf
# or via enviromental variable SUDO_ASKPASS to something like ssh-askpass
# to provide a graphic password requestor needed to install software
unix:!macx {
# say what we want to get installed by "make install" (executed by 'deployment' step):
    INSTALLS += \
        target \
        LUA \
        LUA_GEYSER
    } else {
# Assumes the bundle system work enough like a makefile installer, but needs
# checking it ought to work...! (SlySven)
    QMAKE_BUNDLE_DATA += \
        LUA \
        LUA_GEYSER
    }
    # Set the .app's icns file
    ICON = osx-installer/osx.icns
}
