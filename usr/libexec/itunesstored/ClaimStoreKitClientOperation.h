//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, StoreKitClientIdentity;

@interface ClaimStoreKitClientOperation : ISOperation
{
    NSData *_clientAuditTokenData;	// 96 = 0x60
    StoreKitClientIdentity *_clientIdentity;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000019ae8b
- (void)run;	// IMP=0x001000000019a679
@property(retain) NSData *clientAuditTokenData;
@property(readonly, copy) StoreKitClientIdentity *clientIdentity;
- (id)initWithClientIdentity:(id)arg1;	// IMP=0x001000000019a4f2

@end
