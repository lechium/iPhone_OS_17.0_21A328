//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files29DOCLegacyWebDAVProviderSource
{
    MISSING_TYPE *rootItemCollection;	// 168 = 0xa8
    MISSING_TYPE *itemManager;	// 176 = 0xb0
    MISSING_TYPE *fileManager;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0040000000369b70
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;	// IMP=0x001000000036b900
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000036b8f0
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;	// IMP=0x001000000036b8e0
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000036b8d0
- (void)collection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x001000000036b860
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000036b780
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x001000000036b6c0
- (void)dealloc;	// IMP=0x0010000000369a80

@end

