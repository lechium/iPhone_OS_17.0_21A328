//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLBoardItemEditor, CRLInteractiveCanvasController, NSSet, NSString, _TtC8Freeform21CRLEditingCoordinator;

@interface CRLMediaReplacingHelper : NSObject
{
    CRLBoardItemEditor *_editor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000003114d3
@property(retain, nonatomic) CRLBoardItemEditor *editor; // @synthesize editor=_editor;
- (void)boardItemImporter:(id)arg1 needsMediaCompatibilityFeedbackWithReasons:(long long)arg2 forMediaType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000031135a
- (void)p_replaceSelectedMediaWithInfoFromInfoImporter:(id)arg1 interactively:(_Bool)arg2 allowedTypes:(id)arg3 actionString:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000030f003
- (void)p_replaceSelectedMediaWithFileAtURL:(id)arg1 interactively:(_Bool)arg2 allowedTypes:(id)arg3 actionString:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000030eb56
- (void)replaceSelectedMediaWithData:(id)arg1 actionString:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000030e613
- (void)replaceSelectedMediaWithData:(id)arg1;	// IMP=0x001000000030e566
- (void)replaceSelectedMediaWithFilesAtURLs:(id)arg1 allowedTypes:(id)arg2 actionString:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000030e214
- (id)p_commandsToSwapConnectionsFromInfo:(id)arg1 infoMap:(id)arg2;	// IMP=0x001000000030da93
- (void)showMediaReplaceUI:(id)arg1;	// IMP=0x001000000030d486
@property(readonly, nonatomic) CRLInteractiveCanvasController *interactiveCanvasController;
@property(readonly, nonatomic) _TtC8Freeform21CRLEditingCoordinator *editingCoordinator;
@property(readonly, nonatomic) NSSet *boardItems;
- (id)initWithEditor:(id)arg1;	// IMP=0x001000000030d3d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

