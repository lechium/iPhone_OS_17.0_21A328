//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class CALayer;
@protocol GGLRenderQueueSource, MDRenderTargetSizeObserver;

@protocol MDRenderTarget <NSObject>
@property(readonly, nonatomic) void *linearRenderTarget;
@property(readonly, nonatomic) const struct RenderTargetFormat *linearFormat;
@property(readonly, nonatomic) void *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) _Bool shouldRasterize;
@property(readonly, nonatomic) void *renderer;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
@property(readonly, nonatomic) _Bool supportsFramebufferFetch;
@property(readonly, nonatomic) _Bool multiSample;
@property(nonatomic) __weak id <GGLRenderQueueSource> renderSource;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double contentScale;
@property(nonatomic) struct CGSize size;
- (shared_ptr_fa6aa836)bitmapData;
- (struct __IOSurface *)flipImage;
-     // Error parsing type: {function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[32C]}^v}}224@0:8d16d24{function<void ()>={__value_func<void ()>={type=[32C]}^v}}32{LayoutSceneTaskModule={function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[32C]}^v}}{function<void ()>={__value_func<void ()>={type=[32C]}^v}}{function<void ()>={__value_func<void ()>={type=[32C]}^v}}}80, name: prepareRenderTask:presentAtTime:didPresentDelegate:taskModule:
- (_Bool)hasRenderTarget;
- (void)destroyRenderTarget;
- (void)createRenderTarget;

@optional
@property(readonly, nonatomic) float averageFPS;
- (void)removeSizeObserver:(id <MDRenderTargetSizeObserver>)arg1;
- (void)addSizeObserver:(id <MDRenderTargetSizeObserver>)arg1;
- (void *)debugConsoleForId:(int)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(CALayer *)arg2;
- (void)didDrawView;
- (void)willDrawView;
@end
