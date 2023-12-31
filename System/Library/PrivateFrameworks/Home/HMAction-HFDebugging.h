//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAction.h>

@class NSString, NSUUID;

@interface HMAction (HFDebugging)
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00200000000d60f4
- (id)hf_affectedAccessoryRepresentables;	// IMP=0x00200000002a6557
- (_Bool)hf_isServiceLikeItemInvolved:(id)arg1;	// IMP=0x00200000002a6284
- (id)hf_affectedAccessoryProfiles;	// IMP=0x00200000002a61e6
- (id)hf_affectedCharacteristic;	// IMP=0x00200000002a61a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

