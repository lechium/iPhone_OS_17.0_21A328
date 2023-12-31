//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFLibraryMessage, MFUserNotificationCenterController, NSString;

@interface _MFUserNotificationCenterSummaryClient : NSObject
{
    MFUserNotificationCenterController *_observer;	// 8 = 0x8
    MFLibraryMessage *_message;	// 16 = 0x10
    unsigned long long _attempts;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    double _ordering;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c13ab
@property(retain, nonatomic) MFUserNotificationCenterController *observer; // @synthesize observer=_observer;
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00100000000c1197
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x00100000000c1089
- (_Bool)wantsContentsOfType:(int)arg1;	// IMP=0x00100000000c107a
- (id)message;	// IMP=0x00100000000c106c
- (double)ordering;	// IMP=0x00100000000c1061
- (long long)priority;	// IMP=0x00100000000c1057
- (unsigned long long)_calculateOrdering;	// IMP=0x00100000000c0fe2
- (long long)_calculatePriority;	// IMP=0x00100000000c0fc0
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
- (id)initWithObserver:(id)arg1 message:(id)arg2;	// IMP=0x00100000000c0dbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

