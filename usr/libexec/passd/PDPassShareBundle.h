//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PDPassShareBundle : NSObject
{
    NSArray *_shares;	// 8 = 0x8
    NSArray *_entitlements;	// 16 = 0x10
}

+ (id)subcredentialEntitlementsFromPassDictionary:(id)arg1;	// IMP=0x004000000045f271
+ (id)passSharesFromCarKeySharesDictionary:(id)arg1 entitlements:(id)arg2;	// IMP=0x001000000045f269
+ (id)passSharesFromLegacyCarKeySharesDictionary:(id)arg1 entitlements:(id)arg2;	// IMP=0x001000000045eb8c
- (void).cxx_destruct;	// IMP=0x002000000045ff20
@property(retain, nonatomic) NSArray *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) NSArray *shares; // @synthesize shares=_shares;
- (id)description;	// IMP=0x001000000045fe0e
- (id)_initWithCarKeySharesDictionary:(id)arg1 passDict:(id)arg2;	// IMP=0x001000000045ea4d
- (id)_initWithShares:(id)arg1 entitlements:(id)arg2;	// IMP=0x001000000045e973
- (id)_initWithShareBundleDictionary:(id)arg1;	// IMP=0x001000000045e4b9
- (id)initWithPassURL:(id)arg1 passDictionary:(id)arg2;	// IMP=0x001000000045e2b0
- (id)init;	// IMP=0x001000000045e2a2

@end

