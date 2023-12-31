//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>
#import <WebBookmarks/WBTabProvider-Protocol.h>

@class NSArray, NSString, WBBrowserState, WBWindow, WBWindowState;

@protocol WBStateProvider <NSObject, WBTabProvider>
@property(readonly, copy, nonatomic) NSArray *profiles;
@property(readonly, copy, nonatomic) NSArray *windows;
@property(readonly, nonatomic) int windowsFolderSpecialID;
@property(readonly, copy, nonatomic) NSArray *windowStates;
@property(readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property(readonly, nonatomic) WBBrowserState *browserState;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
@property(readonly, nonatomic, getter=hasCompletedMigration) _Bool completedMigration;
- (WBWindowState *)windowStateWithUUID:(NSString *)arg1;
- (WBWindow *)windowWithUUID:(NSString *)arg1;
@end

