//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplay, MCProfileConnection, MGFileWatcher, NSMutableArray, NSMutableSet, NSString;

@interface MGNotificationObserver : NSObject
{
    NSMutableSet *_blocks;	// 8 = 0x8
    int _type;	// 16 = 0x10
    NSString *_argument;	// 24 = 0x18
    union {
        NSMutableArray *_darwinTokens;
        struct __SCPreferences *_scPrefs;
        MGFileWatcher *_fileWatcher;
        MCProfileConnection *_mcConnection;
        CADisplay *_mainDisplay;
        void *_swBehaviorHandle;
        struct __CTServerConnection *_ctCenter;
        struct __SCDynamicStore *_scdynaStore;
    } _registration;	// 32 = 0x20
}

- (void)_removeBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003765
- (void)_addBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003734
- (void)_cancelRegistration;	// IMP=0x00000000000033bf
- (id)initWithType:(int)arg1 argument:(id)arg2;	// IMP=0x000000000000288c
- (void)startDynaStoreMonitoringWithArgument:(id)arg1;	// IMP=0x0000000000002652
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000002640
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000000262e
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000000261c
- (void)invokeBlocks;	// IMP=0x0000000000002526
- (void)dealloc;	// IMP=0x00000000000024dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000024d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
