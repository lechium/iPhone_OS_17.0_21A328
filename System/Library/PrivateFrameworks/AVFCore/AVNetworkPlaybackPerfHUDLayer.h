//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, AVPlayerLayer, NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
{
    NSObject<OS_dispatch_source> *_hudTimer;	// 16 = 0x10
    AVPlayer *_player;	// 24 = 0x18
    AVPlayerLayer *_playerLayer;	// 32 = 0x20
    _Bool _showHud;	// 40 = 0x28
    _Bool _spatialDiagnostics;	// 41 = 0x29
    int _colorId;	// 44 = 0x2c
    double _opacity;	// 48 = 0x30
    int _fontSizeInt;	// 56 = 0x38
    _Bool _updateUISettings;	// 60 = 0x3c
    int _hudXoffset;	// 64 = 0x40
    int _hudYoffset;	// 68 = 0x44
    unsigned long long _hudUpdateInterval;	// 72 = 0x48
    _Bool _showCompleteURI;	// 80 = 0x50
    long long _prevVariantIdx;	// 88 = 0x58
    long long _prevStallCount;	// 96 = 0x60
    long long _totalStallCount;	// 104 = 0x68
    NSNumber *_displayResolutionHeight;	// 112 = 0x70
    NSNumber *_displayResolutionWidth;	// 120 = 0x78
    NSNumber *_audioSpatializationMode;	// 128 = 0x80
    _Bool _requestInFlight;	// 136 = 0x88
    NSMutableDictionary *_loadingStatusCache;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000005b5b0
@property __weak AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property __weak AVPlayer *player; // @synthesize player=_player;
- (void)_hudUpdateTrigger;	// IMP=0x000000000005b2d8
- (void)copyPropertiesFromStringGenerator:(id)arg1;	// IMP=0x000000000005b205
- (id)displayStringGenerator;	// IMP=0x000000000005b14f
- (void)updateHudWithDisplayString:(id)arg1;	// IMP=0x000000000005ad39
- (_Bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;	// IMP=0x000000000005ac01
- (void)currentItemTracksChanged;	// IMP=0x000000000005aa86
- (void)currentItemChanged;	// IMP=0x000000000005aa06
- (float)getScaleFactorForDisplaySize:(struct CGSize)arg1;	// IMP=0x000000000005a957
- (void)dealloc;	// IMP=0x000000000005a8c5
- (void)startDispatchTimer;	// IMP=0x000000000005a7b2
- (void)readHudSettingsAndCallCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a731
- (void)getHudSetting;	// IMP=0x000000000005a518
- (void)setColor:(int)arg1;	// IMP=0x000000000005a3ef
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000005a2f8
- (id)init;	// IMP=0x000000000005a205
- (_Bool)hudEnabled;	// IMP=0x000000000005a1f5

@end
