//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNaturalLightingCurve, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface HMDNaturalLightingContext : HMFObject
{
    HMDNaturalLightingCurve *_curve;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000c800a6
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000c8009e
- (void).cxx_destruct;	// IMP=0x0000000000c8006d
@property(readonly, copy) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy) HMDNaturalLightingCurve *curve; // @synthesize curve=_curve;
- (id)attributeDescriptions;	// IMP=0x0000000000c7ff23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c7ff18
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c7fd4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c7fc9f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c7fa6c
- (id)initWithCurve:(id)arg1 timeZone:(id)arg2;	// IMP=0x0000000000c7f9a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

