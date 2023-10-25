//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy
{
    CLLocation *_location;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000000365c
+ (id)policyWithLocation:(id)arg1;	// IMP=0x0010000000003613
- (void).cxx_destruct;	// IMP=0x0020000000003600
@property(retain) CLLocation *location; // @synthesize location=_location;
- (id)processMetadata:(id)arg1;	// IMP=0x00100000000034aa
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0010000000003395
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003325
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000328d

@end
