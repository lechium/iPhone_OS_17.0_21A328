//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FPUnionCollection.h"

@class FPQueryCollection, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPTrashUnionCollection : FPUnionCollection
{
    id _providerDomainChangesToken;	// 8 = 0x8
    FPQueryCollection *_trashQueryCollection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e0fb4
- (id)scopedSearchQuery;	// IMP=0x00000000000e0f89
- (void)updateCollectionsForDomains:(id)arg1;	// IMP=0x00000000000e096a
- (void)fetchTrashItemsFromProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0793
- (id)filterDomains:(id)arg1;	// IMP=0x00000000000e0741
@property(readonly) FPQueryCollection *trashQueryCollection;
- (id)initWithQueryCollection:(id)arg1;	// IMP=0x00000000000e0435
- (void)setDesiredNumberOfItems:(id)arg1;	// IMP=0x00000000000e9295
- (void)setExcludedFileTypes:(id)arg1;	// IMP=0x00000000000e928f
- (void)setAllowedFileTypes:(id)arg1;	// IMP=0x00000000000e9289

@end

