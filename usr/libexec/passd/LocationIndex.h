//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface LocationIndex
{
}

+ (id)propertySettersForLocation;	// IMP=0x0040000000494670
+ (id)locationsByPassUniqueIDWithBoundingBox:(CDStruct_d2b197d1)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000494229
+ (id)insertIndexedLocationWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4;	// IMP=0x0010000000494184
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000493ef5
+ (id)databaseTable;	// IMP=0x0010000000493ee8
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4;	// IMP=0x0040000000494004

@end
