//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIProgressView, _SFDownload, _SFDownloadIconCache;
@protocol DownloadTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface DownloadTableViewCell : UITableViewCell
{
    UILabel *_nameLabel;	// 8 = 0x8
    UILabel *_statusLabel;	// 16 = 0x10
    UIProgressView *_progressView;	// 24 = 0x18
    UIButton *_cancelButton;	// 32 = 0x20
    UIButton *_revealButton;	// 40 = 0x28
    UIButton *_resumeButton;	// 48 = 0x30
    CDStruct_4e0a34f2 deferrableUpdateViewState;	// 56 = 0x38
    _SFDownload *_download;	// 80 = 0x50
    _SFDownloadIconCache *_iconCache;	// 88 = 0x58
    id <DownloadTableViewCellDelegate> _delegate;	// 96 = 0x60
    UIImageView *_iconView;	// 104 = 0x68
}

+ (id)tableViewCellForSizeEstimation;	// IMP=0x001000000020cb3e
- (void).cxx_destruct;	// IMP=0x000000000020e487
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <DownloadTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _SFDownloadIconCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) _SFDownload *download; // @synthesize download=_download;
- (void)downloadIconCache:(id)arg1 didGenerateNewIcon:(id)arg2 forSource:(id)arg3;	// IMP=0x000000000020e3e4
- (void)updateContents;	// IMP=0x000000000020e3d2
- (CDStruct_4e0a34f2 *)deferrableUpdateViewState;	// IMP=0x000000000020e3c2
- (id)_busyStatus;	// IMP=0x000000000020e26b
- (void)_updateCellContentsForSizing;	// IMP=0x000000000020e216
- (void)_updateCellContents;	// IMP=0x000000000020dde5
- (void)_downloadURLChanged:(id)arg1;	// IMP=0x000000000020dd86
- (void)_downloadChanged:(id)arg1;	// IMP=0x000000000020dd57
- (void)_buttonPressed:(id)arg1;	// IMP=0x000000000020daff
- (id)_buttonWithSymbolName:(id)arg1;	// IMP=0x000000000020d9b9
- (void)didMoveToWindow;	// IMP=0x000000000020d980
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000020d800
- (void)dealloc;	// IMP=0x000000000020d7b4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000020cb7e

@end

