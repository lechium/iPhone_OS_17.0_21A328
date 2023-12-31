//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, UIImageView, UILabel, _TtC18SharingViewService20SVSAdjustedImageView;

@interface AirPodsMismatchViewController
{
    UILabel *_leftMajorLabel;	// 32 = 0x20
    UILabel *_leftMinorLabel;	// 40 = 0x28
    UIImageView *_leftPointerImageView;	// 48 = 0x30
    UILabel *_rightMajorLabel;	// 56 = 0x38
    UILabel *_rightMinorLabel;	// 64 = 0x40
    UIImageView *_rightPointerImageView;	// 72 = 0x48
    _TtC18SharingViewService20SVSAdjustedImageView *_productImageView;	// 80 = 0x50
    NSDictionary *_userInfo;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001a17f7
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x00100000001a174d
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000001a16c5
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00100000001a1649
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001a1641
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001a15bf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001a118c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

