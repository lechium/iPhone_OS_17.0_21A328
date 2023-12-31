//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleLAN
{
    _Bool _allowInterAccessoryConnections;	// 8 = 0x8
    unsigned char _direction;	// 9 = 0x9
    _Bool _requiredForHAPFunctionality;	// 10 = 0xa
    unsigned long long _purpose;	// 16 = 0x10
}

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(id)arg8 error:(id *)arg9;	// IMP=0x00600000007554d3
+ (id)createWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000755119
+ (_Bool)__decodeTransportProtocolFromJSONDictionary:(id)arg1 key:(id)arg2 transportProtocol:(unsigned char *)arg3 error:(id *)arg4;	// IMP=0x0060000000754eeb
+ (_Bool)__decodeDirection:(id)arg1 direction:(unsigned char *)arg2 error:(id *)arg3;	// IMP=0x0060000000754ce8
+ (_Bool)__decodeType:(id)arg1 type:(unsigned char *)arg2 error:(id *)arg3;	// IMP=0x0060000000754aeb
+ (_Bool)__decodeFlags:(id)arg1 critical:(_Bool *)arg2 allowInterAccessoryConnections:(_Bool *)arg3 requiredForHAPFunctionality:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0060000000754a21
+ (_Bool)__decodePurpose:(id)arg1 purpose:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0060000000754972
@property(readonly, nonatomic, getter=isRequiredForHAPFunctionality) _Bool requiredForHAPFunctionality; // @synthesize requiredForHAPFunctionality=_requiredForHAPFunctionality;
@property(readonly, nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property(readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) _Bool allowInterAccessoryConnections; // @synthesize allowInterAccessoryConnections=_allowInterAccessoryConnections;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
- (id)prettyJSONDictionary;	// IMP=0x00000000007545e6
- (id)attributeDescriptions;	// IMP=0x000000000075434f
- (unsigned long long)hash;	// IMP=0x00000000007542de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000075415e
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7;	// IMP=0x00000000007540d4

@end

