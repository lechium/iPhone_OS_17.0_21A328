//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CKAudioController, NSObject, NSString;
@protocol CKNotificationAudioViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKNotificationAudioViewController : UIViewController
{
    CKAudioController *_audioController;	// 8 = 0x8
    NSObject<CKNotificationAudioViewControllerDelegate> *_delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013eb6e
@property(nonatomic) __weak NSObject<CKNotificationAudioViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_audioMessageToggled;	// IMP=0x000000000013ea9f
- (void)buttonTapped:(id)arg1;	// IMP=0x000000000013ea8d
- (void)playOrPauseAudioMessage;	// IMP=0x000000000013ea7b
- (void)loadMessage:(id)arg1;	// IMP=0x000000000013e898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

