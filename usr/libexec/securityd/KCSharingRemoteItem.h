//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KCSharingInternetPasswordCredential, KCSharingPrivateKeyCredential, NSString;

@interface KCSharingRemoteItem : NSObject
{
    long long _type;	// 8 = 0x8
    KCSharingPrivateKeyCredential *_privateKey;	// 16 = 0x10
    KCSharingInternetPasswordCredential *_internetPassword;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000158cb0
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)proto;	// IMP=0x0010000000158bef
@property(readonly, nonatomic) KCSharingInternetPasswordCredential *internetPassword; // @synthesize internetPassword=_internetPassword;
@property(readonly, nonatomic) KCSharingPrivateKeyCredential *privateKey; // @synthesize privateKey=_privateKey;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000158ad2
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001588fa
@property(readonly) unsigned long long hash;
- (id)initPasswordWithProto:(id)arg1 sharingGroup:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001587cb
- (id)initPasskeyWithProto:(id)arg1 sharingGroup:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001586e3
- (id)initPasswordWithInternetPassword:(id)arg1;	// IMP=0x0010000000158670
- (id)initPasskeyWithPrivateKey:(id)arg1;	// IMP=0x00100000001585fd
- (id)initWithLocalItem:(id)arg1;	// IMP=0x001000000015853d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

