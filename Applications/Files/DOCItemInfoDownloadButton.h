//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class DOCDownloadProgressView, FPItem, UIButton;
@protocol DOCItemInfoDownloadButtonDelegate;

@interface DOCItemInfoDownloadButton : UIControl
{
    _Bool _itemCanBeOpened;	// 8 = 0x8
    FPItem *_item;	// 16 = 0x10
    id <DOCItemInfoDownloadButtonDelegate> _delegate;	// 24 = 0x18
    DOCDownloadProgressView *_progressView;	// 32 = 0x20
    UIButton *_underlyingButton;	// 40 = 0x28
    unsigned long long _downloadState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000003c5c
@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) UIButton *underlyingButton; // @synthesize underlyingButton=_underlyingButton;
@property(nonatomic) __weak DOCDownloadProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <DOCItemInfoDownloadButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool itemCanBeOpened; // @synthesize itemCanBeOpened=_itemCanBeOpened;
@property(retain, nonatomic) FPItem *item; // @synthesize item=_item;
- (void)userDidTapDownloadButton;	// IMP=0x00100000000033ed
- (void)updateForState;	// IMP=0x00100000000033e7
- (void)applyTintColorToViews;	// IMP=0x0010000000003200
- (void)tintColorDidChange;	// IMP=0x00100000000031bf
- (void)commonInit;	// IMP=0x0010000000002e89
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002e3d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000002de0

@end

