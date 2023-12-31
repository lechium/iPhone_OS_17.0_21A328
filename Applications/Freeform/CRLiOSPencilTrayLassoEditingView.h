//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CRLAXZorderButton, CRLiOSPencilTrayColorWell, NSString, UIColor, UILargeContentViewerInteraction, UILongPressGestureRecognizer;

@interface CRLiOSPencilTrayLassoEditingView : UIView
{
    CRLiOSPencilTrayColorWell *_fillColorWell;	// 8 = 0x8
    CRLiOSPencilTrayColorWell *_strokeColorWell;	// 16 = 0x10
    CRLAXZorderButton *_sendBackwardButton;	// 24 = 0x18
    UILongPressGestureRecognizer *_sendToBackGR;	// 32 = 0x20
    CRLAXZorderButton *_bringForwardButton;	// 40 = 0x28
    UILongPressGestureRecognizer *_bringToFrontGR;	// 48 = 0x30
    UILargeContentViewerInteraction *_largeContentViewerInteractionForSendBackwardButton;	// 56 = 0x38
    UILargeContentViewerInteraction *_largeContentViewerInteractionForBringForwardButton;	// 64 = 0x40
    double _currentZOrderImagePoints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002a7d1d
- (void)p_updateLongPressGestureDurations;	// IMP=0x00100000002a7ca1
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00100000002a7bfd
- (void)layoutSubviews;	// IMP=0x00100000002a7654
- (void)toggleStrokeColorPickerPresentation;	// IMP=0x00100000002a745b
- (void)toggleFillColorPickerPresentation;	// IMP=0x00100000002a7262
- (void)forBringToFrontAddTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000002a7171
- (void)forBringForwardAddTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000002a714e
- (void)forSendToBackAddTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000002a705d
- (void)forSendBackwardAddTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000002a703a
- (void)forStrokeColorChangeAddTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000002a7017
- (void)forFillColorChangeAddTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000002a6ff4
@property(nonatomic, setter=setBringForwardEnabled:) _Bool isBringForwardEnabled;
@property(nonatomic, setter=setSendBackwardEnabled:) _Bool isSendBackwardEnabled;
@property(retain, nonatomic) UIColor *selectedStrokeColor;
@property(retain, nonatomic) UIColor *selectedFillColor;
- (id)p_makeZOrderButtonImageForForward:(_Bool)arg1 pointSize:(double)arg2;	// IMP=0x00100000002a6dae
- (id)p_makeZOrderButtonConfiguration;	// IMP=0x00100000002a6cf3
- (id)p_makeZOrderButton;	// IMP=0x00100000002a6c57
- (void)dealloc;	// IMP=0x00100000002a6bd5
- (void)p_commonInit;	// IMP=0x00100000002a67a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002a6757
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000002a66fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

