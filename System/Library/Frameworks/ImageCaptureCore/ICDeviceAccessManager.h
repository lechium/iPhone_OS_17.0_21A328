//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDeviceAccessManager : NSObject
{
    struct sqlite3 *_externalMediaAccessDB;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_deviceAccessQueue;	// 16 = 0x10
}

+ (id)sharedAccessManager;	// IMP=0x006000000001bde4
@property NSObject<OS_dispatch_queue> *deviceAccessQueue; // @synthesize deviceAccessQueue=_deviceAccessQueue;
- (_Bool)captureUserIntentForBundleIdentifier:(id)arg1 withNotification:(id)arg2;	// IMP=0x000000000001e85e
- (void)displayAlertForApplication:(id)arg1 withNotification:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e7ee
- (_Bool)validateBundleIdentifierInstalled:(id)arg1;	// IMP=0x000000000001e4e8
- (void)revokeBundleIdentifier:(id)arg1;	// IMP=0x000000000001e218
- (unsigned long long)bundleIdentifier:(id)arg1 stateForAccessType:(id)arg2;	// IMP=0x000000000001e008
- (_Bool)internalBundleIdentifierHasAccess:(id)arg1;	// IMP=0x000000000001deb7
- (id)bundleIdentifiersWithAccessType:(id)arg1;	// IMP=0x000000000001d96e
- (void)updateBundleIdentifier:(id)arg1 accessType:(id)arg2 withState:(unsigned long long)arg3;	// IMP=0x000000000001d692
- (void)addBundleIdentifier:(id)arg1;	// IMP=0x000000000001d471
- (id)allBundleIdentifiers;	// IMP=0x000000000001cea4
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;	// IMP=0x000000000001c4d0
- (void)updateApplicationWithBundleIdentifier:(id)arg1 withStatus:(_Bool)arg2;	// IMP=0x000000000001bfa0
- (id)bundleIdentifiersAccessingExternalCameras;	// IMP=0x000000000001be29
- (void)dealloc;	// IMP=0x000000000001bcf3
- (id)init;	// IMP=0x000000000001b903

@end

