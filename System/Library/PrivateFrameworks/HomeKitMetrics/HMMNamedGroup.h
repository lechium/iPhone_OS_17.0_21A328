//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMMNamedGroup : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0080000000012d2e

// Remaining properties
@property(retain, nonatomic) NSSet *counters; // @dynamic counters;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *valueStatistics; // @dynamic valueStatistics;

@end

