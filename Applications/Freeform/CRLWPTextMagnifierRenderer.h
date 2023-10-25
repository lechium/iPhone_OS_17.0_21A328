//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol CRLWPTextMagnifierRendererDelegate;

@interface CRLWPTextMagnifierRenderer : UIView
{
    int _autoscrollDirections;	// 8 = 0x8
    id <CRLWPTextMagnifierRendererDelegate> _rendererDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000056bed0
@property(nonatomic) int autoscrollDirections; // @synthesize autoscrollDirections=_autoscrollDirections;
@property(nonatomic) __weak id <CRLWPTextMagnifierRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x001000000056bde3
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000056bddb
- (void)layoutSubviews;	// IMP=0x001000000056bd65
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000056bc8d

@end
