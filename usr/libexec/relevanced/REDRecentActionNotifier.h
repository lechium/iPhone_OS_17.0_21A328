//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RERecentActionNotifier;

@interface REDRecentActionNotifier : NSObject
{
    RERecentActionNotifier *_notifier;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000000ab02
- (void).cxx_destruct;	// IMP=0x002000000000af32
- (void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(_Bool)arg2;	// IMP=0x001000000000aea1
- (void)dealloc;	// IMP=0x001000000000ae2b
- (id)init;	// IMP=0x001000000000ab57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
