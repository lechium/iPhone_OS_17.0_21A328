//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNLocation;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceCallback_DidUpdateMatchedLocation
{
    MNLocation *_location;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000028cca
- (void).cxx_destruct;	// IMP=0x0000000000028e26
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028d4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028cd2
- (unsigned long long)type;	// IMP=0x0000000000028cbf

@end
