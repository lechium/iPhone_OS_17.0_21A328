//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16DaemoniOSLibrary25SDAirDropNearFieldService : NSObject
{
    MISSING_TYPE *defaultPollingType;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *deviceStatus;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *nearFieldControllerIsAvailable;	// 48 = 0x30
    MISSING_TYPE *nearFieldController;	// 56 = 0x38
    MISSING_TYPE *airDropUISessionManager;	// 64 = 0x40
    MISSING_TYPE *airDropClient;	// 104 = 0x68
    MISSING_TYPE *processingTap;	// 0 = 0x0
    MISSING_TYPE *localExchangePayload;	// 0 = 0x0
    MISSING_TYPE *isAirDropPickerUIActive;	// 25 = 0x19
    MISSING_TYPE *notificationCenter;	// 0 = 0x0
    MISSING_TYPE *enabled;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *_nearbySharingInteraction;	// 0 = 0x0
    MISSING_TYPE *assertionsByNearbySharingInteractionID;	// 0 = 0x0
    MISSING_TYPE *singleBandManager;	// 0 = 0x0
    MISSING_TYPE *nearbySharingAssertionTimeoutWorkItem;	// 6176768 = 0x5e4000
    MISSING_TYPE *cancelNearbySharingInteractionWorkItem;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000263660
- (id)init;	// IMP=0x001000000026e1d0
- (void)handleProximityAppleIDSignInCompleted;	// IMP=0x001000000026e1a0
- (void)handleProximityAppleIDSignInStarted;	// IMP=0x001000000026de00
- (void)handleBuddyExited;	// IMP=0x001000000026d670
- (void)handleBluetoothStateChanged;	// IMP=0x001000000026d2d0
- (void)handleWifiStateChanged;	// IMP=0x001000000026cd60
- (void)screenStateChangedWithNotification:(id)arg1;	// IMP=0x001000000026c780
- (void)keyBagLockStateChangeWithNotification:(id)arg1;	// IMP=0x001000000026c220
- (void)dealloc;	// IMP=0x00100000002635a0

@end
