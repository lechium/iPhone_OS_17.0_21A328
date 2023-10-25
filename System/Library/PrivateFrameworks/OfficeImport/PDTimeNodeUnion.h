//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDAnimateColorBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateTimeBehavior, PDAudioNode, PDCmdBehavior, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDVideoNode;

__attribute__((visibility("hidden")))
@interface PDTimeNodeUnion : NSObject
{
    PDAnimateTimeBehavior *mTimeBehavior;	// 8 = 0x8
    PDAnimateEffectBehavior *mEffectBehavior;	// 16 = 0x10
    PDAnimateMotionBehavior *mMotionBehavior;	// 24 = 0x18
    PDAnimateRotateBehavior *mRotateBehavior;	// 32 = 0x20
    PDAnimateScaleBehavior *mScaleBehavior;	// 40 = 0x28
    PDAnimateColorBehavior *mColorBehavior;	// 48 = 0x30
    PDAudioNode *mAudio;	// 56 = 0x38
    PDVideoNode *mVideo;	// 64 = 0x40
    PDParallelTimeNode *mParallelTimeNodeGroup;	// 72 = 0x48
    PDSequentialTimeNode *mSequentialTimeNodeGroup;	// 80 = 0x50
    PDSetBehavior *mSetBehavior;	// 88 = 0x58
    PDCmdBehavior *mCmdBehavior;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000043d206
- (id)description;	// IMP=0x000000000043d1c8
- (void)setCmdBehavior:(id)arg1;	// IMP=0x0000000000232a47
- (id)cmdBehavior;	// IMP=0x000000000043d1ba
- (void)setBehavior:(id)arg1;	// IMP=0x00000000001df050
- (id)behavior;	// IMP=0x000000000043d1ac
- (void)setSequential:(id)arg1;	// IMP=0x00000000001d62b9
- (id)sequential;	// IMP=0x000000000043d19e
- (void)setParallel:(id)arg1;	// IMP=0x00000000001d62a8
- (id)parallel;	// IMP=0x000000000043d190
- (void)setVideo:(id)arg1;	// IMP=0x000000000023eca4
- (id)video;	// IMP=0x000000000043d182
- (void)setAudio:(id)arg1;	// IMP=0x000000000023a9c9
- (id)audio;	// IMP=0x000000000043d174
- (void)setColorBehavior:(id)arg1;	// IMP=0x000000000043d163
- (id)colorBehavior;	// IMP=0x000000000043d155
- (void)setScaleBehavior:(id)arg1;	// IMP=0x000000000021e69e
- (id)scaleBehavior;	// IMP=0x000000000043d147
- (void)setRotateBehavior:(id)arg1;	// IMP=0x000000000022e892
- (id)rotateBehavior;	// IMP=0x000000000043d139
- (void)setMotionBehavior:(id)arg1;	// IMP=0x00000000001d6286
- (id)motionBehavior;	// IMP=0x000000000043d12b
- (void)setEffectBehavior:(id)arg1;	// IMP=0x00000000001df31d
- (id)effectBehavior;	// IMP=0x000000000043d11d
- (void)setTimeBehavior:(id)arg1;	// IMP=0x00000000001ebfcc
- (id)timeBehavior;	// IMP=0x000000000043d10f
- (id)commonBehavior;	// IMP=0x000000000043d0b6
- (id)init;	// IMP=0x00000000001d4737

@end
