//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleAccountManager, HMFMessageDestination, NSArray;
@protocol HAPKeyStore;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountMessageFilter
{
    HMFMessageDestination *_target;	// 24 = 0x18
    NSArray *_allowedMessages;	// 32 = 0x20
    HMDAppleAccountManager *_appleAccountManager;	// 40 = 0x28
    id <HAPKeyStore> _systemKeychainStore;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00600000005d464a
- (void).cxx_destruct;	// IMP=0x00000000005d45f7
@property(retain, nonatomic) id <HAPKeyStore> systemKeychainStore; // @synthesize systemKeychainStore=_systemKeychainStore;
@property(retain, nonatomic) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly, copy) NSArray *allowedMessages; // @synthesize allowedMessages=_allowedMessages;
@property(readonly) HMFMessageDestination *target; // @synthesize target=_target;
- (id)logIdentifier;	// IMP=0x00000000005d4508
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;	// IMP=0x00000000005d39f3
- (id)initWithTarget:(id)arg1 allowedMessages:(id)arg2 appleAccountManager:(id)arg3 systemKeychainStore:(id)arg4;	// IMP=0x00000000005d38b8
- (id)initWithTarget:(id)arg1 allowedMessages:(id)arg2;	// IMP=0x00000000005d37f8
- (id)initWithTarget:(id)arg1;	// IMP=0x00000000005d37e4
- (id)initWithName:(id)arg1;	// IMP=0x00000000005d3730

@end

