//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface CRLiOSCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer
{
    _Bool _zoomTimedOut;	// 8 = 0x8
}

- (void)p_cancelAfterDelay;	// IMP=0x0020000000264939
- (void)p_stopCancellationTimer;	// IMP=0x0010000000264913
- (void)p_startCancellationTimer;	// IMP=0x00100000002648ed
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000026488a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000264827
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000002647eb
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000264776
- (void)reset;	// IMP=0x001000000026472d

@end

