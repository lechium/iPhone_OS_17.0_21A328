//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, HMDUserPresenceRegion, NSDate;

__attribute__((visibility("hidden")))
@interface HMDUserPresence : HMFObject
{
    HMDUser *_user;	// 8 = 0x8
    HMDUserPresenceRegion *_presenceRegionStatus;	// 16 = 0x10
    NSDate *_updateTimestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000079b4fe
- (void).cxx_destruct;	// IMP=0x000000000079b4bc
@property(readonly, nonatomic) NSDate *updateTimestamp; // @synthesize updateTimestamp=_updateTimestamp;
@property(retain, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (id)attributeDescriptions;	// IMP=0x000000000079b1be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000079b0e2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000079afc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000079add1
@property(readonly, nonatomic, getter=isNotAtHome) _Bool notAtHome;
@property(readonly, nonatomic, getter=isAtHome) _Bool atHome;
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000079aacb
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2;	// IMP=0x000000000079aa2e

@end

