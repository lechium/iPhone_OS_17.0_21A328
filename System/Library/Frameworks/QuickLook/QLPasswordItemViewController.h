//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItemViewController.h>

@class QLPreviewContext;

__attribute__((visibility("hidden")))
@interface QLPasswordItemViewController : QLItemViewController
{
    QLPreviewContext *_context;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006af32
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;	// IMP=0x000000000006aee0
- (void)invalidate;	// IMP=0x000000000006aebf
- (void)previewWillDisappear:(_Bool)arg1;	// IMP=0x000000000006ae55
- (void)previewDidAppear:(_Bool)arg1;	// IMP=0x000000000006ad88
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ad06
- (id)passwordView;	// IMP=0x000000000006acf4
- (void)loadView;	// IMP=0x000000000006ac57
- (_Bool)canPinchToDismiss;	// IMP=0x000000000006ac4f
- (_Bool)canSwipeToDismiss;	// IMP=0x000000000006ac47
- (_Bool)canEnterFullScreen;	// IMP=0x000000000006ac3f

@end

