//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class IKAppDocument, NSDictionary, NSString, VideosExtrasActivityIndicator;
@protocol VideosExtrasLoadingViewDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasLoadingView : UIView
{
    IKAppDocument *_document;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    VideosExtrasActivityIndicator *_activityIndicator;	// 24 = 0x18
    id <VideosExtrasLoadingViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ca18a
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000000ca11d
- (void)documentNeedsUpdate:(id)arg1;	// IMP=0x00000000000ca117
- (void)_show;	// IMP=0x00000000000ca020
- (void)cancelCountdownToVisibility;	// IMP=0x00000000000c9fef
- (void)startCountdownToVisibilityWithInterval:(double)arg1;	// IMP=0x00000000000c9fd4
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000c9bdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

