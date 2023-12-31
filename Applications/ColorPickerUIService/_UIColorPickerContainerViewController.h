//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, NSXPCConnection, UIScrollView, UIView, UIVisualEffectView, _UIColorPickerViewControllerConfiguration;
@protocol EDServiceServer, _UIColorPickerViewProviding, _UIColorPickerViewProvidingDelegate;

@interface _UIColorPickerContainerViewController : UIViewController
{
    id <EDServiceServer> _eyeDropperServerProxy;	// 8 = 0x8
    NSXPCConnection *_eyeDropperConnection;	// 16 = 0x10
    CDUnknownBlockType _eyeDropperDismissBlock;	// 24 = 0x18
    CDUnknownBlockType _eyeDropperSelectionBlock;	// 32 = 0x20
    UIViewController<_UIColorPickerViewProviding> *_contentViewController;	// 40 = 0x28
    _UIColorPickerViewControllerConfiguration *_configuration;	// 48 = 0x30
    UIVisualEffectView *_visualEffectView;	// 56 = 0x38
    UIScrollView *_scrollView;	// 64 = 0x40
    UIView *_touchExtensionView;	// 72 = 0x48
    id <_UIColorPickerViewProvidingDelegate> __delegate;	// 80 = 0x50
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000003cf66
- (void).cxx_destruct;	// IMP=0x002000000003cfa3
@property(nonatomic, setter=_setDelegate:) __weak id <_UIColorPickerViewProvidingDelegate> _delegate; // @synthesize _delegate=__delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000003cf6e
- (void)eyedropperDidFloat;	// IMP=0x001000000003cf29
- (void)eyedropperDidDismiss;	// IMP=0x001000000003ce68
- (void)eyedropperDidSelectColor:(id)arg1;	// IMP=0x001000000003cdea
- (void)floatEyedropper;	// IMP=0x001000000003cdb4
- (void)invokeEyedropper;	// IMP=0x001000000003ccc0
- (void)_createServerProxyIfNeeded;	// IMP=0x001000000003c8c4
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x001000000003c785
- (void)loadView;	// IMP=0x001000000003c101
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x001000000003c021
- (void)_pickerDidFloatEyeDropper;	// IMP=0x001000000003c00f
- (void)_pickerDidShowEyedropperWithSelectionBlock:(CDUnknownBlockType)arg1 dismissBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bf11
- (void)_pickerDidSelectColor:(id)arg1 isVolatile:(_Bool)arg2;	// IMP=0x001000000003be70
- (void)_pickerDidFinish;	// IMP=0x001000000003be33
- (void)_setConfiguration:(id)arg1;	// IMP=0x001000000003bd93
- (void)_setSelectedColor:(id)arg1 colorSpace:(id)arg2;	// IMP=0x001000000003bd76
- (void)_commonInit;	// IMP=0x001000000003bd23
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003bcd7
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000003bc8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

