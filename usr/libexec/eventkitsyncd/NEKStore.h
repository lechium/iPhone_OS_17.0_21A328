//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKEnvironment;
@protocol NEKChangeObserver;

@interface NEKStore : NSObject
{
    NEKEnvironment *_environment;	// 8 = 0x8
    id <NEKChangeObserver> _changeObserver;	// 16 = 0x10
}

+ (id)storeForReminderWithEnvironment:(id)arg1;	// IMP=0x004000000000a5fe
+ (id)storeForEventWithEnvironment:(id)arg1;	// IMP=0x001000000000a5b1
- (void).cxx_destruct;	// IMP=0x002000000000a6ae
@property(retain, nonatomic) id <NEKChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)deleteObjectByID:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a68d
- (void)deleteItem:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a687
- (void)updateICS:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x001000000000a681
- (void)updateCalendar:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a67b
- (void)updateSource:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a675
- (void)removeAllItems;	// IMP=0x001000000000a66f
- (void)saveEventStore:(id)arg1;	// IMP=0x001000000000a669
- (id)freshEventStoreFor:(id)arg1;	// IMP=0x001000000000a661
- (id)environment;	// IMP=0x001000000000a64b
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000000a54d
- (id)init;	// IMP=0x001000000000a53f

@end
