//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MCMCommandContext;

__attribute__((visibility("hidden")))
@interface MCMClientConnection : NSObject
{
    id <MCMCommandContext> _context;	// 8 = 0x8
}

+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1;	// IMP=0x006000000001a500
+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x006000000001a3e1
+ (id)sharedClientConnection;	// IMP=0x006000000001a386
- (void).cxx_destruct;	// IMP=0x00000000000186f8
@property(readonly, nonatomic) id <MCMCommandContext> context; // @synthesize context=_context;
- (id)_commandForResumedDeleteOperationsWithResultPromise:(id)arg1;	// IMP=0x00000000000184c7
- (void)_resumeDeleteOperations;	// IMP=0x0000000000018380
- (void)_regenerateAllSystemContainerPaths;	// IMP=0x0000000000017d38
- (void)rebootContainerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017740
- (void)rebootContainerManagerSetup;	// IMP=0x00000000000173de
- (void)_cleanupOprhanedCodeSigningMappingData;	// IMP=0x00000000000172bd
- (_Bool)_containerURL:(id)arg1 isValidForContainerClass:(unsigned long long)arg2;	// IMP=0x000000000001715e
- (void)_cleanupOrphanedDataForDirectories:(id)arg1 containerClass:(unsigned long long)arg2 forUserIdentity:(id)arg3;	// IMP=0x0000000000016817
- (void)containerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016260
- (void)containerManagerSetup;	// IMP=0x00000000000151db
- (id)clientBundleIdentifier;	// IMP=0x0000000000015117
- (id)initWithContext:(id)arg1;	// IMP=0x000000000001508c
- (id)init;	// IMP=0x0000000000014f41

@end
