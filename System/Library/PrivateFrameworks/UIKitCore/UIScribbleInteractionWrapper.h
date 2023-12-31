//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIIndirectScribbleInteraction, UIScribbleInteraction, UIView;
@protocol UIInteraction;

__attribute__((visibility("hidden")))
@interface UIScribbleInteractionWrapper : NSObject
{
    UIScribbleInteraction *_scribbleInteraction;	// 8 = 0x8
    UIIndirectScribbleInteraction *_indirectInteraction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f45100
- (_Bool)shouldDisableInputAssistant;	// IMP=0x0000000000f45002
- (_Bool)isElementFocused:(id)arg1;	// IMP=0x0000000000f44f60
- (_Bool)supportsIsElementFocused;	// IMP=0x0000000000f44f58
- (id)suggestedStrokeColorForElement:(id)arg1;	// IMP=0x0000000000f44f50
- (_Bool)isElement:(id)arg1 inFrontOf:(id)arg2;	// IMP=0x0000000000f44f48
- (_Bool)supportsIsElementInFrontOfElement;	// IMP=0x0000000000f44f40
- (_Bool)isElementContainer;	// IMP=0x0000000000f44f19
- (struct UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets)arg1 element:(id)arg2;	// IMP=0x0000000000f44d9b
- (void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f44c6f
- (void)requestElementsInRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f44aa3
- (void)didFinishWritingInElement:(id)arg1;	// IMP=0x0000000000f44989
- (void)willBeginWritingInElement:(id)arg1;	// IMP=0x0000000000f4480b
- (_Bool)shouldBeginAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000f44773
- (_Bool)focusWillTransformElement:(id)arg1;	// IMP=0x0000000000f4467b
- (void)endSuppressingPlaceholderForElement:(id)arg1;	// IMP=0x0000000000f44675
- (_Bool)beginSuppressingPlaceholderForElement:(id)arg1;	// IMP=0x0000000000f4466d
- (struct CGRect)frameForElement:(id)arg1;	// IMP=0x0000000000f4459c
- (_Bool)supportsShouldBegin;	// IMP=0x0000000000f44535
@property(readonly, nonatomic) id <UIInteraction> interaction;
@property(readonly, nonatomic) UIView *view;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f442e1
- (id)initWithCustomScribbleInteraction:(id)arg1 indirectScribbleInteraction:(id)arg2;	// IMP=0x0000000000f4424f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *interactionView;
@property(readonly) Class superclass;

@end

