//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDateComponents, NSNumber, NSSet, NSString, USDeviceActivityBudget;

@interface USRegisteredDeviceActivityEvent : NSManagedObject
{
}

- (id)nextThresholdDate:(id *)arg1;	// IMP=0x00200000000218d0
@property(readonly, copy) NSNumber *nextWarningTime;
- (_Bool)validateBudget:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x0010000000021678

// Remaining properties
@property(retain, nonatomic) USDeviceActivityBudget *budget; // @dynamic budget;
@property(copy, nonatomic) NSSet *budgetedApplications; // @dynamic budgetedApplications;
@property(copy, nonatomic) NSSet *budgetedCategories; // @dynamic budgetedCategories;
@property(copy, nonatomic) NSSet *budgetedWebDomains; // @dynamic budgetedWebDomains;
@property(nonatomic) _Bool didReachThreshold; // @dynamic didReachThreshold;
@property(nonatomic) _Bool didWarnForThreshold; // @dynamic didWarnForThreshold;
@property(nonatomic) _Bool isUntokenized; // @dynamic isUntokenized;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSDateComponents *threshold; // @dynamic threshold;

@end

