//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23CanvasElementController : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *shapeStyleController;	// 24 = 0x18
    MISSING_TYPE *textStyleController;	// 32 = 0x20
    MISSING_TYPE *signatureStyleController;	// 40 = 0x28
    MISSING_TYPE *toolPickerController;	// 48 = 0x30
    MISSING_TYPE *isApplyingStyle;	// 56 = 0x38
    MISSING_TYPE *canEditVellumOpacity;	// 57 = 0x39
    MISSING_TYPE *canEditDescription;	// 58 = 0x3a
    MISSING_TYPE *shouldDeselectElementsWhenToolPickerIsHidden;	// 59 = 0x3b
    MISSING_TYPE *editingContainerView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000021b740
- (id)init;	// IMP=0x000000000021b6e0
- (void)_toolPickerDidChangeScaleFactor:(id)arg1;	// IMP=0x000000000021b450
- (id)_toolPickerCurrentSelectionColor:(id)arg1;	// IMP=0x000000000021b3f0
- (_Bool)_toolPicker:(id)arg1 shouldChangeSelectedToolColor:(id)arg2;	// IMP=0x000000000021aba0
- (void)_toolPicker:(id)arg1 didChangeColor:(id)arg2;	// IMP=0x000000000021ab30
- (void)toolPickerFramesObscuredDidChange:(id)arg1;	// IMP=0x000000000021e6d0
- (void)_toolPickerDidChangePosition:(id)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;	// IMP=0x000000000021aad0

@end

