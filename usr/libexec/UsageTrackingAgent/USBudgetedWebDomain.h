//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, USRegisteredBudget, USRegisteredDeviceActivityEvent;

@interface USBudgetedWebDomain : NSManagedObject
{
}

- (_Bool)_validateBudget:(id)arg1 andEvent:(id)arg2 error:(out id *)arg3;	// IMP=0x0020000000002d8a
- (_Bool)validateEvent:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x0010000000002d25
- (_Bool)validateBudget:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x0010000000002cc0

// Remaining properties
@property(retain, nonatomic) USRegisteredBudget *budget; // @dynamic budget;
@property(retain, nonatomic) USRegisteredDeviceActivityEvent *event; // @dynamic event;
@property(copy, nonatomic) NSString *webDomain; // @dynamic webDomain;

@end
