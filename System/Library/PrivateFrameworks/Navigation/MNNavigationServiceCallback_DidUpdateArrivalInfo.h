//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNArrivalInfo;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceCallback_DidUpdateArrivalInfo
{
    MNArrivalInfo *_arrivalInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000287c3
- (void).cxx_destruct;	// IMP=0x00000000000288cc
@property(retain, nonatomic) MNArrivalInfo *arrivalInfo; // @synthesize arrivalInfo=_arrivalInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000287f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000287cb
- (unsigned long long)type;	// IMP=0x00000000000287b8

@end

