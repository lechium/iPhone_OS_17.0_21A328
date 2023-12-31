//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAMetalLayer.h>

@protocol CAMetalDrawable, GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface MetalLayer : CAMetalLayer
{
    id <GGLLayerDelegate> _delegate;	// 16 = 0x10
    shared_ptr_94286ce0 _device;	// 24 = 0x18
    shared_ptr_479d1306 _texture;	// 40 = 0x28
    struct shared_ptr<ggl::SamplerState> _samplerState;	// 56 = 0x38
    id <CAMetalDrawable> _prevDrawable;	// 72 = 0x48
    _Bool _sRGB;	// 80 = 0x50
    struct CGSize _backingSize;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000a398a7
- (void).cxx_destruct;	// IMP=0x0000000000a3984b
@property(readonly, nonatomic) _Bool sRGB; // @synthesize sRGB=_sRGB;
@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property __weak id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (void)display;	// IMP=0x0000000000a397f0
- (void)didEnterBackground;	// IMP=0x0000000000a397ea
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;	// IMP=0x0000000000a39780
- (void)onTimerFired:(double)arg1;	// IMP=0x0000000000a39752
- (void)_onTimerFired:(double)arg1 withPresent:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3932a
- (id)_updateDrawable;	// IMP=0x0000000000a3926d
- (void)_createTexture;	// IMP=0x0000000000a39002
- (void)layoutSublayers;	// IMP=0x0000000000a38ffc
- (id)initWithDevice:(shared_ptr_94286ce0)arg1 sRGB:(_Bool)arg2;	// IMP=0x0000000000a38c67
@property(readonly) int backingFormat;

@end

