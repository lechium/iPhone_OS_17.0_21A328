//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (MTUtilities)
+ (id)schemeForSection:(long long)arg1;	// IMP=0x002000000005d850
+ (id)mtURLForSection:(long long)arg1;	// IMP=0x002000000005d7b2
+ (id)mtURLForScheme:(id)arg1;	// IMP=0x002000000005d735
+ (id)mtURLForClockAppSection:(long long)arg1 timerManager:(id)arg2;	// IMP=0x002000000005d4d5
+ (id)mtURLForClockAppSection:(long long)arg1;	// IMP=0x002000000005d4c1
@property(readonly, nonatomic) NSString *mtID;
@property(readonly, nonatomic) _Bool mtIsForLastTimer;
@property(readonly, nonatomic) _Bool mtIsList;
@property(readonly, nonatomic) long long mtClockAppSection;
@end

