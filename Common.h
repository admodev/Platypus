/*
    Copyright (c) 2003-2015, Sveinbjorn Thordarson <sveinbjornt@gmail.com>
    All rights reserved.

    Redistribution and use in source and binary forms, with or without modification, 
    are permitted provided that the following conditions are met:
 
    1. Redistributions of source code must retain the above copyright notice, this 
    list of conditions and the following disclaimer.
 
    2. Redistributions in binary form must reproduce the above copyright notice, this 
    list of conditions and the following disclaimer in the documentation and/or other 
    materials provided with the distribution.
 
    3. Neither the name of the copyright holder nor the names of its contributors may 
    be used to endorse or promote products derived from this software without specific 
    prior written permission.
 
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
    NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
    PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
    POSSIBILITY OF SUCH DAMAGE.
*/

// General program information
#define PROGRAM_NAME                @"Platypus"
#define PROGRAM_VERSION             @"5.1"
#define PROGRAM_CREATOR_STAMP       [NSString stringWithFormat:@"%@-%@", PROGRAM_NAME, PROGRAM_VERSION]
#define PROGRAM_MIN_SYS_VERSION     @"10.7.0"
#define PROGRAM_BUNDLE_IDENTIFIER   [NSString stringWithFormat:@"org.sveinbjorn.%@", PROGRAM_NAME]
#define PROGRAM_AUTHOR              @"Sveinbjorn Thordarson"
#define PROGRAM_WEBSITE             @"http://sveinbjorn.org/platypus"
#define PROGRAM_GITHUB_WEBSITE      @"http://github.com/sveinbjornt/Platypus"
#define PROGRAM_DONATIONS           @"http://sveinbjorn.org/donations"
#define PROGRAM_PROFILE_UTI         @"org.sveinbjorn.platypus-profile"
#define PROGRAM_PROFILE_SUFFIX      @"platypus"
#define PROGRAM_README_FILE         @"Readme.html"
#define PROGRAM_MANPAGE             @"platypus.man.html"
#define PROGRAM_LICENSE_FILE        @"License.html"
#define PROGRAM_DOCUMENTATION       @"Documentation.html"
#define PROGRAM_MANPAGE_URL         @"http://sveinbjorn.org/files/manpages/platypus.man.html"
#define PROGRAM_DOCUMENTATION_URL   @"http://sveinbjorn.org/files/manpages/PlatypusDocumentation.html"
#define PROGRAM_DOCUMENTATION_DROP_SETTINGS_URL [NSString stringWithFormat:@"%@#41",PROGRAM_DOCUMENTATION_URL]
#define PROGRAM_DOCUMENTATION_ARGS_SETTINGS_URL [NSString stringWithFormat:@"%@#22",PROGRAM_DOCUMENTATION_URL]

// Folders
#define APP_SUPPORT_FOLDER          [@"~/Library/Application Support/Platypus/" stringByExpandingTildeInPath]
#define TEMP_FOLDER                 [NSString stringWithFormat:@"%@/", APP_SUPPORT_FOLDER]
#define PROFILES_FOLDER             [NSString stringWithFormat:@"%@/Profiles", APP_SUPPORT_FOLDER]
#define EXAMPLES_FOLDER             [NSString stringWithFormat:@"%@/Examples/", [[NSBundle mainBundle] resourcePath]]

#define NEW_SCRIPT_FILENAME         @"Script"

// Default text settings
#define DEFAULT_OUTPUT_FONT         @"Monaco"
#define DEFAULT_OUTPUT_FONTSIZE     13.0
#define DEFAULT_OUTPUT_FG_COLOR     @"#000000"
#define DEFAULT_OUTPUT_BG_COLOR     @"#ffffff"
#define DEFAULT_OUTPUT_TXT_ENCODING NSUTF8StringEncoding

// Command line tool seetings
#define CMDLINE_PROGNAME_IN_BUNDLE  @"platypus_clt"
#define CMDLINE_PROGNAME            @"platypus"
#define CMDLINE_SCRIPTEXEC_BIN_NAME @"ScriptExec"
#define CMDLINE_DEFAULT_ICON_NAME   @"PlatypusDefault.icns"
#define CMDLINE_NIB_NAME            @"MainMenu.nib"
#define CMDLINE_VERSION_ARG_FLAG    "version"
#define CMDLINE_BASE_INSTALL_PATH   @"/usr/local"
#define CMDLINE_BIN_PATH            [NSString stringWithFormat:@"%@/bin", CMDLINE_BASE_INSTALL_PATH]
#define CMDLINE_TOOL_PATH           [NSString stringWithFormat:@"%@/%@", CMDLINE_BIN_PATH, CMDLINE_PROGNAME]
#define CMDLINE_SHARE_PATH          [NSString stringWithFormat:@"%@/share/%@", CMDLINE_BASE_INSTALL_PATH, CMDLINE_PROGNAME]
#define CMDLINE_MANDIR_PATH         [NSString stringWithFormat:@"%@/share/man/man1", CMDLINE_BASE_INSTALL_PATH]
#define CMDLINE_MANPAGE_PATH        [NSString stringWithFormat:@"%@/%@.1", CMDLINE_MANDIR_PATH, CMDLINE_PROGNAME]
#define CMDLINE_EXEC_PATH           [NSString stringWithFormat:@"%@/%@", CMDLINE_SHARE_PATH, CMDLINE_SCRIPTEXEC_BIN_NAME]
#define CMDLINE_NIB_PATH            [NSString stringWithFormat:@"%@/%@", CMDLINE_SHARE_PATH, CMDLINE_NIB_NAME]
#define CMDLINE_SCRIPT_EXEC_PATH    [NSString stringWithFormat:@"%@/%@", CMDLINE_SHARE_PATH, CMDLINE_SCRIPTEXEC_BIN_NAME]
#define CMDLINE_ICON_PATH           [NSString stringWithFormat:@"%@/%@", CMDLINE_SHARE_PATH, CMDLINE_DEFAULT_ICON_NAME]
#define CMDLINE_ARG_SEPARATOR       @"|"

#define IBTOOL_PATH                 @"/Applications/Xcode.app/Contents/Developer/usr/bin/ibtool"

#define DEFAULT_EDITOR              @"Built-In"
#define DEFAULT_INTERPRETER         @"/bin/sh"
#define DEFAULT_VERSION             @"1.0"
#define DEFAULT_APP_NAME            @"PlatypusApp"
#define DEFAULT_DESTINATION_PATH    [[NSString stringWithFormat:@"~/Desktop/%@.app", DEFAULT_APP_NAME] stringByExpandingTildeInPath]
#define DEFAULT_SCRIPT_TYPE         @"Shell"
#define DEFAULT_SUFFIXES            @[]
#define DEFAULT_UTIS                @[(NSString *)kUTTypeItem, (NSString *)kUTTypeFolder]
#define DEFAULT_STATUS_ITEM_TITLE   @"Title"

#define EDITOR_FONT                 [NSFont userFixedPitchFontOfSize:13.0]
#define SHELL_COMMAND_STRING_FONT   [NSFont userFixedPitchFontOfSize:11.0]

// notifications
#define PLATYPUS_APP_SPEC_CREATION_NOTIFICATION     @"PlatypusAppSpecCreationNotification"
#define PLATYPUS_APP_SIZE_CHANGED_NOTIFICATION      @"PlatypusAppSizeChangedNotification"

// path to temp script file
#define TMP_STDIN_PATH              @"/tmp/.platypus_stdin.XXXXXX"

// status item display types
#define PLATYPUS_STATUSITEM_DISPLAY_TYPE_TEXT @"Text"
#define PLATYPUS_STATUSITEM_DISPLAY_TYPE_ICON @"Icon"
#define PLATYPUS_STATUSITEM_DISPLAY_TYPE_DEFAULT PLATYPUS_STATUSITEM_DISPLAY_TYPE_TEXT

// execution style
typedef enum PlatypusExecStyle {
    PlatypusExecStyle_Normal = 0,
    PlatypusExecStyle_Authenticated = 1
} PlatypusExecStyle;

// output modes
typedef enum PlatypusOutputType {
    PlatypusOutputType_None = 0,
    PlatypusOutputType_ProgressBar = 1,
    PlatypusOutputType_TextWindow = 2,
    PlatypusOutputType_WebView = 3,
    PlatypusOutputType_StatusMenu = 4,
    PlatypusOutputType_Droplet = 5
} PlatypusOutputType;

#define DEFAULT_OUTPUT_TYPE                     PlatypusOutputType_TextWindow

// execution style
typedef enum PlatypusStatusItemStyle {
    PlatypusStatusItemStyle_Title = 0,
    PlatypusStatusItemStyle_Icon = 1
} PlatypusStatusItemStyle;

#define PLATYPUS_OUTPUT_STRING_NONE             @"None"
#define PLATYPUS_OUTPUT_STRING_PROGRESS_BAR     @"Progress Bar"
#define PLATYPUS_OUTPUT_STRING_TEXT_WINDOW      @"Text Window"
#define PLATYPUS_OUTPUT_STRING_WEB_VIEW         @"Web View"
#define PLATYPUS_OUTPUT_STRING_STATUS_MENU      @"Status Menu"
#define PLATYPUS_OUTPUT_STRING_DROPLET          @"Droplet"

#define DEFAULT_OUTPUT_TYPE_STRING              [PLATYPUS_OUTPUT_TYPE_NAMES objectAtIndex:DEFAULT_OUTPUT_TYPE]

// array of output types, used for validation
#define PLATYPUS_OUTPUT_TYPE_NAMES   @[\
    PLATYPUS_OUTPUT_STRING_NONE, \
    PLATYPUS_OUTPUT_STRING_PROGRESS_BAR, \
    PLATYPUS_OUTPUT_STRING_TEXT_WINDOW, \
    PLATYPUS_OUTPUT_STRING_WEB_VIEW, \
    PLATYPUS_OUTPUT_STRING_STATUS_MENU, \
    PLATYPUS_OUTPUT_STRING_DROPLET, \
]

// output type macros

#define IsValidOutputType(X)        ( (X) > 0 && (X) < [PLATYPUS_OUTPUT_TYPE_NAMES count] )

#define IsValidOutputTypeString(X)  [PLATYPUS_OUTPUT_TYPE_NAMES containsObject:(X)]

#define OutputTypeForString(X)      [PLATYPUS_OUTPUT_TYPE_NAMES indexOfObject:(X)]

#define IsTextStyledOutputType(X)   (   (X) == PlatypusOutputType_ProgressBar || \
                                        (X) == PlatypusOutputType_TextWindow || \
                                        (X) == PlatypusOutputType_StatusMenu  )

#define IsTextStyledOutputTypeString(X)  (  [(X) isEqualToString:PLATYPUS_OUTPUT_STRING_PROGRESS_BAR] || \
                                            [(X) isEqualToString:PLATYPUS_OUTPUT_STRING_TEXT_WINDOW] || \
                                            [(X) isEqualToString:PLATYPUS_OUTPUT_STRING_STATUS_MENU]  )

#define IsTextSizableOutputType(X) (    (X) == PlatypusOutputType_ProgressBar || \
                                        (X) == PlatypusOutputType_TextWindow || \
                                        (X) == PlatypusOutputType_WebView  )

#define IsTextViewScrollableOutputType(X) ( (X) == PlatypusOutputType_ProgressBar || \
                                            (X) == PlatypusOutputType_TextWindow )

// App Spec keys

extern NSString * const AppSpecKey_Creator;
extern NSString * const AppSpecKey_ExecutablePath;
extern NSString * const AppSpecKey_NibPath;
extern NSString * const AppSpecKey_DestinationPath;
extern NSString * const AppSpecKey_Overwrite;
extern NSString * const AppSpecKey_SymlinkFiles;
extern NSString * const AppSpecKey_StripNib;
extern NSString * const AppSpecKey_XMLPlistFormat;
extern NSString * const AppSpecKey_Name;
extern NSString * const AppSpecKey_ScriptPath;
extern NSString * const AppSpecKey_InterfaceType;
extern NSString * const AppSpecKey_IconPath;
extern NSString * const AppSpecKey_Interpreter;
extern NSString * const AppSpecKey_InterpreterArgs;
extern NSString * const AppSpecKey_ScriptArgs;
extern NSString * const AppSpecKey_Version;
extern NSString * const AppSpecKey_Identifier;
extern NSString * const AppSpecKey_Author;

extern NSString * const AppSpecKey_Droppable;
extern NSString * const AppSpecKey_Secure;
extern NSString * const AppSpecKey_Authenticate;
extern NSString * const AppSpecKey_RemainRunning;
extern NSString * const AppSpecKey_RunInBackground;

extern NSString * const AppSpecKey_BundledFiles;

extern NSString * const AppSpecKey_Suffixes;
extern NSString * const AppSpecKey_Utis;
extern NSString * const AppSpecKey_AcceptText;
extern NSString * const AppSpecKey_AcceptFiles;
extern NSString * const AppSpecKey_Service;
extern NSString * const AppSpecKey_PromptForFile;
extern NSString * const AppSpecKey_DocIconPath;

extern NSString * const AppSpecKey_TextEncoding;
extern NSString * const AppSpecKey_TextFont;
extern NSString * const AppSpecKey_TextSize;
extern NSString * const AppSpecKey_TextColor;
extern NSString * const AppSpecKey_TextBackgroundColor;

extern NSString * const AppSpecKey_StatusItemDisplayType;
extern NSString * const AppSpecKey_StatusItemTitle;
extern NSString * const AppSpecKey_StatusItemIcon;
extern NSString * const AppSpecKey_StatusItemUseSysfont;
extern NSString * const AppSpecKey_StatusItemIconIsTemplate;

extern NSString * const AppSpecKey_IsExample; // examples only
extern NSString * const AppSpecKey_ScriptText; // examples only
extern NSString * const AppSpecKey_ScriptName; // examples only

// abbreviations, Obj-C is sometimes tediously verbose
#define FILEMGR     [NSFileManager defaultManager]
#define DEFAULTS    [NSUserDefaults standardUserDefaults]
#define WORKSPACE   [NSWorkspace sharedWorkspace]

// logging

#ifdef DEBUG
    #define PLog(...) NSLog(__VA_ARGS__)
#else
    #define PLog(...)
#endif

