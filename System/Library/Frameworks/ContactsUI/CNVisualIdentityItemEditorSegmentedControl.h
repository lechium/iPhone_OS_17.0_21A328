//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISegmentedControl.h>

__attribute__((visibility("hidden")))
@interface CNVisualIdentityItemEditorSegmentedControl : UISegmentedControl
{
}

+ (id)segmentedControlForItemType:(unsigned long long)arg1;	// IMP=0x006000000010f412
- (void)selectStyleSegment;	// IMP=0x000000000010f3fb
- (void)selectTextSegment;	// IMP=0x000000000010f3e7
- (void)setStyleSegmentEnabled:(_Bool)arg1;	// IMP=0x000000000010f3d0
- (void)setTextSegmentEnabled:(_Bool)arg1;	// IMP=0x000000000010f3bc
- (void)setStyleOnlyMode;	// IMP=0x000000000010f37a
- (void)setTextAndStyleMode;	// IMP=0x000000000010f335
@property(readonly) _Bool allowsTextInputForCurrentEditorType;
- (id)initWithItems:(id)arg1;	// IMP=0x000000000010f2a5

@end

