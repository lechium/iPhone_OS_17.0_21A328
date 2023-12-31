//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class FontInstallMissingNavigationController, MISSING_TYPE, NSArray, NSMutableArray, NSString, NSXPCConnection, UIImage, UIStoryboard, UIViewController;

@interface FontInstallMissingController : SBUIRemoteAlertServiceViewController
{
    UIStoryboard *_storyboard;	// 8 = 0x8
    UIViewController *_initialViewController;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_cancelTitle;	// 32 = 0x20
    NSString *_noncancelTitle;	// 40 = 0x28
    NSString *_alertTitle;	// 48 = 0x30
    NSString *_messageText;	// 56 = 0x38
    UIImage *_mainIcon;	// 64 = 0x40
    UIImage *_subIcon;	// 72 = 0x48
    FontInstallMissingNavigationController *_detailPresentationController;	// 80 = 0x50
    NSArray *_input;	// 88 = 0x58
    MISSING_TYPE *_output;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000004b8d
@property(retain, nonatomic) NSMutableArray *output; // @synthesize output=_output;
@property(retain, nonatomic) NSArray *input; // @synthesize input=_input;
- (void)doneWithMissingFonts:(id)arg1 withDismissAnimated:(_Bool)arg2;	// IMP=0x0010000000004928
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000047c9
- (void)configureControllersForInput;	// IMP=0x0010000000003b1d
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000396e
- (void)connectToEndpoint:(id)arg1;	// IMP=0x0010000000003789
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000003709
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000003685
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000302d

@end

