//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PLSyndicationPreferencesListener : NSObject
{
    NSObject<OS_dispatch_queue> *_listenerQueue;	// 8 = 0x8
    CDUnknownBlockType _listenerBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001561a
- (void)_triggerGuestAssetSyncUpdate;	// IMP=0x0010000000015367
- (void)_handleSettingChange;	// IMP=0x0010000000015355
- (void)start;	// IMP=0x00100000000151c3
- (id)init;	// IMP=0x0010000000015194

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

