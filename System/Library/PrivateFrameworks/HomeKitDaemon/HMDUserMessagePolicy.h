//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

@class HMDHome, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserMessagePolicy : HMFMessagePolicy
{
    _Bool _requiresRemoteAccess;	// 8 = 0x8
    _Bool _requiresCameraStreamingAccess;	// 9 = 0x9
    HMDHome *_home;	// 16 = 0x10
    unsigned long long _userPrivilege;	// 24 = 0x18
    NSUUID *_homeUUID;	// 32 = 0x20
}

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3;	// IMP=0x00100000007f85cc
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3 requiresCameraStreamingAccess:(_Bool)arg4;	// IMP=0x00100000007f8533
- (void).cxx_destruct;	// IMP=0x00000000007f83dc
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property _Bool requiresCameraStreamingAccess; // @synthesize requiresCameraStreamingAccess=_requiresCameraStreamingAccess;
@property _Bool requiresRemoteAccess; // @synthesize requiresRemoteAccess=_requiresRemoteAccess;
@property unsigned long long userPrivilege; // @synthesize userPrivilege=_userPrivilege;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007f82a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007f8295
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007f8177
- (unsigned long long)hash;	// IMP=0x00000000007f80f7
- (id)__initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(_Bool)arg3 requiresCameraStreamingAccess:(_Bool)arg4;	// IMP=0x00000000007f8028
- (id)init;	// IMP=0x00000000007f7f80

@end

