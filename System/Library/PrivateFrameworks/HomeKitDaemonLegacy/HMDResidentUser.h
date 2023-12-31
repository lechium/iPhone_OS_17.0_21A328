//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, NSString;

__attribute__((visibility("hidden")))
@interface HMDResidentUser
{
    struct os_unfair_lock_s _residentUserLock;	// 296 = 0x128
    HMDDevice *_device;	// 304 = 0x130
    unsigned long long _configurationState;	// 312 = 0x138
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000009bf5a5
- (void).cxx_destruct;	// IMP=0x00000000009bf350
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009bf22a
- (id)encodingRemoteDisplayName;	// IMP=0x00000000009bf218
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009bed56
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000009be978
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000009be808
- (id)legacyUser;	// IMP=0x00000000009be7d2
@property unsigned long long configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, getter=isBlocked) _Bool blocked;
- (_Bool)updateWithDevice:(id)arg1;	// IMP=0x00000000009be428
- (void)setDevice:(id)arg1;	// IMP=0x00000000009be3d4
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)registerIdentity;	// IMP=0x00000000009be2e5
- (_Bool)requiresMakoSupport;	// IMP=0x00000000009be2dd
- (id)displayName;	// IMP=0x00000000009be28d
- (_Bool)refreshDisplayName;	// IMP=0x00000000009be285
@property(readonly, copy) NSString *deviceIdentifier;
- (id)userID;	// IMP=0x00000000009be1bb
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000009be089
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;	// IMP=0x00000000009bdfdd
- (id)initWithModelObject:(id)arg1;	// IMP=0x00000000009bde99

@end

