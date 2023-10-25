//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDRemoteMessagePolicy : HMFMessagePolicy
{
    _Bool _requiresSecureMessage;	// 8 = 0x8
    _Bool _allowsAnonymousMessage;	// 9 = 0x9
    _Bool _requiresAccountMessage;	// 10 = 0xa
    unsigned long long _transportRestriction;	// 16 = 0x10
    unsigned long long _roles;	// 24 = 0x18
}

+ (id)defaultSecurePolicy;	// IMP=0x00100000003baf08
+ (id)defaultPolicy;	// IMP=0x00100000003baed7
+ (id)remoteMessagePolicyWithRequiresSecureMessage:(_Bool)arg1 allowsAnonymousMessage:(_Bool)arg2 requiresAccountMessage:(_Bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;	// IMP=0x00100000003bae4f
@property unsigned long long roles; // @synthesize roles=_roles;
@property unsigned long long transportRestriction; // @synthesize transportRestriction=_transportRestriction;
@property _Bool requiresAccountMessage; // @synthesize requiresAccountMessage=_requiresAccountMessage;
@property _Bool allowsAnonymousMessage; // @synthesize allowsAnonymousMessage=_allowsAnonymousMessage;
@property _Bool requiresSecureMessage; // @synthesize requiresSecureMessage=_requiresSecureMessage;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003babfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003babf1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003baa92
- (unsigned long long)hash;	// IMP=0x00000000003baa18
- (id)__initWithRequiresSecureMessage:(_Bool)arg1 allowsAnonymousMessage:(_Bool)arg2 requiresAccountMessage:(_Bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;	// IMP=0x00000000003ba98f
- (id)init;	// IMP=0x00000000003ba8e7

@end
