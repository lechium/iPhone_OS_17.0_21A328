//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSPeerIDManager, IDSPublicKeyStorageCache;

@interface IDSPublicKeyStorage : NSObject
{
    IDSPeerIDManager *_peerIDManager;	// 8 = 0x8
    IDSDAccountController *_accountController;	// 16 = 0x10
    IDSPublicKeyStorageCache *_cache;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _lock;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000002052f0
- (void).cxx_destruct;	// IMP=0x0020000000205e7f
@property(retain, nonatomic) IDSPublicKeyStorageCache *cache; // @synthesize cache=_cache;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
- (void)logState;	// IMP=0x0010000000205dad
- (id)publicDeviceIdentityContainerForDeviceID:(id)arg1;	// IMP=0x001000000020590e
- (void)clearCache;	// IMP=0x0010000000205874
- (void)dealloc;	// IMP=0x001000000020582b
- (void)_removeOldPersistence;	// IMP=0x0010000000205779
- (id)initWithPeerIDManager:(id)arg1 accountController:(id)arg2;	// IMP=0x00100000002053f6
- (id)init;	// IMP=0x0010000000205375

@end

