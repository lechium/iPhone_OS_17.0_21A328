//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface TURemoteVideoClient : NSObject
{
    long long _videoContextSlotIdentifier;	// 8 = 0x8
    CALayer *_videoLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000071b7c
@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) long long videoContextSlotIdentifier; // @synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier;
- (void)cleanUpSubLayerForLayer:(id)arg1;	// IMP=0x0000000000071923
- (id)nameForSubLayer;	// IMP=0x00000000000718f7
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;	// IMP=0x00000000000710bc
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;	// IMP=0x0000000000070eb1
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;	// IMP=0x0000000000070e74
- (id)init;	// IMP=0x0000000000070dea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

