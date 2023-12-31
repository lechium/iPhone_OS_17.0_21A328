//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FPXItemsObserver
{
    NSMutableArray *_items;	// 64 = 0x40
    CDUnknownBlockType _finishedBlock;	// 72 = 0x48
    NSData *_syncAnchor;	// 80 = 0x50
    long long _suggestedPageSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000845b4
@property(nonatomic) long long suggestedPageSize; // @synthesize suggestedPageSize=_suggestedPageSize;
@property(copy) NSData *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(copy) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void)finishEnumeratingWithError:(id)arg1;	// IMP=0x0000000000084163
- (void)finishEnumeratingUpToPage:(id)arg1;	// IMP=0x0000000000083c93
- (void)didEnumerateItems:(id)arg1;	// IMP=0x00000000000836ea
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 nsFileProviderRequest:(id)arg3;	// IMP=0x000000000008367e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

