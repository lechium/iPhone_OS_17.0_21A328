//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, NSUUID, UIDragItem, _UIDropAnimationHandlers;
@protocol _UICollectionViewPlaceholderContextDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPlaceholderContext : NSObject
{
    NSUUID *_shadowUpdateIdentifier;	// 8 = 0x8
    NSString *_reuseIdentifier;	// 16 = 0x10
    NSIndexPath *_originalInsertionIndexPath;	// 24 = 0x18
    CDUnknownBlockType _cellUpdateHandler;	// 32 = 0x20
    _UIDropAnimationHandlers *_animationHandlers;	// 40 = 0x28
    id <_UICollectionViewPlaceholderContextDelegate> _delegate;	// 48 = 0x30
    UIDragItem *_dragItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000048cccd
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property(nonatomic) __weak id <_UICollectionViewPlaceholderContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIDropAnimationHandlers *animationHandlers; // @synthesize animationHandlers=_animationHandlers;
@property(copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
@property(retain, nonatomic) NSIndexPath *originalInsertionIndexPath; // @synthesize originalInsertionIndexPath=_originalInsertionIndexPath;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSUUID *shadowUpdateIdentifier; // @synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000048cb9d
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x000000000048cb34
@property(readonly, copy) NSString *description;
- (void)setNeedsCellUpdate;	// IMP=0x000000000048ca1c
- (_Bool)commitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000048c9ad
- (_Bool)deletePlaceholder;	// IMP=0x000000000048c946
- (id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000048c813

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
