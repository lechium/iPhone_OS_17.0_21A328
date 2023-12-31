//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CABackdropLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackdropEffectView : UIView
{
    CABackdropLayer *_backdropLayer;	// 128 = 0x80
    double _zoom;	// 136 = 0x88
}

+ (Class)layerClass;	// IMP=0x00100000001772bb
- (void).cxx_destruct;	// IMP=0x0000000000177990
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x00000000001778f8
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000001773d5
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000001772de
- (id)init;	// IMP=0x00000000001771e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

