//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, SecKeyProxy;

__attribute__((visibility("hidden")))
@interface SecKeyProxyTarget : NSObject
{
    id _key;	// 8 = 0x8
    NSData *_certificate;	// 16 = 0x10
    SecKeyProxy *_publicKeyProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ddedc
- (void)performOperation:(long long)arg1 mode:(long long)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ddcbf
- (void)getPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ddbfc
- (void)getAlgorithmIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ddbaa
- (void)getDescriptionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dda84
- (void)getExternalRepresentationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dda06
- (void)getAttributesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dd911
- (void)getBlockSizeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dd8bf
- (void)initializeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dd8ad
@property(readonly, nonatomic) struct __SecKey *key;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;	// IMP=0x00000000000dd80a

@end

