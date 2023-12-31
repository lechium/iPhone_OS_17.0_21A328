//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject
{
}

+ (id)sharedEditingDelegate;	// IMP=0x00800000000eb760
- (id)undoManagerForWebView:(id)arg1;	// IMP=0x00000000000eb8a0
- (void)webViewDidChangeSelection:(id)arg1;	// IMP=0x00000000000eb890
- (void)webViewDidChangeTypingStyle:(id)arg1;	// IMP=0x00000000000eb880
- (void)webViewDidEndEditing:(id)arg1;	// IMP=0x00000000000eb870
- (void)webViewDidChange:(id)arg1;	// IMP=0x00000000000eb860
- (void)webViewDidBeginEditing:(id)arg1;	// IMP=0x00000000000eb850
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;	// IMP=0x00000000000eb840
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000eb830
- (_Bool)webView:(id)arg1 doCommandBySelector:(SEL)arg2;	// IMP=0x00000000000eb820
- (_Bool)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;	// IMP=0x00000000000eb810
- (_Bool)webView:(id)arg1 shouldMoveRangeAfterDelete:(id)arg2 replacingRange:(id)arg3;	// IMP=0x00000000000eb800
- (_Bool)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;	// IMP=0x00000000000eb7f0
- (_Bool)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned long long)arg4 stillSelecting:(_Bool)arg5;	// IMP=0x00000000000eb7e0
- (_Bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;	// IMP=0x00000000000eb7d0
- (_Bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;	// IMP=0x00000000000eb7c0
- (_Bool)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;	// IMP=0x00000000000eb7b0
- (_Bool)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;	// IMP=0x00000000000eb7a0
- (_Bool)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;	// IMP=0x00000000000eb790

@end

