//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSCredentialsDaemon : NSObject
{
    NSMutableDictionary *_uniqueIDToCredentialLoaderMap;	// 8 = 0x8
    void *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000006d2c
- (void).cxx_destruct;	// IMP=0x0020000000007af1
- (void)_pidSuspended:(int)arg1;	// IMP=0x0010000000007a08
- (id)credentialLoaderForUniqueID:(id)arg1;	// IMP=0x00100000000079a4
- (void)removeCredentialLoaderForUniqueID:(id)arg1;	// IMP=0x001000000000764e
- (void)addCredentialLoader:(id)arg1;	// IMP=0x00100000000073b7
- (void)logState;	// IMP=0x00100000000073b1
- (void)shutdown;	// IMP=0x00100000000072e2
- (void)_terminate;	// IMP=0x0010000000007296
- (void)dealloc;	// IMP=0x0010000000007244
- (id)init;	// IMP=0x0010000000006d81

@end
