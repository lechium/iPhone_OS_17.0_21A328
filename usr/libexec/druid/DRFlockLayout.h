//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, _DRBadgeContainer, _UIDragBadge, _UIPlatterView;

@interface DRFlockLayout : NSObject
{
    NSMapTable *_viewsByItem;	// 8 = 0x8
    NSMapTable *_transitioningViewsByItem;	// 16 = 0x10
    NSMapTable *_imageComponentByItemView;	// 24 = 0x18
    _DRBadgeContainer *_badgeContainer;	// 32 = 0x20
    _UIDragBadge *_badge;	// 40 = 0x28
    _UIPlatterView *_badgeAnchorPlatter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001952a
@property(nonatomic) __weak _UIPlatterView *badgeAnchorPlatter; // @synthesize badgeAnchorPlatter=_badgeAnchorPlatter;
@property(retain, nonatomic) _UIDragBadge *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) _DRBadgeContainer *badgeContainer; // @synthesize badgeContainer=_badgeContainer;
@property(retain, nonatomic) NSMapTable *imageComponentByItemView; // @synthesize imageComponentByItemView=_imageComponentByItemView;
@property(retain, nonatomic) NSMapTable *transitioningViewsByItem; // @synthesize transitioningViewsByItem=_transitioningViewsByItem;
@property(retain, nonatomic) NSMapTable *viewsByItem; // @synthesize viewsByItem=_viewsByItem;
- (id)_badgeLayoutForPlatterView:(id)arg1 totalItemDepth:(double)arg2 orientation:(struct CGAffineTransform)arg3 count:(unsigned long long)arg4 potentialDrop:(id)arg5 centroid:(struct CGPoint)arg6;	// IMP=0x00100000000188d6
- (_Bool)_shouldScaleItemModel:(id)arg1 withPotentialDrop:(id)arg2;	// IMP=0x00100000000187d1
- (id)_componentViewForItemModel:(id)arg1;	// IMP=0x0010000000018624
- (id)_viewForItemModel:(id)arg1 rotation:(double)arg2 defaultCenter:(struct CGPoint)arg3 appliedTransform:(struct CGAffineTransform)arg4;	// IMP=0x00100000000182a7
- (_Bool)_isNewItemModel:(id)arg1;	// IMP=0x0010000000018224
- (id)_itemModelsForModel:(id)arg1 withCapacity:(unsigned long long)arg2;	// IMP=0x0010000000017f77
- (id)layoutWithInput:(id)arg1;	// IMP=0x0010000000016853
- (id)_previewTransitionForItemModel:(id)arg1 rotation:(double)arg2 center:(struct CGPoint)arg3 anchorPoint:(struct CGPoint)arg4 outItemView:(id *)arg5 appliedTransform:(struct CGAffineTransform)arg6;	// IMP=0x0010000000015fc3
- (struct CGPoint)_anchorPointForItem:(id)arg1 sessionModel:(id)arg2;	// IMP=0x0010000000015ee8
- (_Bool)_itemModelHasUpdatedPreview:(id)arg1 forItemView:(id)arg2;	// IMP=0x0010000000015e44
- (id)init;	// IMP=0x0010000000015ba0

@end

