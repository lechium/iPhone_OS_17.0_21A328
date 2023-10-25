//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIGestureRecognizer, UITextField;
@protocol SRCompactTextRequestViewDelegate;

@interface SRCompactTextRequestView : UIView
{
    _Bool _allowsCancellation;	// 8 = 0x8
    _Bool _showingCancelButton;	// 9 = 0x9
    NSString *_text;	// 16 = 0x10
    id <SRCompactTextRequestViewDelegate> _delegate;	// 24 = 0x18
    UIButton *_cancelButton;	// 32 = 0x20
    UITextField *_textField;	// 40 = 0x28
    UIGestureRecognizer *_beginEditingGestureRecognizer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000007c62c
@property(readonly, nonatomic, getter=_beginEditingGestureRecognizer) UIGestureRecognizer *beginEditingGestureRecognizer; // @synthesize beginEditingGestureRecognizer=_beginEditingGestureRecognizer;
@property(nonatomic, getter=_isShowingCancelButton, setter=_setShowingCancelButton:) _Bool showingCancelButton; // @synthesize showingCancelButton=_showingCancelButton;
@property(readonly, nonatomic, getter=_textField) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic, getter=_cancelButton) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <SRCompactTextRequestViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsCancellation; // @synthesize allowsCancellation=_allowsCancellation;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000007c538
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x001000000007c4d8
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000007c44c
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x001000000007c3cf
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x001000000007c334
- (_Bool)isFirstResponder;	// IMP=0x001000000007c2f0
- (_Bool)resignFirstResponder;	// IMP=0x001000000007c27d
- (_Bool)canResignFirstResponder;	// IMP=0x001000000007c239
- (_Bool)becomeFirstResponder;	// IMP=0x001000000007c224
- (_Bool)canBecomeFirstResponder;	// IMP=0x001000000007c1e0
- (void)layoutSubviews;	// IMP=0x001000000007bca3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000007bc28
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000007bbc4
- (_Bool)_laysOutContentRightToLeft;	// IMP=0x001000000007bbaa
- (void)_accessibilityBoldStatusDidChange:(id)arg1;	// IMP=0x001000000007bb6f
@property(readonly, nonatomic, getter=_preferredHeight) double preferredHeight;
- (void)_updateCancelButtonFont;	// IMP=0x001000000007b9d2
- (void)_cancelButtonWasTapped:(id)arg1;	// IMP=0x001000000007b973
- (void)_setShowingCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000007b82e
@property(readonly, nonatomic, getter=_shouldShowCancelButton) _Bool shouldShowCancelButton;
- (void)_beginEditingGestureWasRecognized:(id)arg1;	// IMP=0x001000000007b76a
- (void)_beginEditing;	// IMP=0x001000000007b693
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000007b444

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
