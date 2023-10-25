//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSMutableDictionary, PUPhotoSelectionManager, PXUIAutoScroller;
@protocol PUSwipeSelectionManagerDataSource, PUSwipeSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface PUSwipeSelectionManager : NSObject
{
    NSMutableDictionary *_oldIndexesPaths;	// 8 = 0x8
    id <PUSwipeSelectionManagerDelegate> _delegate;	// 16 = 0x10
    id <PUSwipeSelectionManagerDataSource> _datasource;	// 24 = 0x18
    PXUIAutoScroller *_selectionAutoScroller;	// 32 = 0x20
    long long __selectionMode;	// 40 = 0x28
    NSIndexPath *__startingIndexPath;	// 48 = 0x30
    PUPhotoSelectionManager *__restorePhotoSelectionManager;	// 56 = 0x38
    id __pausingChangesToken;	// 64 = 0x40
    struct CGPoint _screenTouchLocation;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000539092
@property(retain, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken; // @synthesize _pausingChangesToken=__pausingChangesToken;
@property(retain, nonatomic, setter=_setRestorePhotoSelectionManager:) PUPhotoSelectionManager *_restorePhotoSelectionManager; // @synthesize _restorePhotoSelectionManager=__restorePhotoSelectionManager;
@property(copy, nonatomic, setter=_setStartingIndexPath:) NSIndexPath *_startingIndexPath; // @synthesize _startingIndexPath=__startingIndexPath;
@property(nonatomic, setter=_setSelectionMode:) long long _selectionMode; // @synthesize _selectionMode=__selectionMode;
@property(nonatomic) struct CGPoint screenTouchLocation; // @synthesize screenTouchLocation=_screenTouchLocation;
@property(retain, nonatomic) PXUIAutoScroller *selectionAutoScroller; // @synthesize selectionAutoScroller=_selectionAutoScroller;
@property(nonatomic) __weak id <PUSwipeSelectionManagerDataSource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <PUSwipeSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSelectionWithCurrentIndexPath:(id)arg1 leftClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;	// IMP=0x0000000000538b66
- (void)endSelection;	// IMP=0x0000000000538a8b
- (void)beginSelectionFromIndexPath:(id)arg1;	// IMP=0x00000000005389fd
- (long long)_selectionModeForRestoringStateOfIndexPath:(id)arg1;	// IMP=0x0000000000538914
- (id)_indexesPathsRangeForIndexPath:(id)arg1;	// IMP=0x00000000005383eb
- (void)dealloc;	// IMP=0x00000000005382ff
- (id)initWithSelectionMode:(long long)arg1 photoSelectionManager:(id)arg2;	// IMP=0x0000000000538281
- (id)init;	// IMP=0x000000000053823d

@end
