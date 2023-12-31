//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface ADMyriadService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSDate *_lastTimeWon;	// 16 = 0x10
    NSDate *_lastTimeStereoPartnerWon;	// 24 = 0x18
    NSString *_stereoPartnerIdentifier;	// 32 = 0x20
}

+ (id)sharedService;	// IMP=0x0040000000253431
- (void).cxx_destruct;	// IMP=0x0020000000253311
- (void)_handleLastWinRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000025314c
- (void)_handleRequest:(id)arg1 fromDeviceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000252ece
- (void)_handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000252c0d
- (void)handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000252af8
- (void)_syncLastWinWithStereoPartner;	// IMP=0x0010000000252af2
- (void)_setLastTimeStereoPartnerWon:(id)arg1;	// IMP=0x00100000002529de
- (void)_setStereoPartnerIdentifier:(id)arg1;	// IMP=0x00100000002528b3
- (void)lastMyriadWinForStereoPartner:(CDUnknownBlockType)arg1;	// IMP=0x0010000000252826
- (void)_setLastMyriadWin:(id)arg1;	// IMP=0x00100000002527c2
- (void)setMyriadDecisionResult:(_Bool)arg1;	// IMP=0x00100000002526e1
- (id)init;	// IMP=0x0010000000252658

@end

