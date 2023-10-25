//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache, MURemoteViewController, MarkupViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface DCMarkupPresenter : NSObject
{
    ICDocCamDocumentInfo *_documentInfo;	// 8 = 0x8
    ICDocCamImageCache *_imageCache;	// 16 = 0x10
    MURemoteViewController *_markupRemoteViewController;	// 24 = 0x18
    MarkupViewController *_markupViewController;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
    unsigned long long _inkStyle;	// 48 = 0x30
    CDUnknownBlockType _frameBlock;	// 56 = 0x38
    CDUnknownBlockType _completionBlock;	// 64 = 0x40
    CDUnknownBlockType _startPresentBlock;	// 72 = 0x48
    CDUnknownBlockType _dismissCompletionBlock;	// 80 = 0x50
}

+ (void)cleanupMarkup;	// IMP=0x006000000002d805
+ (void)markupDocumentInfo:(id)arg1 imageCache:(id)arg2 fromView:(id)arg3 presentingViewController:(id)arg4 inkStyle:(unsigned long long)arg5 frameBlock:(CDUnknownBlockType)arg6 startPresentBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 dismissCompletionBlock:(CDUnknownBlockType)arg9;	// IMP=0x006000000002d62f
- (void).cxx_destruct;	// IMP=0x000000000002e221
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionBlock; // @synthesize dismissCompletionBlock=_dismissCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType startPresentBlock; // @synthesize startPresentBlock=_startPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType frameBlock; // @synthesize frameBlock=_frameBlock;
@property(nonatomic) unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) MarkupViewController *markupViewController; // @synthesize markupViewController=_markupViewController;
@property(retain, nonatomic) MURemoteViewController *markupRemoteViewController; // @synthesize markupRemoteViewController=_markupRemoteViewController;
@property(retain) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain) ICDocCamDocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
- (void)handleReturnedURL:(id)arg1;	// IMP=0x000000000002def2
- (void)presentMarkupViewControllerFromView:(id)arg1;	// IMP=0x000000000002db2c
- (void)dismissMarkupViewController;	// IMP=0x000000000002da5e
- (void)markupDoneAction:(id)arg1;	// IMP=0x000000000002d82f
- (void)markupCancelAction:(id)arg1;	// IMP=0x000000000002d81d
- (void)presentMarkupFromView:(id)arg1;	// IMP=0x000000000002d80b

@end
