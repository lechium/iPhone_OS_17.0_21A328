//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentLayer : CALayer
{
    CALayer *_selectionLayer;	// 8 = 0x8
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000001124a16
- (void)layoutSublayers;	// IMP=0x000000000112490e
- (void)setNeedsDisplay;	// IMP=0x00000000011248c2
- (void)setSelectionNeedsDisplay;	// IMP=0x000000000112489e
- (void)dealloc;	// IMP=0x000000000112485c
- (id)init;	// IMP=0x0000000001124752

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

