//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class SFShareAudioViewController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SFShareAudioBaseViewController : UIViewController
{
    SFShareAudioViewController *_mainController;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIView *_cardView;	// 24 = 0x18
    _Bool _viewActive;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000033dbf
@property(nonatomic) _Bool viewActive; // @synthesize viewActive=_viewActive;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SFShareAudioViewController *mainController; // @synthesize mainController=_mainController;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000033cf4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000033bd3

@end
