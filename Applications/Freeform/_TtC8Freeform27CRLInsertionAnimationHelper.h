//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform27CRLInsertionAnimationHelper : NSObject
{
    MISSING_TYPE *animationType;	// 8 = 0x8
    MISSING_TYPE *phase1Infos;	// 16 = 0x10
    MISSING_TYPE *phase2Infos;	// 24 = 0x18
    MISSING_TYPE *phase3Infos;	// 32 = 0x20
    MISSING_TYPE *connectionLineLayout;	// 40 = 0x28
    MISSING_TYPE *coordinateSpaceProvidingInfo;	// 48 = 0x30
    MISSING_TYPE *icc;	// 56 = 0x38
    MISSING_TYPE *completionHandler;	// 64 = 0x40
    MISSING_TYPE *layerTransition;	// 80 = 0x50
}

+ (void)addCommitDuplicateAnimationsWithCommittedBoardItem:(id)arg1 committedConnectionLineLayout:(id)arg2 interactiveCanvasController:(id)arg3;	// IMP=0x00200000008b0e40
+ (void)addGhostDuplicatePreviewAnimationsWithGhostGroupItem:(id)arg1 invisibleAnchorItem:(id)arg2 ghostDuplicatedItem:(id)arg3 ghostConnectionLineLayout:(id)arg4 interactiveCanvasController:(id)arg5;	// IMP=0x00100000008b0d90
+ (void)addChangeShapeAnimationsWithAnimateOutInfos:(id)arg1 animateInInfos:(id)arg2 interactiveCanvasController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000008b0cd0
+ (void)addInsertionAnimationsToInfos:(id)arg1 onInteractiveCanvasController:(id)arg2;	// IMP=0x00100000008b0c70
+ (void)addInsertionAnimationsToInfo:(id)arg1 connectionLineLayout:(id)arg2 onInteractiveCanvasController:(id)arg3;	// IMP=0x00100000008b0bb0
+ (void)addInsertionAnimationsToInfo:(id)arg1 onInteractiveCanvasController:(id)arg2;	// IMP=0x00100000008b0b20
- (void).cxx_destruct;	// IMP=0x00400000008b6d00
- (id)init;	// IMP=0x00100000008b6ca0

@end

