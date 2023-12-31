//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSString, NSTimer, UIButton, UIViewController;

@interface CRLStepper : UIControl
{
    _Bool _continuous;	// 8 = 0x8
    _Bool _upButtonDepressed;	// 9 = 0x9
    _Bool _downButtonDepressed;	// 10 = 0xa
    double _currentValue;	// 16 = 0x10
    double _increment;	// 24 = 0x18
    double _minValue;	// 32 = 0x20
    double _maxValue;	// 40 = 0x28
    UIViewController *_crlaxDefaultViewControllerForLargeContent;	// 48 = 0x30
    UIViewController *_crlaxPreferredViewControllerForLargeContent;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    UIButton *_downButton;	// 72 = 0x48
    UIButton *_upButton;	// 80 = 0x50
    long long _continuousCounter;	// 88 = 0x58
    long long _continuousDifference;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000050535c
@property(nonatomic) _Bool downButtonDepressed; // @synthesize downButtonDepressed=_downButtonDepressed;
@property(nonatomic) _Bool upButtonDepressed; // @synthesize upButtonDepressed=_upButtonDepressed;
@property(nonatomic) long long continuousDifference; // @synthesize continuousDifference=_continuousDifference;
@property(nonatomic) long long continuousCounter; // @synthesize continuousCounter=_continuousCounter;
@property(readonly, nonatomic) UIButton *upButton; // @synthesize upButton=_upButton;
@property(readonly, nonatomic) UIButton *downButton; // @synthesize downButton=_downButton;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIViewController *crlaxPreferredViewControllerForLargeContent; // @synthesize crlaxPreferredViewControllerForLargeContent=_crlaxPreferredViewControllerForLargeContent;
@property(nonatomic) __weak UIViewController *crlaxDefaultViewControllerForLargeContent; // @synthesize crlaxDefaultViewControllerForLargeContent=_crlaxDefaultViewControllerForLargeContent;
@property(nonatomic) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double increment; // @synthesize increment=_increment;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (id)viewControllerForLargeContentViewerInteraction:(id)arg1;	// IMP=0x0010000000505169
- (id)i_downButton;	// IMP=0x0010000000505154
- (id)i_upButton;	// IMP=0x001000000050513f
- (void)handleDownButtonTouchUpInsideEvent:(id)arg1;	// IMP=0x0010000000504d83
- (void)handleDownButtonTouchDownEvent:(id)arg1;	// IMP=0x0010000000504bb0
- (void)handleUpButtonTouchUpInsideEvent:(id)arg1;	// IMP=0x0010000000504a8a
- (void)handleUpButtonTouchDownEvent:(id)arg1;	// IMP=0x00100000005048b7
- (void)p_handleDownButtonTimer:(id)arg1;	// IMP=0x00100000005047a1
- (void)p_handleUpButtonTimer:(id)arg1;	// IMP=0x0010000000504690
- (void)p_updateContinuousDifference:(_Bool)arg1;	// IMP=0x0010000000504563
- (void)dealloc;	// IMP=0x00100000005044f8
- (id)init;	// IMP=0x0010000000503cfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

