//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x002000000003291a
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;	// IMP=0x0020000000032884
- (id)cd_dateWithCeilingForAlignment:(double)arg1;	// IMP=0x00200000000327ee
- (id)cd_dateWithFloorForAlignment:(double)arg1;	// IMP=0x0020000000032762
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;	// IMP=0x002000000009fdcd
- (id)floorDateWithTotalSlotsInDay:(int)arg1;	// IMP=0x002000000009fd57
- (double)timeSinceMidnight:(id *)arg1;	// IMP=0x002000000009fc21
- (id)dedup;	// IMP=0x0020000000109746
- (id)dk_dedup;	// IMP=0x00200000001094bb
@end

