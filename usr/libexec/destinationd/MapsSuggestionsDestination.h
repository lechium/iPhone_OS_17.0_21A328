//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSMutableArray, NSString;

@interface MapsSuggestionsDestination : NSObject
{
    NSString *_label;	// 8 = 0x8
    CLLocation *_likelyLocation;	// 16 = 0x10
    NSMutableArray *_entries;	// 24 = 0x18
    NSMutableArray *_breadcrumbs;	// 32 = 0x20
    NSDate *_earliestArrivalDate;	// 40 = 0x28
    NSDate *_latestDepartureDate;	// 48 = 0x30
    NSDate *_earliestExpiration;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000022a29
+ (id)destinationWithData:(id)arg1;	// IMP=0x00100000000220cd
- (void).cxx_destruct;	// IMP=0x00200000000237cb
- (id)objectForJSON;	// IMP=0x0010000000022e94
- (id)nameForJSON;	// IMP=0x0010000000022e87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000022d65
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000022c64
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000022a31
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000228ba
- (id)longDescription;	// IMP=0x001000000002245f
- (_Bool)isEqualToDestination:(id)arg1;	// IMP=0x00100000000222db
- (id)data;	// IMP=0x0010000000021fa4
- (id)firstEntryDuringPeriod:(id)arg1;	// IMP=0x0010000000021c69
- (id)firstEntryAfterTime:(id)arg1;	// IMP=0x0010000000021909
- (id)entryAtTime:(id)arg1;	// IMP=0x001000000002164c
- (unsigned long long)removeExpiredEntries;	// IMP=0x00100000000211e2
- (double)couldContainTime:(id)arg1;	// IMP=0x0010000000020c1e
- (double)couldContainLocation:(id)arg1;	// IMP=0x0010000000020aa5
- (double)couldContainEntry:(id)arg1;	// IMP=0x00100000000206f1
- (id)latestKnownTime;	// IMP=0x00100000000206e3
- (id)earliestKnownTime;	// IMP=0x00100000000206d5
- (_Bool)hasBeenVisited;	// IMP=0x00100000000206c4
- (_Bool)hasEntriesInTheFuture;	// IMP=0x0010000000020593
- (_Bool)addContainedBreadcrumb:(id)arg1;	// IMP=0x001000000002019a
- (_Bool)addContainedEntry:(id)arg1;	// IMP=0x001000000001f8cf
- (double)radius;	// IMP=0x001000000001f869
- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x001000000001f853
- (id)location;	// IMP=0x001000000001f845
- (id)label;	// IMP=0x001000000001f837
- (id)breadcrumbs;	// IMP=0x001000000001f772
- (id)entries;	// IMP=0x001000000001f6ad
- (id)initWithLocation:(id)arg1 label:(id)arg2;	// IMP=0x001000000001f2da
- (id)initWithEntry:(id)arg1;	// IMP=0x001000000001ed88

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
