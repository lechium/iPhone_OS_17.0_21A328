//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKStrokeProviderSliceIdentifier.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface PKStrokeProviderSliceIdentifierCoherence : PKStrokeProviderSliceIdentifier
{
    MISSING_TYPE *inkTimestamp;	// 3850396 = 0x3ac09c
    MISSING_TYPE *transformTimestamp;	// 0 = 0x0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001b2d50
- (void).cxx_destruct;	// IMP=0x00000000001b33a0
- (id)init;	// IMP=0x00000000001b3350
- (id)initWithUUID:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;	// IMP=0x00000000001b32f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b32c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b2f40
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b2910

@end

