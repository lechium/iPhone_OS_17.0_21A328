//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSTimer;
@protocol VKCStickerVideoDecoderDelegate;

__attribute__((visibility("hidden")))
@interface VKCStickerVideoDecoder : NSObject
{
    _Bool _paused;	// 8 = 0x8
    id <VKCStickerVideoDecoderDelegate> _delegate;	// 16 = 0x10
    NSData *_videoData;	// 24 = 0x18
    long long _currentFrameIndex;	// 32 = 0x20
    NSArray *_frameDelays;	// 40 = 0x28
    struct CGImageSource *_videoCGImageSource;	// 48 = 0x30
    NSDictionary *_videoSourceProperties;	// 56 = 0x38
    long long _frameCount;	// 64 = 0x40
    NSTimer *_timer;	// 72 = 0x48
    NSMutableArray *_frames;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000c494f
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) NSDictionary *videoSourceProperties; // @synthesize videoSourceProperties=_videoSourceProperties;
@property(nonatomic) struct CGImageSource *videoCGImageSource; // @synthesize videoCGImageSource=_videoCGImageSource;
@property(retain, nonatomic) NSArray *frameDelays; // @synthesize frameDelays=_frameDelays;
@property(nonatomic) long long currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) __weak id <VKCStickerVideoDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGImage *)frameAtIndex:(long long)arg1;	// IMP=0x00000000000c4844
- (void)displayNextFrame;	// IMP=0x00000000000c450d
- (void)beginPlayback;	// IMP=0x00000000000c4477
- (void)configureForVideoDataChange;	// IMP=0x00000000000c41c5

@end
