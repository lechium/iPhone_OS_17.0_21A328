//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UITextField, UIView;

@interface RAPAddAPlaceLocationRefinementViewController
{
    NSString *_textFieldPlaceholder;	// 8 = 0x8
    UITextField *_textField;	// 16 = 0x10
    NSLayoutConstraint *_textFieldContainerViewBottomConstraint;	// 24 = 0x18
    UIView *_textFieldContainerView;	// 32 = 0x20
    CDUnknownBlockType _textFieldEditBlock;	// 40 = 0x28
    NSString *;	// 48 = 0x30
    NSString *_textFieldText;	// 56 = 0x38
    struct CGRect _previousNavigationControllerFrame;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000045a23a
@property(nonatomic) struct CGRect previousNavigationControllerFrame; // @synthesize previousNavigationControllerFrame=_previousNavigationControllerFrame;
@property(copy, nonatomic) NSString *textFieldText; // @synthesize textFieldText=_textFieldText;
@property(copy, nonatomic) NSString *textFieldTitle; // @synthesize textFieldTitle=_textFieldTitle;
@property(copy, nonatomic) CDUnknownBlockType textFieldEditBlock; // @synthesize textFieldEditBlock=_textFieldEditBlock;
@property(retain, nonatomic) UIView *textFieldContainerView; // @synthesize textFieldContainerView=_textFieldContainerView;
@property(retain, nonatomic) NSLayoutConstraint *textFieldContainerViewBottomConstraint; // @synthesize textFieldContainerViewBottomConstraint=_textFieldContainerViewBottomConstraint;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *textFieldPlaceholder; // @synthesize textFieldPlaceholder=_textFieldPlaceholder;
- (void)adjustTextFieldContainerPositionWithKeyboardFrame:(struct CGRect)arg1;	// IMP=0x001000000045a035
- (void)keyboardDidChangeFrameNotification:(id)arg1;	// IMP=0x0010000000459dbf
- (void)keyboardWillChangeFrame:(id)arg1;	// IMP=0x0010000000459bcd
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x0010000000459b3a
@property(readonly, copy, nonatomic) NSString *editedValue;
- (void)textDidChange:(id)arg1;	// IMP=0x00100000004599c5
- (id)backgroundColor;	// IMP=0x0010000000458fb2
- (void)dealloc;	// IMP=0x0010000000458f3d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000458ed3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000458e69
- (void)viewDidLoad;	// IMP=0x00100000004585e8
- (id)initWithCamera:(id)arg1 showCrosshair:(_Bool)arg2 textFieldTitle:(id)arg3 textFieldPlaceholder:(id)arg4 textFieldText:(id)arg5 textFieldEditBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000004584a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

