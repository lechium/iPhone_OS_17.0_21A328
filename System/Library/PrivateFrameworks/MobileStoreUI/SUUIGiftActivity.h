//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, SUUIClientContext, SUUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SUUIGiftActivity : UIActivity
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    SUUIProductPageItem *_item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d5de0
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;	// IMP=0x00000000002d5dcc
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000002d5dc4
- (id)_beforeActivity;	// IMP=0x00000000002d5db0
- (id)activityViewController;	// IMP=0x00000000002d5d14
- (id)activityType;	// IMP=0x00000000002d5d07
- (id)activityTitle;	// IMP=0x00000000002d5ca7
- (id)activityImage;	// IMP=0x00000000002d5c30
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000002d5b8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

