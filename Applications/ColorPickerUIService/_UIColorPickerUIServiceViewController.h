//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, _UIColorPickerContainerViewController;

@interface _UIColorPickerUIServiceViewController : UIViewController
{
    _UIColorPickerContainerViewController *_containerViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003e872
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000003e86a
- (void)_pickerDidDismissEyedropper;	// IMP=0x001000000003e7f3
- (void)_pickerDidFloatEyedropper;	// IMP=0x001000000003e77c
- (void)_pickerDidShowEyedropper;	// IMP=0x001000000003e705
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(_Bool)arg3;	// IMP=0x001000000003e68e
- (void)_pickerDidFinish;	// IMP=0x001000000003e617
- (void)_setConfiguration:(id)arg1;	// IMP=0x001000000003e5fa
- (void)_setSelectedColor:(id)arg1 colorSpace:(id)arg2;	// IMP=0x001000000003e5dd
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000003e54e
- (void)viewDidLoad;	// IMP=0x001000000003e170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

