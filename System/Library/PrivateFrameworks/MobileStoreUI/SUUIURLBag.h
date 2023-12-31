//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSURLBag.h>

@class ISLoadURLBagOperation, ISURLBag, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SUUIURLBag : SSURLBag
{
    ISURLBag *_bag;	// 8 = 0x8
    NSMutableArray *_completionBlocks;	// 16 = 0x10
    _Bool _forceInvalidationForNextLoad;	// 24 = 0x18
    ISLoadURLBagOperation *_operation;	// 32 = 0x20
}

+ (id)URLBagForContext:(id)arg1;	// IMP=0x00400000002978b6
+ (id)bagQueue;	// IMP=0x0040000000297846
- (void).cxx_destruct;	// IMP=0x0000000000298c27
- (void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2;	// IMP=0x0000000000298917
- (void)_enqueueOperationWithContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002985bd
- (id)storeFrontIdentifier;	// IMP=0x000000000029849d
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000298254
- (id)existingBagDictionary;	// IMP=0x0000000000298134
- (id)valueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000297ec6
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000297c2a
- (void)invalidate;	// IMP=0x0000000000297b4b
- (void)getTrustForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002978e5

@end

