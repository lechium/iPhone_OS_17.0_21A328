//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CRLCanvasContainerRep-Protocol.h"

@class CRLWPRep, CRLWPStorage, NSObject;
@protocol CRLCanvasElementInfo;

@protocol CRLWPRepParent <CRLCanvasContainerRep>

@optional
@property(readonly, nonatomic) CRLWPStorage *storageForDragDropOperation;
- (_Bool)shouldRenderableBeDirectAncestorOfRenderableForChild:(CRLWPRep *)arg1;
- (void)willEndEditingContainedInfo:(NSObject<CRLCanvasElementInfo> *)arg1;
- (void)willBeginEditingContainedInfo:(NSObject<CRLCanvasElementInfo> *)arg1;
- (_Bool)canBeginEditingChildRepOnDoubleTap:(CRLWPRep *)arg1;
@end

