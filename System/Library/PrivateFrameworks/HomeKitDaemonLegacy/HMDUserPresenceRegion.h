//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceRegion : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)regionWithCoder:(id)arg1;	// IMP=0x006000000073921d
+ (id)regionWithDict:(id)arg1;	// IMP=0x00600000007391bc
+ (id)regionWithMessage:(id)arg1;	// IMP=0x006000000073915b
+ (id)regionWithNumber:(id)arg1;	// IMP=0x006000000073910e
+ (id)regionWithValue:(unsigned long long)arg1;	// IMP=0x006000000073909e
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000738ff0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000738f4a
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000738ea5
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000738e35
- (id)initWithNumber:(id)arg1;	// IMP=0x0000000000738da1

@end

