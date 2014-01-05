//
//  AppDelegate.h
//  MaKeePass
//
//  Created by Taco van Dijk on 8/16/12.
//  Copyright (c) 2012 Self. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "KdbLib.h"
#import "MenubarController.h"
#import "PanelController.h"
#import "DDHotKeyCenter.h"

@interface AppDelegate : NSObject <NSApplicationDelegate,PanelControllerDelegate>
{
    KdbTree *kdbTree;
    KdbEntry *currentEntry;
    MenubarController * menuBarController;
    PanelController * panelController;
    NSString * dbPath;
    NSString * keyPath;
}

@property (nonatomic, retain) MenubarController *menubarController;
@property (nonatomic, retain, readonly) PanelController *panelController;
@property (nonatomic, retain) KdbEntry * currentEntry;
@property (nonatomic, retain) NSString * dbPath;
@property (nonatomic, retain) NSString *keyPath;

- (void) search:(NSString*)text;
- (void) hotkeyWithEvent:(NSEvent *)hkEvent;
- (void) openWithConfiguration;
- (void) readDB;

@end