//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISceneAsynchronousRenderingOptions;

__attribute__((visibility("hidden")))
@interface _UIContextLayerHostView
{
}

+ (Class)layerClass;	// IMP=0x00600000008baf18
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000008bb692
- (void)_prepareForWindowDealloc;	// IMP=0x00000000008bb5ed
- (void)setStopsHitTestTransformAccumulation:(_Bool)arg1;	// IMP=0x00000000008bb578
- (void)setResizesHostedContext:(_Bool)arg1;	// IMP=0x00000000008bb503
- (void)setInheritsSecurity:(_Bool)arg1;	// IMP=0x00000000008bb48e
@property(copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property(nonatomic) unsigned long long renderingMode;
- (id)layer;	// IMP=0x00000000008bb005
- (id)initWithSceneLayer:(id)arg1;	// IMP=0x00000000008baf29

@end

