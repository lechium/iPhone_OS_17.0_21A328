//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteLoginMessageSender, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAnisetteDataProvider : HMFObject
{
    NSString *_sessionID;	// 8 = 0x8
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000055a7ef
- (void).cxx_destruct;	// IMP=0x000000000055a061
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000559e01
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000559bf0
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005599f2
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005597c8
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005595ca
- (id)logIdentifier;	// IMP=0x00000000005595b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005595ad
- (id)initWithSessionID:(id)arg1 remoteMessageSender:(id)arg2;	// IMP=0x000000000055950b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

