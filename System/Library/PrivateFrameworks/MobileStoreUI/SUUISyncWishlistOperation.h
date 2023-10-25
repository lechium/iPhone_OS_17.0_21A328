//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, SUUIClientContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SUUISyncWishlistOperation : NSOperation
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _resultBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000164e29
- (void)_sendLocalChangesForWishlist:(id)arg1;	// IMP=0x0000000000164714
- (_Bool)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000163eed
- (_Bool)_loadRemoteItemsForWishlist:(id)arg1 didChange:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000000016387e
- (void)main;	// IMP=0x00000000001636e4
@property(copy) CDUnknownBlockType resultBlock;
- (id)initWithClientContext:(id)arg1;	// IMP=0x000000000016344c
- (id)init;	// IMP=0x00000000001633f2

@end
