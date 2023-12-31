//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDSDGroupContextNotifyingObserverDelegate;

@interface IDSDGroupContextNotifyingObserver : NSObject
{
    id <IDSDGroupContextNotifyingObserverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000126628
@property(retain, nonatomic) id <IDSDGroupContextNotifyingObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(id)arg1;	// IMP=0x00100000001265f7
- (void)groupContext:(id)arg1 didReceiveDecryptionFailureForGroup:(id)arg2;	// IMP=0x00100000001265de
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;	// IMP=0x00100000001265c2
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;	// IMP=0x00100000001265a9
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;	// IMP=0x0010000000126590
- (void)dealloc;	// IMP=0x001000000012654d
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000001264e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

