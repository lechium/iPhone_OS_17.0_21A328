//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeLockNotificationContextResolutionResult : HMFObject
{
    NSUUID *_userUUID;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSUUID *_labelIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000985a64
- (void).cxx_destruct;	// IMP=0x0000000000985a22
@property(readonly, copy) NSUUID *labelIdentifier; // @synthesize labelIdentifier=_labelIdentifier;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
- (id)attributeDescriptions;	// IMP=0x00000000009857fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000098571a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000985602
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009855f7
- (unsigned long long)hash;	// IMP=0x0000000000985536
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098539f
- (id)initWithUserUUID:(id)arg1 label:(id)arg2 labelIdentifier:(id)arg3;	// IMP=0x00000000009852d5

@end
