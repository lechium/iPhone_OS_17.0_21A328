//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITargetedPreview, UIView, _UIHighlightPlatterView;
@protocol _UIContentEffectDescriptor;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneActivationEffect : NSObject
{
    id <_UIContentEffectDescriptor> _descriptor;	// 8 = 0x8
    UIView *_platterContainer;	// 16 = 0x10
    NSMutableArray *_completions;	// 24 = 0x18
    _UIHighlightPlatterView *_platterView;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    double _currentScale;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000016347b8
@property(nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _UIHighlightPlatterView *platterView; // @synthesize platterView=_platterView;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) UIView *platterContainer; // @synthesize platterContainer=_platterContainer;
@property(readonly, nonatomic) id <_UIContentEffectDescriptor> descriptor; // @synthesize descriptor=_descriptor;
- (void)_performAllCompletionBlocks;	// IMP=0x0000000001634638
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000016345ab
- (id)previewForContinuingToEffectWithPreview:(id)arg1;	// IMP=0x00000000016343c1
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;	// IMP=0x00000000016343b0
- (id)_shadowBehavior;	// IMP=0x000000000163432f
- (id)_settlingBehavior;	// IMP=0x00000000016342ae
- (id)_interactiveScaleBehavior;	// IMP=0x000000000163422d
- (void)endExpanded:(_Bool)arg1 withVelocity:(double)arg2;	// IMP=0x0000000001633926
- (void)advanceToScale:(double)arg1;	// IMP=0x00000000016335ef
- (void)begin;	// IMP=0x00000000016332cf
@property(readonly, nonatomic) UITargetedPreview *handOffPreview;
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000001632fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
