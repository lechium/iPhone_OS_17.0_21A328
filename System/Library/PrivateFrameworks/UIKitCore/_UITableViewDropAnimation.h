//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimation : NSObject
{
    _Bool _didBeginAnimation;	// 8 = 0x8
    UIDragItem *_dragItem;	// 16 = 0x10
    NSMutableArray *_animationsBlocks;	// 24 = 0x18
    NSMutableArray *_completionBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001260a1d
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSMutableArray *animationsBlocks; // @synthesize animationsBlocks=_animationsBlocks;
@property(nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) _Bool didBeginAnimation; // @synthesize didBeginAnimation=_didBeginAnimation;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
- (void)_executeCompletionBlocks;	// IMP=0x0000000001260883
- (void)_addClientBlocksToAnimator:(id)arg1;	// IMP=0x000000000126060d
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000001260580
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x00000000012604f3
- (id)initWithDragItem:(id)arg1;	// IMP=0x0000000001260488

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
