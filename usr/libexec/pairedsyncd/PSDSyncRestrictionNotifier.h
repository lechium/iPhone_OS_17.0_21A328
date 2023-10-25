//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSDScheduler;

@interface PSDSyncRestrictionNotifier : NSObject
{
    PSDScheduler *_scheduler;	// 8 = 0x8
    int _lastSyncSwitchIDNotifyToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000357c
- (void)setNotifyToken:(int)arg1 withValue:(unsigned long long)arg2 withNotificationName:(id)arg3;	// IMP=0x0010000000003405
- (int)notifyTokenWithName:(id)arg1;	// IMP=0x0010000000003339
- (void)setSyncComplete;	// IMP=0x00100000000032a6
- (void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000325e
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x001000000000320b
- (void)dealloc;	// IMP=0x00100000000031ae
- (id)initWithScheduler:(id)arg1;	// IMP=0x001000000000311d
- (id)init;	// IMP=0x00100000000030c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
