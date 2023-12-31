//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZoneLocalInput, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPersonDataBatchChange : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    HMBLocalZoneLocalInput *_localInput;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000085c8e8
- (void).cxx_destruct;	// IMP=0x000000000085c8b7
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x000000000085c7bf
- (id)logIdentifier;	// IMP=0x000000000085c76f
- (void)commit;	// IMP=0x000000000085c4fe
- (void)removeFaceCropWithUUID:(id)arg1;	// IMP=0x000000000085c3d8
- (void)removePersonWithUUID:(id)arg1;	// IMP=0x000000000085c2b2
- (void)addOrUpdateFaceCrop:(id)arg1;	// IMP=0x000000000085c100
- (void)addOrUpdatePerson:(id)arg1;	// IMP=0x000000000085bfb1
- (id)initWithLocalInput:(id)arg1;	// IMP=0x000000000085befd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

