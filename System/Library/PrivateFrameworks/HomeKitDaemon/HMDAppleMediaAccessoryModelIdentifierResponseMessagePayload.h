//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject
{
    NSUUID *_modelIdentifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000004dc65c
- (void).cxx_destruct;	// IMP=0x00000000004dc649
@property(readonly, copy) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004dc514
- (id)attributeDescriptions;	// IMP=0x00000000004dc448
- (id)payloadCopy;	// IMP=0x00000000004dc37e
- (id)initWithPayload:(id)arg1;	// IMP=0x00000000004dc222
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x00000000004dc1a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

