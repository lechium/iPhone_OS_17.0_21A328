//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetInspector;

__attribute__((visibility("hidden")))
@interface AVAssetSynchronousInspectorLoader
{
    AVAssetInspector *_assetInspector;	// 16 = 0x10
}

- (_Bool)isCompatibleWithSavedPhotosAlbum;	// IMP=0x00000000000f924e
- (_Bool)isComposable;	// IMP=0x00000000000f9231
- (_Bool)isReadable;	// IMP=0x00000000000f9214
- (_Bool)isExportable;	// IMP=0x00000000000f91f7
- (_Bool)isPlayable;	// IMP=0x00000000000f91da
- (id)lyrics;	// IMP=0x00000000000f91bd
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000f917b
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f9168
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f9156
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f914b
- (id)assetInspector;	// IMP=0x00000000000f913a
- (unsigned long long)hash;	// IMP=0x00000000000f911d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f90b1
- (void)dealloc;	// IMP=0x00000000000f906f
- (id)initWithAssetInspector:(id)arg1;	// IMP=0x00000000000f9018

@end

