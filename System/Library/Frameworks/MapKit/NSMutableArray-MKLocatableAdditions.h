//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (MKLocatableAdditions)
- (void)_mapkit_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x006000000010e80e
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1 ascending:(_Bool)arg2;	// IMP=0x006000000010e7b8
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x006000000010e7a1
- (void)_mapkit_sortUsingLongitudeAscending:(_Bool)arg1;	// IMP=0x006000000010e747
- (void)_mapkit_sortUsingLongitude;	// IMP=0x006000000010e730
- (void)_mapkit_sortUsingLatitudeAscending:(_Bool)arg1;	// IMP=0x006000000010e6ca
- (void)_mapkit_sortUsingLatitude;	// IMP=0x006000000010e6b3
- (id)_mapkit_popLastObject;	// IMP=0x006000000010e66b
@end
