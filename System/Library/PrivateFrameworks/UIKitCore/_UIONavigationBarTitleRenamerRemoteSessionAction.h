//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIONavigationBarTitleRenamerRemoteSessionAction
{
}

+ (id)fileRenameDidEndInSession:(id)arg1 withFinalURL:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0080000001501e67
+ (id)fileRenameDidFailInSession:(id)arg1 withError:(id)arg2 proposedName:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0080000001501d01
+ (id)didCancelSession:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0080000001501c21
+ (id)didEndEditingActionWithSession:(id)arg1 text:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0080000001501b17
+ (id)shouldEndEditingActionWithSession:(id)arg1 text:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0080000001501a0d
+ (id)willBeginRenamingActionWithSession:(id)arg1 text:(id)arg2 selectedRange:(struct _NSRange)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00800000015018bb
+ (id)_actionWithSettings:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x008000000150178c
- (void)handleClientActionToOverlayService:(id)arg1;	// IMP=0x0000000001502498
- (id)finalURL;	// IMP=0x000000000150237d
- (id)error;	// IMP=0x0000000001502232
- (struct _NSRange)selectedRange;	// IMP=0x00000000015020fc
- (id)text;	// IMP=0x0000000001501fe1
- (int)_action;	// IMP=0x0000000001501f71

@end

