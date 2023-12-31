//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SagaSetAlbumItemPropertyOperation
{
    long long _albumPersistentID;	// 8 = 0x8
    NSDictionary *_albumItemProperties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000012aef8
- (void).cxx_destruct;	// IMP=0x002000000012ac99
- (void)main;	// IMP=0x001000000012a473
- (_Bool)isPersistent;	// IMP=0x001000000012a46b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000012a3cb
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000012a2ba
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 albumPersistentID:(long long)arg3 albumItemProperties:(id)arg4;	// IMP=0x001000000012a21a

@end

