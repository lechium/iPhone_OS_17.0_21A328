//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@interface UIView (GKAdditionsAdditional)
+ (id)_gkStandardBackdropView;	// IMP=0x002000000015263c
+ (id)_gkViewFromNib;	// IMP=0x002000000015ac07
- (id)_gkAncestryAffectingVisualLayout;	// IMP=0x0010000000008007
- (id)_gkAncestryDescription;	// IMP=0x0010000000007ee0
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000007ecb
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;	// IMP=0x0010000000007cf2
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;	// IMP=0x0010000000007b5e
- (id)_gkRecursiveDescriptionForKey:(id)arg1;	// IMP=0x0010000000007b4a
- (void)_gkRecursivelyApplyBlock:(CDUnknownBlockType)arg1 depth:(long long)arg2;	// IMP=0x0010000000007a56
- (void)_gkSetNeedsRender;	// IMP=0x0010000000008dc3
- (void)_gkRemoveAllConstraints;	// IMP=0x001000000011facf
- (void)_gkUseAsModalSheetBackgroundWithGroupName:(id)arg1;	// IMP=0x0010000000152a32
- (void)_gkApplyBackdropViewIfNeededWithGroupName:(id)arg1;	// IMP=0x0010000000152890
- (void)_gkApplyBackdropViewWithGroupName:(id)arg1;	// IMP=0x0010000000152811
- (id)_gkBackdropView;	// IMP=0x001000000015277d
- (id)_gkApplyFakeStatusBarView;	// IMP=0x001000000015266a
- (void)_gkSetDrawsAsKnockout:(_Bool)arg1 inBackdrop:(id)arg2;	// IMP=0x0010000000152584
- (void)_gkSetDrawsAsBackdropOverlay:(_Bool)arg1;	// IMP=0x001000000015254e
@property(nonatomic, readonly) double lastBaselineMaxY;
@property(nonatomic, readonly) double lastBaselineFromBottom;
@property(nonatomic, readonly) double firstBaselineFromTop;
@end

