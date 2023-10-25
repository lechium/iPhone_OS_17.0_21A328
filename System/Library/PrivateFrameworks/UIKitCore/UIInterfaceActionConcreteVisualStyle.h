//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject
{
}

- (id)newRepresentationViewForAction:(id)arg1;	// IMP=0x00000000000d5b87
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d5b81
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d5b7b
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000d5b75
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x00000000000d5b68
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x00000000000d5b62
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x00000000000d5b55
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000d5b4f
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x00000000000d5b42
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000d5b3c
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x00000000000d5b2f
- (double)actionSpacingForGroupViewState:(id)arg1;	// IMP=0x00000000000d5b26
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000d5b1e
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d5b0c
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x00000000000d5afa
- (id)actionTitleLabelCompositingFilterForViewState:(id)arg1;	// IMP=0x00000000000d5af2
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d5ad9
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x00000000000d5ab6
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x00000000000d5aae
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000d5aa6
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000d5a9e
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x00000000000d5a96
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x00000000000d5a8e
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x00000000000d5a80
- (_Bool)selectByIndirectPointerTouchRequired;	// IMP=0x00000000000d5a78
- (_Bool)selectionFeedbackEnabled;	// IMP=0x00000000000d5a70
- (_Bool)selectByPressGestureRequired;	// IMP=0x00000000000d5a68
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x00000000000d5a55
- (double)actionSectionSpacing;	// IMP=0x00000000000d5a4c
- (_Bool)allowsZeroSizedSectionSeparators;	// IMP=0x00000000000d5a44
- (double)verticalImageContentSpacing;	// IMP=0x00000000000d5a3b
- (double)horizontalImageContentSpacing;	// IMP=0x00000000000d5a32
- (struct CGSize)minimumActionContentSize;	// IMP=0x00000000000d5a1c
- (struct UIEdgeInsets)contentMargin;	// IMP=0x00000000000d5a09
- (double)contentCornerRadius;	// IMP=0x00000000000d5a00
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x00000000000d5973
- (id)defaultScreen;	// IMP=0x00000000000d595a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
