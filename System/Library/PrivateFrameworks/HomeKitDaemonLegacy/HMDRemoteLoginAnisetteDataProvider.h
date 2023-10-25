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

+ (id)logCategory;	// IMP=0x00100000004a002b
- (void).cxx_destruct;	// IMP=0x000000000049f89d
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000049f63d
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000049f42c
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000049f22e
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000049f004
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000049ee06
- (id)logIdentifier;	// IMP=0x000000000049edf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049ede9
- (id)initWithSessionID:(id)arg1 remoteMessageSender:(id)arg2;	// IMP=0x000000000049ed47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
