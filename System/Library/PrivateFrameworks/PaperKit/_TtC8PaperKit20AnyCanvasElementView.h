//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit20AnyCanvasElementView : UIView
{
    MISSING_TYPE *canvas;	// 8 = 0x8
    MISSING_TYPE *parentCanvasElement;	// 16 = 0x10
    MISSING_TYPE *isSelected;	// 24 = 0x18
    MISSING_TYPE *isDragging;	// 25 = 0x19
    MISSING_TYPE *isContextMenuInteractionVisible;	// 26 = 0x1a
    MISSING_TYPE *isDetectedFormField;	// 27 = 0x1b
    MISSING_TYPE *startsNewAutofillContext;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000120790
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000120730
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001200d0
- (void)textBoxViewUpdateModelFrame:(id)arg1 modelFrame:(struct CGRect)arg2;	// IMP=0x000000000032d060
- (void)textBoxViewUpdateViewFrame:(id)arg1 viewFrame:(struct CGRect)arg2;	// IMP=0x000000000032d050
- (struct CGRect)textBoxViewActiveTextBoxFrame:(id)arg1;	// IMP=0x000000000032d030

@end

