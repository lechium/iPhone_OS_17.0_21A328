//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIView, _UIFocusRegionMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMap : NSObject
{
    UIView *_rootView;	// 8 = 0x8
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    _UIFocusRegionMapSnapshot *_lastSnapshot;	// 24 = 0x18
    struct CGRect _minimumSearchArea;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008106ad
@property(retain, nonatomic) _UIFocusRegionMapSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(retain, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (_Bool)_containsFocusableRegionForView:(id)arg1;	// IMP=0x0000000000810260
- (id)debugQuickLookObject;	// IMP=0x0000000000810210
- (id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3;	// IMP=0x0000000000810061
- (id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3;	// IMP=0x000000000080fe8f
- (struct CGRect)_viewSearchRectForFocusedFrame:(struct CGRect)arg1 focusCandidateSearchRect:(struct CGRect)arg2 includesFocusedFrame:(_Bool)arg3;	// IMP=0x000000000080fbf2
- (struct CGRect)_viewSearchRectForSnapshotRect:(struct CGRect)arg1;	// IMP=0x000000000080fba5
- (struct CGRect)_rectThatJustBarelyIntersectsRect:(struct CGRect)arg1 startingRect:(struct CGRect)arg2;	// IMP=0x000000000080f641
- (struct CGRect)_focusCandidateSearchRectForFocusedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect)arg3;	// IMP=0x000000000080f1bc
- (struct CGPoint)_focusCandidateSearchOriginForFocusedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect)arg3;	// IMP=0x000000000080f10f
- (id)_closestFocusableRegionInArray:(id)arg1 toPoint:(struct CGPoint)arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(_Bool)arg5 includingFocusedView:(_Bool)arg6;	// IMP=0x000000000080ec6e
- (id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2;	// IMP=0x000000000080e906
- (id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long *)arg3;	// IMP=0x000000000080e5b0
- (id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(struct CGRect)arg3 includingFocusedView:(_Bool)arg4;	// IMP=0x000000000080d90a
- (id)nearestCandidateFromRect:(struct CGRect)arg1;	// IMP=0x000000000080d824
- (id)initWithRootView:(id)arg1 focusSystem:(id)arg2;	// IMP=0x000000000080d791

@end

