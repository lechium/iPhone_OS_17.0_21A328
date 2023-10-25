//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;	// IMP=0x00800000000ec210
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;	// IMP=0x00000000000ec600
- (void)webViewDidDrawTiles:(id)arg1;	// IMP=0x00000000000ec5f0
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;	// IMP=0x00000000000ec5e0
- (long long)getPasteboardChangeCount;	// IMP=0x00000000000ec5d0
- (_Bool)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(_Bool)arg3;	// IMP=0x00000000000ec5c0
- (_Bool)performsTwoStepPaste:(id)arg1;	// IMP=0x00000000000ec5b0
- (_Bool)hasRichlyEditableSelection;	// IMP=0x00000000000ec5a0
- (_Bool)shouldSuppressPasswordEcho;	// IMP=0x00000000000ec590
- (int)deviceOrientation;	// IMP=0x00000000000ec580
- (void)showPlaybackTargetPicker:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x00000000000ec570
- (_Bool)shouldRevealCurrentSelectionAfterInsertion;	// IMP=0x00000000000ec560
- (struct CGPoint)interactionLocation;	// IMP=0x00000000000ec540
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000ec530
- (long long)getPasteboardItemsCount;	// IMP=0x00000000000ec520
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000ec510
- (void)writeDataToPasteboard:(id)arg1;	// IMP=0x00000000000ec500
- (id)checkSpellingOfString:(id)arg1;	// IMP=0x00000000000ec4f0
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3;	// IMP=0x00000000000ec4d0
- (void)webViewDidEndOverflowScroll:(id)arg1;	// IMP=0x00000000000ec4c0
- (void)webViewDidStartOverflowScroll:(id)arg1;	// IMP=0x00000000000ec4b0
- (void)webViewDidLayout:(id)arg1;	// IMP=0x00000000000ec4a0
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;	// IMP=0x00000000000ec490
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;	// IMP=0x00000000000ec480
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(_Bool)arg6 allowVerticalScrollbar:(_Bool)arg7;	// IMP=0x00000000000ec470
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;	// IMP=0x00000000000ec460
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;	// IMP=0x00000000000ec450
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;	// IMP=0x00000000000ec440
- (void)deleteFromInput;	// IMP=0x00000000000ec430
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000ec420
- (_Bool)handleKeyAppCommandForCurrentEvent;	// IMP=0x00000000000ec410
- (_Bool)handleKeyTextCommandForCurrentEvent;	// IMP=0x00000000000ec400
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000000ec3f0
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000ec3e0
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000ec3d0
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;	// IMP=0x00000000000ec3c0
- (void)webViewDidReceiveMobileDocType:(id)arg1;	// IMP=0x00000000000ec3b0
- (void)webViewDidRestoreFromPageCache:(id)arg1;	// IMP=0x00000000000ec3a0
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;	// IMP=0x00000000000ec390
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;	// IMP=0x00000000000ec380
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;	// IMP=0x00000000000ec370
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000000ec360
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000000ec350
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec340
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;	// IMP=0x00000000000ec330
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;	// IMP=0x00000000000ec320
- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec310
- (void)webViewDidPreventDefaultForEvent:(id)arg1;	// IMP=0x00000000000ec300
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec2f0
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec2e0
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;	// IMP=0x00000000000ec2d0
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;	// IMP=0x00000000000ec2c0
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec2b0
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000ec2a0
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000000ec290
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000ec280
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;	// IMP=0x00000000000ec260
- (struct CGPoint)contentsPointForWebView:(id)arg1;	// IMP=0x00000000000ec240

@end
