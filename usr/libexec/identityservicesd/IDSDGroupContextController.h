//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTPromiseSeal, ENGroupContext;

@interface IDSDGroupContextController : NSObject
{
    ENGroupContext *_messagesGroupContext;	// 8 = 0x8
    CUTPromiseSeal *_seal;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000002e19dc
- (void).cxx_destruct;	// IMP=0x00200000002e427c
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) ENGroupContext *messagesGroupContext; // @synthesize messagesGroupContext=_messagesGroupContext;
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e3c4a
- (void)qSetupSeal;	// IMP=0x00100000002e3bcd
- (void)_messagesGroupContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e3b2e
- (void)centerUpdatedRegistrationIdentities:(id)arg1;	// IMP=0x00100000002e38ef
- (void)deleteAllCachedValuesForGroupWithID:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e379e
- (void)deleteAllKnownGroupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e367f
- (void)fetchAllKnownGroups:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e3511
- (void)latestCachedGroupWithStableID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e33ba
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e3125
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e2ebf
- (void);	// IMP=0x00100000002e2c58
- (void)publicDataRepresentationForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e29de
- (void)fetchGroupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e2682
- (void)upsertGroupWithInfo:(id)arg1 previousGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e1eee
- (void)groupContextForProtectionSpace:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e1be3
- (id)registrationCenter;	// IMP=0x00100000002e1bca
- (void)dealloc;	// IMP=0x00100000002e1b5c
- (id)init;	// IMP=0x00100000002e1a31

@end
