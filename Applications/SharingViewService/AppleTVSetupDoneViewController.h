//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, UIButton, UIImageView, UILabel;

@interface AppleTVSetupDoneViewController
{
    UIButton *_doneButton;	// 32 = 0x20
    UIImageView *_iCloudIcon;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UILabel *_infoLabel;	// 56 = 0x38
    UIButton *_reportBugButton;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    NSString *_deviceIdentifier;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000169931
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)handleReportBugButton:(id)arg1;	// IMP=0x0010000000169526
- (void)_launchTVRemote;	// IMP=0x0010000000169520
- (void)handleDismissButton:(id)arg1;	// IMP=0x001000000016947a
- (void)handleActionButton:(id)arg1;	// IMP=0x00100000001692e6
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000169264
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000168ba4

@end

