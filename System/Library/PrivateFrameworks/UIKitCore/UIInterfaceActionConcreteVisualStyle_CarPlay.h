//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_CarPlay
{
}

- (id)_normalActionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d29be
- (id)_highlightedActionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d29a5
- (id)_preferredActionFont;	// IMP=0x00000000000d2984
- (id)_regularActionFont;	// IMP=0x00000000000d2963
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000d2952
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x00000000000d2941
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x00000000000d289e
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d2829
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x00000000000d27da
- (_Bool)selectByPressGestureRequired;	// IMP=0x00000000000d27d2
- (struct CGSize)minimumActionContentSize;	// IMP=0x00000000000d27c1
- (double)verticalImageContentSpacing;	// IMP=0x00000000000d27b3
- (double)horizontalImageContentSpacing;	// IMP=0x00000000000d27a5
- (struct UIEdgeInsets)contentMargin;	// IMP=0x00000000000d278e
- (double)contentCornerRadius;	// IMP=0x00000000000d2780
- (id)defaultScreen;	// IMP=0x00000000000d2767

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

