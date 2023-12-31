//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextItemInteractionInteraction, UIView;
@protocol UITextLinkInteraction;

__attribute__((visibility("hidden")))
@interface _UITextLinkInteractionSession : NSObject
{
    UITextItemInteractionInteraction *_interaction;	// 8 = 0x8
    UIView<UITextLinkInteraction> *_linkInteractionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000137f9ea
- (_Bool)tapOnLinkWithGesture:(id)arg1;	// IMP=0x000000000137f8e6
- (_Bool)_allowItemInteractions;	// IMP=0x000000000137f8af
- (_Bool)canInteractWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000137f85c
- (void)dealloc;	// IMP=0x000000000137f802
- (id)initWithTextItemInteraction:(id)arg1;	// IMP=0x000000000137f737

@end

